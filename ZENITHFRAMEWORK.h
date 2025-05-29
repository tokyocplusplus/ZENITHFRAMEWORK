#include<iostream>
#include<GLFW/glfw3.h>

typedef GLFWwindow ZFwindow;

void init();

GLFWwindow* createwindow(int width, int height, const char* title);

GLFWmonitor* fullscreen_func();