#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define EXIT_ERROR -1

int main(void)
{
	int resultado;
	if(getInt(&resultado,"Edad?\n","Error\n",0,150,2)==0)
	{
		printf("El resultado es: %d",resultado);
	}
	return EXIT_SUCCESS;
}
