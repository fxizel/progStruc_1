/*================================
Auteur: Loïc Brait			 
Date création: 5.03.13

=================================*/

#include <stdio.h>
#include <stdlib.h>

//---Prototype---
int sommNbEntier ( int n);

void main () {
	int nbr1, nbr2, ret1, ret2;

	printf("Nombre: ");
	ret1 = scanf_s("%d",&nbr1);

	if ( ret1 == 1 && nbr1 > 0) {
		printf("somme des nombres entiers: %d \n",sommNbEntier(nbr1));
	}else{
		puts("Mauvaise saisie");
	}
	system("pause");

}

int sommNbEntier ( int n ) {
	int pars,somme;

	somme = 0;

	for (pars = 1 ; pars <= n ; pars++){
		somme += pars; 
	}
	return somme;
}