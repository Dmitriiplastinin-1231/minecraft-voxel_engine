/*
 * Events.cpp
 *
 *  Created on: 4 Apr 2024
 *      Author: dmitriy
 */

#include "Events.h"
#include <GLFW/glfw3.h>
#include <cstring>

bool* Events::_keys;
uint* Events::_frames;
uint* Events::_current = 0;


int Events::initialize(){
	GLFWwindow* window = Window::window;
	_keys = new bool[1032];
	_frames = new uint[1032];

	memset(_keys, false, 1032 * sizeof(bool));
	memset(_frames, 0, 1032 * sizeof(uint));
	return 0;
}

void Events::pullEvents(){
	glfwPollEvents();
}
