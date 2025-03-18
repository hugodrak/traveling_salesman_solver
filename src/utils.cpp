#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
#include <vector>
#include <string>
#include "utils.h"

std::vector<City> parseCities(const std::string &filename) {
    std::vector<City> cities;
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return cities;
    }

    std::string line;
    while (std::getline(file, line)) {
        if (line.empty()) continue;

        std::stringstream ss(line);
        City c;
        ss >> c.id >> c.x >> c.y;
        cities.push_back(c);
    }
    file.close();

    return cities;
}

double distanceBetween(const City &a, const City &b) {
    double dx = static_cast<double>(a.x) - static_cast<double>(b.x);
    double dy = static_cast<double>(a.y) - static_cast<double>(b.y);
    return std::sqrt(dx * dx + dy * dy);
}
