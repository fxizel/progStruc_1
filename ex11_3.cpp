/*================================
Auteur: Loïc Brait			 
Date création: 5.03.13

=================================*/

#include <stdio.h>
#include <stdlib.h>

//---Prototype---
int puissance (int val, int n);

void main () {
	int nbr1, nbr2, ret1, ret2;

	printf("Nombre: ");
	ret1 = scanf_s("%d",&nbr1);

	printf("puissance: ");
	ret2 = scanf_s("%d",&nbr2);
	
	if ( ret1 == 1 && ret2 == 1 ) {
		printf("la puissance: %d \n",puissance(nbr1, nbr2));
	}else{
		puts("Mauvaise saisie");
	}
	system("pause");

}

int puissance ( int val, int n ) {
	int pars,puiss;

	puiss = val;

	for (pars = 1 ; pars < n ; pars++){
		puiss *= val; 
	}
	return puiss;
}