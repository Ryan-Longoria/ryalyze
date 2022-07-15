#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ryalyze.h"

int main()
{
	printf("Hello World, Welcome to Ryalyze!");
	
	detect_OS(); //Sends to detect_OS.c
	
	return 0;
}