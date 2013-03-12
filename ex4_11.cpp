#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {
	int pars,pars2;
	int born_max = 3;
	int valeur ;

	puts("Entrer la taille du carre");
	if (scanf_s("%d",&valeur) == 1) { 

		//1er ligne
		for (pars = 0; pars < valeur; pars++){
			printf("*");
		}
		printf("\n");

		//Millieu
		for (pars2 = 0; pars2 < valeur - 2 ; pars2++){
			printf("*");
			for (pars = 0; pars < valeur - 2 ; pars++){
				printf(" ");
			}
			printf("*\n");
		}

		// Dernière ligne
		for (pars = 0; pars < valeur; pars++){
			printf("*");
		}
		printf("\n");
	}else{
		puts("Erreur de saisi !\n");
	}
	
	system("pause");
}