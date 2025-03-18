#include "tsp_solver.h"
#include "heuristic.h"
#include "utils.h"

std::vector<int> solveTSP(const std::vector<City> &cities) {
    // Naive route: 0, 1, 2, ..., n-1
    int n = static_cast<int>(cities.size());
    std::vector<int> route(n);
    for (int i = 0; i < n; i++) {
        route[i] = i;
    }

    // Improve with 2-opt
    twoOptHeuristic(route, cities);

    return route;
}
