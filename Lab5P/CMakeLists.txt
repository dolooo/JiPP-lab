cmake_minimum_required( VERSION 3.0 )
project( Lab5P )

include_directories( ./include ./src ./libs ./tests )
add_executable( ${PROJECT_NAME} ./src/func.cpp ./src/main.cpp ./include/matrix.h )