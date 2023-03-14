add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME}
    PUBLIC ../libs
    PUBLIC ../external/glfw/include
)
target_link_directories(${PROJECT_NAME}
    PRIVATE ../libs/Adder
    PRIVATE ../external/glfw/src
)

target_link_libraries(${PROJECT_NAME} Adder glfw)
