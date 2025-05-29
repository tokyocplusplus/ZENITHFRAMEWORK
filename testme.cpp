#include"ZIML.h"
#include<iostream>
//zenith's integrated multimedia library

int main()
{
	init();
	ZFwindow* window = createwindow(800,600,"title");
	initcontext(window);
	while(!windowshouldclose(window))
	{
		swapbuffers(window);
	}
	//glfwDestroyWindow(window);
	return 0;
}