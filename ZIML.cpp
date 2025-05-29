#include"ZIML.h"
#include<iostream>
#include<cstdlib>
#include<cstdio>
//#include //<GLFW/glfw3.h>
//#include <cstdlib>
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

void initcontext(GLFWwindow* window)
{
	glfwMakeContextCurrent(window);
}

int windowshouldclose(ZFwindow* window)
{
	return glfwWindowShouldClose(window);
}

void swapbuffers(ZFwindow* window)
{
	glfwPollEvents();
	glfwSwapBuffers(window);
}

int destroywindowandterminate(ZFwindow* window)
{
	glfwDestroyWindow(window);
	glfwTerminate();
	return EXIT_SUCCESS;
}