#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include <string>

// A simple struct to hold city info
struct City {
    int id;
    int x;
    int y;
};

// Parse city data from a file (city_id, x, y on each line)
std::vector<City> parseCities(const std::string &filename);

// Calculate Euclidean distance between two cities
double distanceBetween(const City &a, const City &b);

#endif // UTILS_H
