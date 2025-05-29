#include"ZENITHFRAMEWORK.h"
#include<iostream>

typedef GLFWwindow ZFwindow;

void init()
{
	std::cout << "initializing GLFW... ";
	glfwInit();
	std::cout << "DONE\n";
}

GLFWwindow* createwindow(int width, int height, const char* title)
{
	return glfwCreateWindow(width,height,title,NULL,NULL);
}

GLFWmonitor* fullscreen_func()
{
	return glfwGetPrimaryMonitor();
}