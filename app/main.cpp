#include <iostream>
#include <Adder/adder.h>
// #include <GLFW/glfw3.h>

int main()
{
    std::cout << "Hey Zeus!\n";
    std::cout << add(3, 4) << "\n";

    // GLFWwindow *window;
    // if (!glfwInit())
    // {
    //     fprintf(stderr, "Failed to initialize GLFW\n");
    //     exit(EXIT_FAILURE);
    // }
    // window = glfwCreateWindow(300, 300, "Gears", NULL, NULL);
    // if (!window)
    // {
    //     fprintf(stderr, "Failed to open GLFW window\n");
    //     glfwTerminate();
    //     exit(EXIT_FAILURE);
    // }
    // // Main loop
    // while (!glfwWindowShouldClose(window))
    // {
    //     // Swap buffers
    //     glfwSwapBuffers(window);
    //     glfwPollEvents();
    // }

    // // Terminate GLFW
    // glfwTerminate();

    return 0;
}