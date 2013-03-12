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
	int nbrCara, nbrMot, nbrLigne;
	char val;
	int valprec;

	nbrMot = 1;
	nbrCara = nbrLigne = 1;

	// Lire la valeur suivante 
	puts("Entrer votre texte: ");

	valprec = 0;
	scanf("%c", &val);

	while ( val != '#' ) {

		switch (val){

		case ' ':
		case '.':
		case ',':
		case '?':
		case '!':
			if( valprec ){
				nbrMot++;
			}
			nbrCara++;
			break;

		case '\n':
			nbrLigne++;
			break;

		default:
			valprec = 1;
			nbrCara++;
			break;

		}
		scanf("%c", &val);
	}

	printf("Nombre de mots: %d\n",nbrMot);
	printf("Nombre de caracteres: %d\n",nbrCara);
	printf("Nombre de lignes: %d\n",nbrLigne);

	system ("pause");
}