cmake_minimum_required(VERSION 3.5)

project(DRAWCIRCLE VERSION 1.0)
add_subdirectory(${PROJECT_NAME} ${PROJECT_BINARY_DIR}/lib)

add_executable(${PROJECT_NAME} src/main.cpp)