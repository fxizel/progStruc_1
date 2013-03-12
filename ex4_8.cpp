#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main () {
	unsigned char valLue;

	puts("Entrer une lettre\n");
	scanf("%c",&valLue);
	
	if (isalpha(valLue)){
		switch (tolower(valLue)){

				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
				case 'y':
					puts("Voyelle\n");
					break;
				default:
					puts("Consonne\n");
		}
	}else{
		puts("La valeur n'est pas un caractere\n");
	}
	
	system("pause");
}