#include "Renderer.h"


Renderer::Renderer() {

}

void Renderer::renderFrame() {


	glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

}

