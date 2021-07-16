#include "TextureLoader.h"
#include "Window.h"
#include "Input.h"
#include "Renderer.h"
#include "GlobalState.h"

int main() { 
    Window *window = new Window();  
    Input input(window);
    Shader *shader = new Shader("Shaders/shader.vs", "Shaders/shader.fs");
    TextureLoader loader;
    std::vector<Texture*> textures = loader.loadTextures();
    Renderer *renderer = new Renderer(shader, &textures);

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




