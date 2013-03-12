/*================================
Auteur: Loïc Brait			 
Date création: 12.02.13

=================================*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void main () {
	int mode,val,n;
	float soldecpt;

	//Init
	soldecpt = 0;

	printf("Commande: ");
	n = scanf("%d", &val);
	if ( n != 0 ){
		mode = val;
	}
	while ( mode > 0 ){
		switch (mode){
		//Depot
		case 1:

			break;
		//Retirer
		case 2:

			break;
		//Solde
		case 3:
			printf("Solde %4.2f",soldecpt);
			break;
		default:
			puts("Erreur");
			break;
	}
}