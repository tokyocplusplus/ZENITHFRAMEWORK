#include"ZIML.h"
#include<iostream>
//zenith's integrated multimedia layer

int main()
{
	init();
	ZFwindow* window = createwindow(800,600,"title");
	initcontext(window);
	gladLoadGL();
	while(!windowshouldclose(window))
	{
		swapbuffers(window);
	}
	//glfwDestroyWindow(window);
	return 0;
}