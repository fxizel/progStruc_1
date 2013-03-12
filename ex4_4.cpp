#include <stdio.h>
#include <stdlib.h>

#define TVA (float)0.055

void main () {
	int ret;
	float n1,montant;
	float lim1,lim2,lim3;
	float rabais1,rabais2,rabais3,rabaisEffectif;

	//Valeur limite de remise
	lim1 = 1000.0;
	lim2 = 2000.0;
	lim3 = 5000.0;

	//Rabais
	rabais1 = 0.01;
	rabais2 = 0.03;
	rabais3 = 0.05;

	//Saisie du montant
	printf("Entrer un montant:\n");
	ret = scanf("%f",&n1);

	if(ret==1){		//controle de saisie
		rabaisEffectif = 0.0;
		if (n1 >= lim1){
			rabaisEffectif = rabais1;
			if(n1 >= lim2){
				rabaisEffectif = rabais2;
				if(n1 >= lim3){
					rabaisEffectif = rabais3;
				}
			}
		}

		montant = (n1-(n1*rabaisEffectif)) - (n1-(n1*rabaisEffectif))*TVA;
		printf("Montant TTC: %10.2f \nUn rabais de: %4.2f% \nMontant a paye: %8.2f\n",n1,rabaisEffectif,montant);
	}else{
		printf("Erreur de saisie !\n");
	}
	system("pause");
}