cmake_minimum_required( VERSION 3.0 )
project( Lab6 )

include_directories( ./include ./src ./libs ./tests )
add_executable( ${PROJECT_NAME} ./src/employee.cpp ./src/main.cpp ./src/HRMS.cpp ./include/HRMS.h ./include/employee.h )