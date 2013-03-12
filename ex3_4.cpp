#include <stdio.h>
#include <stdlib.h>

void main () {
	float h,b;

	printf("hauteur:");
	scanf("%f",&h);

	printf("base:");
	scanf("%f",&b);

	printf("La surface du triangle est %2.2f\n",b*h/2);
	
	system("pause");
}