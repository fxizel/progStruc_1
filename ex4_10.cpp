#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {
	int pars;
	int born_max = 20;
	float livret = 2.0;

	for (pars = 0; pars < born_max ; pars++){
		printf("%2.2f ^ %d = %4.2f\n",livret,pars,pow(livret,pars));
	}
	
	system("pause");
}