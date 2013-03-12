/*================================
Auteur: Loïc Brait			 
Date création: 5.03.13

=================================*/

#include <stdio.h>
#include <stdlib.h>

//---Prototype---
int factorielle (int val);

void main () {
	int nbr1,n;
	printf("Nombre: ");
	n = scanf_s("%d",&nbr1);
	
	if ( n = 1 && nbr1 >= 0 && nbr1 < 12) {
		printf("le factorielle: %d \n",factorielle(nbr1));
	}else{
		puts("Mauvaise saisie");
	}
	system("pause");

}

int factorielle ( int val ) {
	if( val > 1 ){
        return val * factorielle(val - 1);
	}else{
        return 1;
	}
}