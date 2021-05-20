cmake_minimum_required(VERSION 3.19)
project(TCTT)

set(CMAKE_CXX_STANDARD 20)

add_executable(TCTT main.cpp uniform_distribution.h RandomGenerator.h task_solution.cpp task_solution.h AuxiliaryStuff.cpp AuxiliaryStuff.h GlobalDefinitions.h)