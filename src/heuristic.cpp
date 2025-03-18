#include "heuristic.h"
#include "utils.h"
#include <limits>
#include <algorithm>

static double routeDistance(const std::vector<int> &route, const std::vector<City> &cities) {
    double totalDist = 0.0;
    for (size_t i = 0; i < route.size() - 1; i++) {
        totalDist += distanceBetween(cities[route[i]], cities[route[i+1]]);
    }
    // Add distance from last city back to first city if you want a complete loop
    totalDist += distanceBetween(cities[route.back()], cities[route.front()]);
    return totalDist;
}

void twoOptHeuristic(std::vector<int> &route, const std::vector<City> &cities) {
    bool improved = true;
    double bestDistance = routeDistance(route, cities);

    while (improved) {
        improved = false;
        for (size_t i = 1; i < route.size() - 1; i++) {
            for (size_t k = i + 1; k < route.size(); k++) {
                // 2-opt swap: reverse order of cities in [i, k]
                std::reverse(route.begin() + i, route.begin() + k);

                double newDistance = routeDistance(route, cities);
                if (newDistance < bestDistance) {
                    bestDistance = newDistance;
                    improved = true;
                    // keep this new route
                } else {
                    // revert swap
                    std::reverse(route.begin() + i, route.begin() + k);
                }
            }
        }
    }
}
