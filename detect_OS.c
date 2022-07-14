#include "ryalyze.h"

void operating_system()
{
	int OS;
	
	printf("Hello World, Welcome to Ryalyze!");
	#ifdef _WIN32
		printf("Windows 32-bit operating system detected.");
	#endif
	
	#ifdef _WIN64
		printf("Windows 64-bit operating system detected.");
	#endif
	
	#ifdef _TARGET_OS_MAC
		printf("macOS operating system detected.");
	#endif
	
	/*
	#ifdef __unix__
		printf("Unix operating system detected.");
	#endif
	
	#ifdef __linux__
		printf("Linux operating system detected.");
	#endif
	
	#ifdef __sun
		printf("Solaris operating system detected.");
	#endif
	
	#ifdef BSD
		printf("BSD operating system detected.");
	#endif
	*/
}