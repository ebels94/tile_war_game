#pragma once

#include "GLHandles.h"
#include "Window.h"
#include <string>

//#include <glm/glm.hpp>


class Texture {
public:
	Texture(std::string path, GLint interpolation);
	Texture(unsigned int tID) : textureID1(tID) {};
	unsigned int getTextureID() { return textureID1; };
	// Because we're using the TextureHandle to do RAII for the texture for us
	// and our other types are trivial or provide their own RAII
	// we don't have to provide any specialized functions here. Rule of zero
	//
	// https://en.cppreference.com/w/cpp/language/rule_of_three
	// https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rc-zero

	// Public interface
	std::string getPath() const { return path; }
	GLenum getInterpolation() const { return interpolation; }

	// Although uint (i.e. uvec2) might make more sense here, went with int (i.e. ivec2) under
	// the assumption that most students will want to work with ints, not uints, in main.cpp
	glm::ivec2 getDimensions() const { return glm::uvec2(width, height); }

	void bind() { glBindTexture(GL_TEXTURE_2D, textureID); }
	void unbind() { glBindTexture(GL_TEXTURE_2D, textureID); }

private:
	unsigned int textureID1;
	TextureHandle textureID;
	std::string path;
	GLint interpolation;


	// Although uint might make more sense here, went with int under the assumption
	// that most students will want to work with ints, not uints, in main.cpp
	int width;
	int height;



};
