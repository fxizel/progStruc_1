// #
#include <stdio.h>
#include <stdlib.h>

void main () {
	float a,b,c;
	
	printf("Entrer 3 valeurs:");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);

	printf("\n");

	printf(" %7.2f \n",a);
	printf("+%7.2f \n",b);
	printf("+%7.2f \n",c);
	printf("----------\n");
	printf(" %7.2f \n",a+b+c);
}