add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ../libs)
target_link_directories(${PROJECT_NAME} PRIVATE ../libs)

target_link_libraries(${PROJECT_NAME} Adder)
