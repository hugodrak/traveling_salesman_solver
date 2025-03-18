#include <iostream>
#include <vector>
#include "utils.h"
#include "tsp_solver.h"

int main() {
    // 1. Parse city data
    std::string filename = "../data/cities50.txt";
    std::vector<City> cities = parseCities(filename);

    if (cities.empty()) {
        std::cerr << "No cities found. Exiting." << std::endl;
        return 1;
    }
    std::cout << "Loaded " << cities.size() << " cities from " << filename << std::endl;

    // 2. Solve TSP
    std::vector<int> bestRoute = solveTSP(cities);

    // 3. Calculate and print total distance
    double totalDist = 0.0;
    for (size_t i = 0; i < bestRoute.size() - 1; i++) {
        totalDist += distanceBetween(cities[bestRoute[i]], cities[bestRoute[i+1]]);
    }
    // If you consider TSP as a cycle, add distance back to start
    totalDist += distanceBetween(cities[bestRoute.back()], cities[bestRoute.front()]);

    // 4. Print results
    std::cout << "Best route: ";
    for (auto cityIdx : bestRoute) {
        std::cout << cityIdx << " -> ";
    }
    std::cout << bestRoute.front() << std::endl;
    std::cout << "Total Distance = " << totalDist << std::endl;

    return 0;
}
