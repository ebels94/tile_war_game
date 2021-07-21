#pragma once
#include "glew-2.1.0\include\GL\glew.h"

//#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

//#include "glew-2.1.0\include\GL\glew.h"

#include <iostream>
#include <vector>
class Window
{
public:
	Window();

	GLFWwindow* getWindow() { return window; };
	//void framebuffer_size_callback(GLFWwindow* window, int width, int height);
private:
	GLFWwindow* window;

};

