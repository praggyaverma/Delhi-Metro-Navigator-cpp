#ifndef GRAPH_H
#define GRAPH_H

#include <string>
#include <unordered_map>
#include <vector>
#include <utility>

class MetroStation {
public:
    std::string stationName;
    std::string lineName;

    MetroStation() = default; // Default constructor
    MetroStation(const std::string& name, const std::string& line)
        : stationName(name), lineName(line) {}
};

class Network {
public:
    Network();

    void addStation(const std::string& stationName, const std::string& lineName);
    void addConnection(const std::string& station1, const std::string& station2, int minutes);

    std::vector<std::string> getStations(const std::string& stationName) const;
    std::vector<std::string> getLines(const std::string& stationName) const;
    std::vector<std::pair<std::string, int>> getConnectionsWithTime(const std::string& stationName) const;

    std::pair<int, std::vector<std::string>> calculateShortestTime(const std::string& start, const std::string& end) const;

private:
    std::unordered_map<std::string, MetroStation> stations;
    std::unordered_map<std::string, std::vector<std::pair<std::string, int>>> adjacencyList; // Connection with travel time
};

#endif // GRAPH_H
