cmake_minimum_required(VERSION 3.24)
project(control)

set(CMAKE_CXX_STANDARD 17)

add_executable(control main.cpp Sum.cpp Sum.h Harmonic-geometric.cpp Harmonic-geometric.h ChangeBits.cpp ChangeBits.h Concotination.cpp Concotination.h Matrix.h Complex.h Operation.h)
