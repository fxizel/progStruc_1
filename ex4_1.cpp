#include <stdio.h>
#include <stdlib.h>

void main () {
	float n1,n2,n3,n4;
	int n;
	float moyenne;


	printf("Entrer 4 notes:\n");
	n = scanf("%f %f %f %f",&n1,&n2,&n3,&n4);

	if (n != 4 || (n1 < 1) || (n1 > 6) || 
		(n2 < 1) || (n2 > 6) || 
		(n3 < 1) || (n3 > 6)|| 
		(n4 < 1) || (n4 > 6)) {
		printf("Erreur: une des notes est incorrecte \n");	
	}else{
		moyenne = (n1 + n2 + n3 + n4 ) / 4;
		if ( moyenne < 4.0 ){
			printf("Moyenne : %2.2f - Insuf!\n",moyenne);
		}else if (moyenne <= 4.5) {
			printf("Moyenne : %2.2f - Moyen!\n",moyenne);
		}else if (moyenne <= 5.0) {
			printf("Moyenne : %2.2f - Bien!\n",moyenne);
		}else {
			printf("Moyenne : %2.2f - Tbien!\n",moyenne);
		}
	}
	system("pause");
}