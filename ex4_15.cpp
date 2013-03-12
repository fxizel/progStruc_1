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
	time_t t;
	int solution,essaie,val,n;

	srand((unsigned)(time(&t))); // Initialiser le générateur de nombre selon l'heure courante
	solution = rand() % 101; //reste sera toujours entre 0 et 100

	val=0;
	essaie = 1;
	// Lire la valeur suivante 
	printf("Entrer une note entre 0 et 100: ");
	n = scanf("%d", &val);
	
	while (val != solution && essaie <= 7) {
		// Lire la valeur suivante 
		printf("Entrer une note entre 0 et 100: ");
		n = scanf("%d", &val);

		essaie++;

		//Indice
		if (val < solution){
			printf("trop petit\n");
		}else{
			printf("trop grand\n");
		}

	}

	//Jugement
	if (essaie <= 7 ) {
		if (essaie <= 5 ){
			puts("vous avez eu de la chance");
		}else{
			puts("bravo");
		}
	}else{
		puts("Ce score est nul ...");
	}


	system ("pause");
}