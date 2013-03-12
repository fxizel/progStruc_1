#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {
	int n = 1;
	float val = 1.0;
	float somme = 0.0;
	int nbrElement = 0;
	/* Lire la première valeur */
	printf("Entrer une note : ");
	n = scanf("%f", &val);
	while(val != 0) {
		if (val <= 6){
			// Traitement de la valeur
			if(n != 1) {
				puts("Erreur de saisie");
				fflush(stdin); // Vider le buffer de saisie
			} else{
				somme += val;
				nbrElement++;
			}
		}else{
			printf("Erreur: entrer une note entre 1 et 6 \n");
		}
		/* Lire la valeur suivante */
		printf("Entrer une note : ");
		n = scanf("%f", &val);
	} //Fin while

	if (nbrElement > 0){
		printf("La moyenne est : %2.2f\n", somme/nbrElement);
	}else{
		printf("Pas de note");
	}

	system("pause");
}