#pragma once
#include "Window.h"

class Texture
{
public:
	Texture(unsigned int tID) : textureID(tID) {};
	unsigned int getTextureID() { return textureID; };
private:
	unsigned int textureID;

};

