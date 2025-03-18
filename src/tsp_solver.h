#ifndef TSP_SOLVER_H
#define TSP_SOLVER_H

#include <vector>
#include "utils.h"

// Solves TSP using a naive approach + improvement heuristics
std::vector<int> solveTSP(const std::vector<City> &cities);

#endif // TSP_SOLVER_H
