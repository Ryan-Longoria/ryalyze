#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[])
{
	int OS;
	printf("Hello World, Welcome to Ryalyze!");
	#ifdef _WIN32
		printf("You have a Windows operating system.");
	#endif
	
	#ifdef _WIN64
		printf("You have a Windows operating system.");
	#endif
	
	#ifdef __APPLE__
		printf("You have an Apple operating system.");
	#endif
	
	#ifdef __unix__
		printf("You have a Unix operating system.");
	#endif
	
	#ifdef __linux__
		printf("You have a Linux operating system.");
	#endif
	
	#ifdef __sun
		printf("You have a Solaris operating system.");
	#endif
	
	#ifdef BSD
		printf("You have a BSD operating system.");
	#endif
	
	printf("Select an option below to continue");
	
	
	return 0;
}