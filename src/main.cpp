#include "graph.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <unordered_set>

int main() {
    Network DMRC;
    DMRC.addStation("Ashram", "Pink Line");
    DMRC.addStation("Azadpur", "Pink Line");
    DMRC.addStation("Bhikaji Cama Place", "Pink Line");
    DMRC.addStation("Delhi Cantonment", "Pink Line");
    DMRC.addStation("Durgabai Deshmukh South Campus", "Pink Line");
    DMRC.addStation("East Azad Nagar", "Pink Line");
    DMRC.addStation("East Vinod Nagar - Mayur Vihar-II", "Pink Line");
    DMRC.addStation("ESI - Basaidarapur", "Pink Line");
    DMRC.addStation("Gokulpuri", "Pink Line");
    DMRC.addStation("IP Extension", "Pink Line");
    DMRC.addStation("Jaffrabad", "Pink Line");
    DMRC.addStation("Johri Enclave", "Pink Line");
    DMRC.addStation("Karkarduma Court", "Pink Line");
    DMRC.addStation("Krishna Nagar", "Pink Line");
    DMRC.addStation("Majlis Park", "Pink Line");
    DMRC.addStation("Mandawali - West Vinod Nagar", "Pink Line");
    DMRC.addStation("Maujpur - Babarpur", "Pink Line");
    DMRC.addStation("Mayapuri", "Pink Line");
    DMRC.addStation("Mayur Vihar Pocket I", "Pink Line");
    DMRC.addStation("Naraina Vihar", "Pink Line");
    DMRC.addStation("Punjabi Bagh West", "Pink Line");
    DMRC.addStation("Sarai Kale Khan - Nizamuddin", "Pink Line");
    DMRC.addStation("Sarojini Nagar", "Pink Line");
    DMRC.addStation("Shakurpur", "Pink Line");
    DMRC.addStation("Shalimar Bagh", "Pink Line");
    DMRC.addStation("Shiv Vihar", "Pink Line");
    DMRC.addStation("Sir M. Vishweshwaraiah Moti Bagh", "Pink Line");
    DMRC.addStation("South Extension", "Pink Line");
    DMRC.addStation("Trilokpuri Sanjay Lake", "Pink Line");
    DMRC.addStation("Vinobapuri", "Pink Line");
    DMRC.addStation("Anand Vihar", "Pink Line");
    DMRC.addStation("Dilli Haat - INA", "Pink Line");
    DMRC.addStation("Karkarduma", "Pink Line");
    DMRC.addStation("Lajpat Nagar", "Pink Line");
    DMRC.addStation("Mayur Vihar-I", "Pink Line");
    DMRC.addStation("Netaji Subhash Place", "Pink Line");
    DMRC.addStation("Rajouri Garden", "Pink Line");
    DMRC.addStation("Welcome", "Pink Line");

    DMRC.addStation("Adarsh Nagar", "Yellow Line");
    DMRC.addStation("AIIMS", "Yellow Line");
    DMRC.addStation("Arjan Garh", "Yellow Line");
    DMRC.addStation("Central Secretariat", "Yellow Line");
    DMRC.addStation("Chandni Chowk", "Yellow Line");
    DMRC.addStation("Chawri Bazar", "Yellow Line");
    DMRC.addStation("Chhatarpur", "Yellow Line");
    DMRC.addStation("Civil Lines", "Yellow Line");
    DMRC.addStation("Ghitorni", "Yellow Line");
    DMRC.addStation("Green Park", "Yellow Line");
    DMRC.addStation("GTB Nagar", "Yellow Line");
    DMRC.addStation("Guru Dronacharya", "Yellow Line");
    DMRC.addStation("Haiderpur Badli Mor", "Yellow Line");
    DMRC.addStation("Hauz Khas", "Yellow Line");
    DMRC.addStation("HUDA City Centre", "Yellow Line");
    DMRC.addStation("IFFCO Chowk", "Yellow Line");
    DMRC.addStation("Jahangirpuri", "Yellow Line");
    DMRC.addStation("Jor Bagh", "Yellow Line");
    DMRC.addStation("Lok Kalyan Marg", "Yellow Line");
    DMRC.addStation("Malviya Nagar", "Yellow Line");
    DMRC.addStation("MG Road", "Yellow Line");
    DMRC.addStation("Model Town", "Yellow Line");
    DMRC.addStation("New Delhi", "Yellow Line");
    DMRC.addStation("Patel Chowk", "Yellow Line");
    DMRC.addStation("Qutab Minar", "Yellow Line");
    DMRC.addStation("Rajiv Chowk", "Yellow Line");
    DMRC.addStation("Rohini Sector 18, 19", "Yellow Line");
    DMRC.addStation("Saket", "Yellow Line");
    DMRC.addStation("Samaypur Badli", "Yellow Line");
    DMRC.addStation("Sikanderpur", "Yellow Line");
    DMRC.addStation("Sultanpur", "Yellow Line");
    DMRC.addStation("Udyog Bhawan", "Yellow Line");
    DMRC.addStation("Vidhan Sabha", "Yellow Line");
    DMRC.addStation("Vishwa Vidyalaya", "Yellow Line");
    DMRC.addStation("Azadpur", "Yellow Line");
    DMRC.addStation("Kashmere Gate", "Yellow Line");


    DMRC.addConnection("Majlis Park", "Azadpur", 3);
    DMRC.addConnection("Azadpur", "Shalimar Bagh", 3);
    DMRC.addConnection("Shalimar Bagh", "Netaji Subhash Place", 2);
    DMRC.addConnection("Netaji Subhash Place", "Shakurpur", 2);
    DMRC.addConnection("Shakurpur", "Punjabi Bagh West", 3);
    DMRC.addConnection("Punjabi Bagh West", "ESI - Basaidarapur", 3);
    DMRC.addConnection("ESI - Basaidarapur", "Rajouri Garden", 2);
    DMRC.addConnection("Rajouri Garden", "Mayapuri", 2);
    DMRC.addConnection("Mayapuri", "Naraina Vihar", 3);
    DMRC.addConnection("Naraina Vihar", "Delhi Cantonment", 3);
    DMRC.addConnection("Delhi Cantonment", "Durgabai Deshmukh South Campus", 5);
    DMRC.addConnection("Durgabai Deshmukh South Campus", "Sir M. Vishweshwaraiah Moti Bagh", 2);
    DMRC.addConnection("Sir M. Vishweshwaraiah Moti Bagh", "Bhikaji Cama Place", 3);
    DMRC.addConnection("Bhikaji Cama Place", "Sarojini Nagar", 2);
    DMRC.addConnection("Sarojini Nagar", "Dilli Haat - INA", 2);
    DMRC.addConnection("Dilli Haat - INA", "South Extension", 2);
    DMRC.addConnection("South Extension", "Lajpat Nagar", 3);
    DMRC.addConnection("Lajpat Nagar", "Vinobapuri", 3);
    DMRC.addConnection("Vinobapuri", "Ashram", 3);
    DMRC.addConnection("Ashram", "Sarai Kale Khan - Nizamuddin", 3);
    DMRC.addConnection("Sarai Kale Khan - Nizamuddin", "Mayur Vihar-I", 5);
    DMRC.addConnection("Mayur Vihar-I", "Mayur Vihar Pocket I", 1);
    DMRC.addConnection("Mayur Vihar Pocket I", "Trilokpuri Sanjay Lake", 6);
    DMRC.addConnection("Trilokpuri Sanjay Lake", "East Vinod Nagar - Mayur Vihar-II", 2);
    DMRC.addConnection("East Vinod Nagar - Mayur Vihar-II", "Mandawali - West Vinod Nagar", 3);
    DMRC.addConnection("Mandawali - West Vinod Nagar", "IP Extension", 3);
    DMRC.addConnection("IP Extension", "Anand Vihar", 4);
    DMRC.addConnection("Anand Vihar", "Karkarduma", 2);
    DMRC.addConnection("Karkarduma", "Karkarduma Court", 2);
    DMRC.addConnection("Karkarduma Court", "Krishna Nagar", 2);
    DMRC.addConnection("Krishna Nagar", "East Azad Nagar", 2);
    DMRC.addConnection("East Azad Nagar", "Welcome", 2);
    DMRC.addConnection("Welcome", "Jaffrabad", 3);
    DMRC.addConnection("Jaffrabad", "Maujpur - Babarpur", 2);
    DMRC.addConnection("Maujpur - Babarpur", "Gokulpuri", 2);
    DMRC.addConnection("Gokulpuri", "Johri Enclave", 3);
    DMRC.addConnection("Johri Enclave", "Shiv Vihar", 1);

    DMRC.addConnection("Samaypur Badli", "Rohini Sector 18-19", 2);
    DMRC.addConnection("Rohini Sector 18-19", "Haiderpur Badli Mor", 2);
    DMRC.addConnection("Haiderpur Badli Mor", "Jahangirpuri", 3);
    DMRC.addConnection("Jahangirpuri", "Adarsh Nagar", 2);
    DMRC.addConnection("Adarsh Nagar", "Azadpur", 2);
    DMRC.addConnection("Azadpur", "Model Town", 2);
    DMRC.addConnection("Model Town", "GTB Nagar", 2);
    DMRC.addConnection("GTB Nagar", "Vishwa Vidyalaya", 2);
    DMRC.addConnection("Vishwa Vidyalaya", "Vidhan Sabha", 3);
    DMRC.addConnection("Vidhan Sabha", "Civil Lines", 2);
    DMRC.addConnection("Civil Lines", "Kashmere Gate", 2);
    DMRC.addConnection("Kashmere Gate", "Chandni Chowk", 2);
    DMRC.addConnection("Chandni Chowk", "Chawri Bazar", 3);
    DMRC.addConnection("Chawri Bazar", "New Delhi", 1);
    DMRC.addConnection("New Delhi", "Rajiv Chowk", 3);
    DMRC.addConnection("Rajiv Chowk", "Patel Chowk", 2);   
    DMRC.addConnection("Patel Chowk", "Central Secretariat", 2);
    DMRC.addConnection("Central Secretariat", "Udyog Bhawan", 2);
    DMRC.addConnection("Udyog Bhawan", "Lok Kalyan Marg", 2);
    DMRC.addConnection("Lok Kalyan Marg", "Jor Bagh", 2);
    DMRC.addConnection("Jor Bagh", "Dilli Haat - INA", 3);
    DMRC.addConnection("Dilli Haat - INA", "AIIMS", 1);
    DMRC.addConnection("AIIMS", "Green Park", 3);
    DMRC.addConnection("Green Park", "Hauz Khas", 2);
    DMRC.addConnection("Hauz Khas", "Malviya Nagar", 3);
    DMRC.addConnection("Malviya Nagar", "Saket", 2);
    DMRC.addConnection("Saket", "Qutab Minar", 3);
    DMRC.addConnection("Qutab Minar", "Chhatarpur", 3);
    DMRC.addConnection("Chhatarpur", "Sultanpur", 2);
    DMRC.addConnection("Sultanpur", "Ghitorni", 3);
    DMRC.addConnection("Ghitorni", "Arjan Garh", 3);
    DMRC.addConnection("Arjan Garh", "Guru Dronacharya", 3);
    DMRC.addConnection("Guru Dronacharya", "Sikanderpur", 2);
    DMRC.addConnection("Sikanderpur", "MG Road", 2);
    DMRC.addConnection("MG Road", "IFFCO Chowk", 3);
    DMRC.addConnection("IFFCO Chowk", "HUDA City Centre", 2);

/*
    DMRC.addConnection("Station A", "Station C", "Yellow Line", "Yellow Line", 10);


    std::vector<std::string> connections = DMRC.getStations("Delhi Cantonment");
    for (const std::string& station : connections) {
        std::cout << "Connected Station: " << station << std::endl;
    }

    std::vector<std::string> lines = DMRC.getLines("Delhi Cantonment");
    for (const std::string& line : lines) {
        std::cout << "Line: " << line << std::endl;
    }

    std::vector<std::pair<std::string, int>> connectionsWithTime = DMRC.getConnectionsWithTime("Delhi Cantonment");
    for (const auto& connection : connectionsWithTime) {
        std::cout << "Station: " << connection.first << ", Travel Time: " << connection.second << " minutes" << std::endl;
    }
*/

    std::cout << std::endl << std::endl;
    auto [totalTime, shortestPath] = DMRC.calculateShortestTime("Sir M. Vishweshwaraiah Moti Bagh", "Chhatarpur");
    std::cout << "Shortest path from Sir M. Vishweshwaraiah Moti Bagh to Chhatarpur: " << std::endl;
    for (const std::string& station : shortestPath) {
        std::cout << station << " -> ";
    }
    std::cout << "\nTotal travel time: " << totalTime << " minutes" << std::endl;
    std::cout << std::endl << std::endl;


    return 0;
}
