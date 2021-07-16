#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
class Window
{
public:
	Window();

	GLFWwindow* getWindow() { return window; };
	//void framebuffer_size_callback(GLFWwindow* window, int width, int height);
private:
	GLFWwindow* window;

};

