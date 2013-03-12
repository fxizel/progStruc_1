#include <stdio.h>
#include <stdlib.h>

void main () {
	char signe;
	int n1,n2;
	int ret;

	printf("Entrer une opération:\n");
	ret = scanf("%d %c %d",&n1,&signe,&n2);

	if (ret == 3) {
		// Multiple
		if ( signe == '*' ){
			printf("%d %c %d = %d\n",n1,signe,n2,n1*n2);
		}
		// Division
		if ( signe == '/' ){
			if (n2 == 0){
				printf("%d %c %d  = %d\n",n1,signe,n2,n1/n2);
			}else{
				printf("Division par 0 ! \n");
			}
		}
		// Addition
		if ( signe == '+' ){
			printf("%d %c %d = %d\n",n1,signe,n2,n1+n2);
		}
		// Soustraction
		if ( signe == '-' ){
			printf("%d %c %d = %d\n",n1,signe,n2,n1-n2);
		}
	}else{
		printf("Erreur de saisi !\n");
	}
	
	system("pause");
}