
# TSP-Solver

## Overview
This academic project solves the Traveling Salesman Problem (TSP) using advanced heuristics. The code is organized to reflect a standard university assignment, yet showcases professional-level C++.

## Features
- **Heuristics**: 2-opt, 3-opt improvements.
- **Branch-and-Bound**: Optional exact method for small datasets.
- **Data**: `cities50.txt` with coordinate data for 50 cities.

## Build & Execute
```bash
mkdir build && cd build
cmake ..
make
./tsp_solver
```

## Academic Approach
- **Clear Comments**: Explaining each heuristic step.
- **Modular Files**: `tsp_solver.cpp`, `heuristic.cpp`, and `utils.cpp`.
- **Report Section**: Potential PDF write-up (not included) describing problem context and analysis.

## Future Extensions
- GUI for route visualization.
- Parallelization for large-scale TSP instances.
