#include<iostream>
#include"ZENITHFRAMEWORK.h"

int main()
{
	init();
	ZFwindow* window = createwindow(800,600,"title");
	glfwMakeContextCurrent(window);
	while(!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
		glfwSwapBuffers(window);
	}
	//glfwDestroyWindow(window);
	glfwTerminate();
	return EXIT_SUCCESS;
}