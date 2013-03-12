#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main () {
	int pars;
	int born_max = 500, livret = 7;

	for (pars = 1; pars <= born_max ; pars++){
		printf("%d x %d = %d\n",livret,pars,livret * pars);
	}
	
	system("pause");
}