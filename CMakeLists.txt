cmake_minimum_required(VERSION 3.13.4)

project(app)

add_executable(${PROJECT_NAME} main.cpp)

# Add libraries here
add_subdirectory(libs)
target_include_directories(${PROJECT_NAME} PUBLIC libs)
target_link_directories(${PROJECT_NAME} PRIVATE libs)

target_link_libraries(${PROJECT_NAME} Adder)
