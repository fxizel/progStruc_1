/*================================
Auteur: Loïc Brait			 
Date création: 5.03.13

=================================*/

#include <stdio.h>
#include <stdlib.h>

//---Prototype---
float PlusGrand ( float nbr1, float nbr2);
int factorielle (int val);

void main () {
	float nbr1,nbr2;
	printf("Nombre 1: ");
	scanf_s("%f",&nbr1);
	printf("Nombre 2: ");
	scanf_s("%f",&nbr2);

	printf("plus grand: %f \n",PlusGrand(nbr1,nbr2));

	system("pause");

}

float PlusGrand ( float nbr1, float nbr2){
	float ret;

	if ( nbr1 < nbr2 ) {
		ret = nbr2;
	}else{
		ret = nbr1;
	}
	return ret;
}

int factorielle ( int val){

}