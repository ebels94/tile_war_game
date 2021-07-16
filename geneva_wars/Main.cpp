#include "Window.h"
#include "Input.h"
#include "Renderer.h"

int main() { 
    Window* window = new Window();  
    Input input(window);
    Renderer * renderer = new Renderer();
    renderer->loadShaders();
    renderer->loadTextures();

    // render loop
    while (!glfwWindowShouldClose(window->getWindow()))
    {
        // input
       input.processInput();

        // rendering commands here
       renderer->renderFrame();

        // check and call events and swap the buffers
        glfwPollEvents();
        glfwSwapBuffers(window->getWindow());
    }

    glfwTerminate();
    return 0;
};


