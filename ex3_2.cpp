#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {
	int a,j,h,m,s,tmp;

	printf("Entrer un nombre en seconde:");
	scanf_s("%d",&a);

	j= a / 86400;
	tmp = a % 86400;
	h = tmp / 3600;
	m = a % 3600;
	s = a % 60;
	m = m / 60 ;
	

	printf("%ds est egal a %dj %dh %dmn %ds \n",a,j,h,m,s);
	
	system("pause");
}