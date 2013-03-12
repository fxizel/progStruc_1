// #
#include <stdio.h>
#include <stdlib.h>


void main () {
	int jour,mois,anne,heure,minute;
	
	


	printf("Entrer jour mois annee heure minute:");
	scanf("%d",&jour);
	scanf("%d",&mois);
	scanf("%d",&anne);
	scanf("%d",&heure);
	scanf("%d",&minute);

	printf("Date : %02d/%02d/%02d, heure: %02d:%02d",jour,mois,anne,heure,minute);

}