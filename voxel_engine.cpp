#include <iostream>

#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "window/Window.h"

using namespace std;

int WIDTH = 1280;
int HEIGHT = 720;

int main() {

	Window::initialize(WIDTH, HEIGHT, "Window");

	while (!Window::isShouldClose()){
		glfwPollEvents();
		Window::swapBuffers();
	}

	Window::terminate();
	return 0;
}
