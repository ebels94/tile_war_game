#pragma once
#include "Window.h"
#include "Shader.h"
#include "Texture.h"
#include "GlobalState.h"
#include <iostream>

class Renderer
{
public:
	Renderer(Shader *shader, std::vector<Texture*> *tex);
	void renderFrame();
private:
	Shader* ourShader;
	std::vector<Texture*> *textures;
};

