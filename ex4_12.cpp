#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {
	int pars,pars2;
	int born_max = 13;
	int valeur ;

	valeur = born_max;

	//1er ligne---------------
	printf("    |");
	for (pars = 1; pars <= valeur; pars++){
		printf(" %3d",pars);
	}
	printf("\n----|");
	for (pars = 1; pars <= valeur; pars++){
		printf("----");
	}
	printf("\n");

	//Millieu
	for (pars2 = 1; pars2 <= valeur; pars2++){
		printf(" %3d|",pars2);
		for (pars = 1; pars <= valeur; pars++){
			printf(" %3d",pars*pars2);
		}
		printf("\n");
	}

	system("pause");
}