/*
 * Window.h
 *
 *  Created on: 4 Apr 2024
 *      Author: dmitriy
 */

#ifndef WINDOW_WINDOW_H_
#define WINDOW_WINDOW_H_

class GLFWwindow;

class Window {
public:
	static GLFWwindow* window;
	static int initialize(int width, int height, const char* title);
	static bool isShouldClose();
	static void setShouldClose(bool flag);
	static void swapBuffers();
	static void terminate();
};

#endif /* WINDOW_WINDOW_H_ */
