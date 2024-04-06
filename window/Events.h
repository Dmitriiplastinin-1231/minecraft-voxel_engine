/*
 * Events.h
 *
 *  Created on: 4 Apr 2024
 *      Author: dmitriy
 */

#ifndef WINDOW_EVENTS_H_
#define WINDOW_EVENTS_H_

#include "Window.h"

typedef unsigned int uint;

class Events {
public:
	static bool* _keys;
	static uint* _frames;
	static uint _current;
	static float deltaX;
	static float deltaY;
	static float x;
	static float y;
	static bool _cursor_locked;
	static bool _cursor_started;

	static int initialize();
	static void pollEvents();

	static bool isPressed(int keycode);
	static bool justPressed(int keycode);

	static bool clicked(int button);
	static bool justClicked(int button);
};

#endif /* WINDOW_EVENTS_H_ */
