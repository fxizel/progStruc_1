/*================================
Auteur: Loïc Brait			 
Date création: 5.03.13

=================================*/

#include <stdio.h>
#include <stdlib.h>

#define VRAI 1
#define FAUX 0
#define MIN 1
#define MAX 100

//---Prototype---
int saisieInt ( int valMin, int valMax );
int premier ( int n );

void main () {
	int nbr1;

	nbr1 = saisieInt(MIN,MAX);
	if ( premier(nbr1) == VRAI ) {
		puts("nombre premier");
	}else{
		puts("nombre pas premier");
	}

	system("pause");

}

int saisieInt ( int valMin, int valMax ) {
	int nbr1, ret;
	
	printf("Ecrire une valeur entre %d et %d : ",valMin,valMax);
	ret = scanf_s("%d",&nbr1);

	while (ret != 1 || nbr1 < valMin || nbr1 > valMax){
		while(getchar() != '\n');
		printf("Ecrire une valeur entre %d et %d ",valMin,valMax);
		ret = scanf_s("%d",&nbr1);
	}

	return nbr1;
}

int premier ( int n ) {
	int pars,ret;

	ret = 1;

	for (pars = n - 1 ; pars > 1 && ret == 1 ; pars--){
		if ( n % pars == 0 ){
			ret = 0;
		}
	}

	return ret;
}