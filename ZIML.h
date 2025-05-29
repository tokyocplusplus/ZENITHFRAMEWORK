#ifndef ZIML_H
#define ZIML_H

#include <iostream>
#include <GLFW/glfw3.h>
// zenith's integrated multimedia framework/library

typedef GLFWwindow ZFwindow;

void init();

GLFWwindow* createwindow(int width, int height, const char* title);

GLFWmonitor* fullscreen_func();

void initcontext(GLFWwindow* window);

void swapbuffers(ZFwindow* window);

int windowshouldclose(ZFwindow* window);

int destroywindowandterminate(ZFwindow* window);

#endif // ZIML_H