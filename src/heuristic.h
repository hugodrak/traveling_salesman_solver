#ifndef HEURISTIC_H
#define HEURISTIC_H

#include <vector>
#include "utils.h"

// Basic 2-opt improvement on the route
void twoOptHeuristic(std::vector<int> &route, const std::vector<City> &cities);

#endif // HEURISTIC_H
