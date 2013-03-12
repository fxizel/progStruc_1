// #
#include <stdio.h>
#include <stdlib.h>

#include <windows.h>


void main () {
	int t;
	
/*	printf("\a");
	Sleep(200);
	printf("\a \a");
	Sleep(500);
	printf("\a \a");
	Sleep(400);
	printf("\a \a");
	Sleep(1000);
	printf("\a \a");*/

	for(t=0;;t++)putchar((t>>6|t|t>>(t>>16))*10+((t>>11)&7));
}