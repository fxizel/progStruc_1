/*================================
Auteur: Loïc Brait			 
Date création: 5.03.13

=================================*/

#include <stdio.h>
#include <stdlib.h>

void main () {
	int h,n,i,j,milieu,delta;

	printf("Demi-hautueur du losange: ");
	n = scanf_s("%d",&h);

	milieu = h ;
	delta = 0 ;

	for ( i = 1 ; i <= h * 2 - 1 ; i++){
		for ( j = 1 ; j <= h * 2 - 1 ; j++ ){
			if (j == milieu - delta){
				printf("*");
			}else if (j == milieu + delta){
				printf("*");
			}else{
				printf(" ");
			}
		}

		if ( i < h ){
			delta++;
		}else{
			delta--;
		}
		printf("\n");
	}

	system("pause");

}