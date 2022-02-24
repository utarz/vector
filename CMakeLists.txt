cmake_minimum_required(VERSION 3.23.0)
set(CMAKE_CXX_STANDARD 11)
project(CMAKE_TEST)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(Adder)
add_subdirectory(Vector)
target_link_libraries(${PROJECT_NAME} adder vector)
target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_SOURCE_DIR}/Adder/include" "${PROJECT_SOURCE_DIR}/Vector/include")
enable_testing()
add_subdirectory(Test) 
