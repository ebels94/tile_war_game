#include "Input.h"


Input::Input(Window* w) : window(w) {

}

void Input::processInput()
{ 
    if (glfwGetKey(window->getWindow() , GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window->getWindow() , true);
}
