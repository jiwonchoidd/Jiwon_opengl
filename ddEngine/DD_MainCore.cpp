#include "DD_MainCore.h"
#include "DD_Std.h"
int main()
{
    GLFWwindow* window; 

    if (false == glfwInit())
        return -1;

    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (nullptr == window)
    {
        glfwTerminate(); 
        return -1;
    }


    glfwMakeContextCurrent(window); 
    glewInit(); 
    glClearColor(0.5, 0.75, 1, 1);


    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT); 
        glfwSwapBuffers(window); 
        glfwPollEvents(); 
    }

    glfwTerminate();
    return 0;
}