// #
#include <stdio.h>
#include <stdlib.h>

void main () {
	int entier, entierAfficher;
	char caractere, caraAfficher;
	
	


	printf("Entrer un caractère:");
	scanf("%c",&caractere);
	printf("Caractere %c, decimal %d, octal %#o, hexadecimal %#X \n",caractere,caractere,caractere,caractere);



	printf("Enter un entier:");
	scanf("%d",&entier);
	printf("Octal %o, hexadecimal %x \n",entier,entier);
}