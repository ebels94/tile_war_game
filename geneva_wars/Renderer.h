#pragma once
#include "Window.h"
#include "Shader.h"
#include "Texture.h"
#include "GlobalState.h"
#include <iostream>

class Renderer
{
public:
	Renderer();
	void renderFrame(Shader* shader, std::vector<Texture*>* textures);
private:

};

