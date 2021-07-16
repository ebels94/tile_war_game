#pragma once
#include "Window.h"
#include "Shader.h"
class Renderer
{
public:
	Renderer();
	void renderFrame();
	void loadShaders();
	void loadTextures();
private:
	Shader* ourShader;
};

