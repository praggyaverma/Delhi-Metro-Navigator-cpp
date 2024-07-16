#include "graph.h"
#include <string>
#include <unordered_map>
#include <vector>
#include <queue>
#include <limits>
#include <unordered_set>

// Constructor
Network::Network() {}

// Method to add a station to the network
void Network::addStation(const std::string& stationName, const std::string& lineName) {
    if (stations.find(stationName) == stations.end()) {
        stations[stationName] = MetroStation(stationName, lineName);
        adjacencyList[stationName] = std::vector<std::pair<std::string, int>>();
    }
}

// Method to add a connection (edge) between two stations with travel time
void Network::addConnection(const std::string& station1, const std::string& station2, int minutes) {
    adjacencyList[station1].emplace_back(station2, minutes);
    adjacencyList[station2].emplace_back(station1, minutes); 
}

// Method to get connections (adjacent stations) for a given station
std::vector<std::string> Network::getStations(const std::string& stationName) const {
    std::vector<std::string> connect;
    auto it = adjacencyList.find(stationName);
    if (it != adjacencyList.end()) {
        for (const auto& station : it->second) {
            connect.push_back(station.first);
        }
    }
    return connect;
}

// Method to get line information for a given station
std::vector<std::string> Network::getLines(const std::string& stationName) const {
    std::vector<std::string> lines;
    auto it = stations.find(stationName);
    if (it != stations.end()) {
        lines.push_back(it->second.lineName);
    }
    return lines;
}

// Method to get connections with travel time for a given station
std::vector<std::pair<std::string, int>> Network::getConnectionsWithTime(const std::string& stationName) const {
    std::vector<std::pair<std::string, int>> connections;
    auto it = adjacencyList.find(stationName);
    if (it != adjacencyList.end()) {
        connections = it->second;
    }
    return connections;
}

// Method to calculate the shortest path by travel time using Dijkstra's algorithm
std::pair<int, std::vector<std::string>> Network::calculateShortestTime(const std::string& start, const std::string& end) const {
    std::priority_queue<std::pair<int, std::string>, std::vector<std::pair<int, std::string>>, std::greater<>> pq;
    std::unordered_map<std::string, int> minTime;
    std::unordered_map<std::string, std::string> previous;

    for (const auto& station : stations) {
        minTime[station.first] = std::numeric_limits<int>::max();
    }
    minTime[start] = 0;
    pq.emplace(0, start);

    while (!pq.empty()) {
        auto [currentTime, currentStation] = pq.top();
        pq.pop();

        if (currentStation == end) {
            break; // Stop early if we reach the destination
        }

        if (currentTime > minTime[currentStation]) {
            continue; // Skip processing if we have found a faster route already
        }

        for (const auto& [neighbor, time] : adjacencyList.at(currentStation)) {
            int newTime = currentTime + time;

            if (newTime < minTime[neighbor]) {
                minTime[neighbor] = newTime;
                previous[neighbor] = currentStation;
                pq.emplace(newTime, neighbor);
            }
        }
    }

    // Reconstruct the path from 'start' to 'end'
    std::vector<std::string> path;
    for (std::string at = end; at != ""; at = previous[at]) {
        path.push_back(at);
    }
    std::reverse(path.begin(), path.end());

    // Return total travel time and path
    return {minTime[end], path};
}
