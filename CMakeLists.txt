cmake_minimum_required(VERSION 3.10)
project(TSP_Solver)

set(CMAKE_CXX_STANDARD 17)

# Add source files
add_executable(tsp_solver
    src/main.cpp
    src/tsp_solver.cpp
    src/heuristic.cpp
    src/utils.cpp
)

# If headers are in "src/", optionally:
# target_include_directories(tsp_solver PRIVATE src)
