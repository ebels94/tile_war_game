#include "TextureLoader.h"
#include "Window.h"
#include "Input.h"
#include "Renderer.h"
#include "GlobalState.h"
#include "StandardInfantry.h"
#include "MapLoader.h"

int main() { 
    Window *window = new Window();  
    Input input(window);
    Shader shader("Shaders/shader.vs", "Shaders/shader.fs");
    TextureLoader loader;
    std::vector<Texture*> textures = loader.loadTextures();
    Renderer *renderer = new Renderer();
    
    MapLoader mapLoader;
    mapLoader.load_map("Maps/testmap.gwmf");
    mapLoader.print_map(); //for testing

    //targetting test----------------------------------------------------------------------
    StandardInfantry bob(2, 2, 0, 0);
    StandardInfantry jim(2, 1, 0, 0);

    std::vector<std::pair<int, int>> attackTargets = bob.get_attack_tiles();
    for (int i = 0; i < attackTargets.size(); i++) {
        std::cout << attackTargets[i].first << " " << attackTargets[i].second << std::endl;
    }
    //-------------------------------------------------------------------------------------
    

    // render loop
    while (!glfwWindowShouldClose(window->getWindow()))
    {
        // input
       input.processInput();

        // rendering commands here
       renderer->renderFrame(&shader, &textures);

        // check and call events and swap the buffers
        glfwPollEvents();
        glfwSwapBuffers(window->getWindow());
    }

    glfwTerminate();
    return 0;
};



