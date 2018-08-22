#include <stdio.h>

int main()
{

	int A;

	printf(" Teclear una opción  \n");
	printf("(1) para convertir temperaturas");
	printf("(2) para convertir coordenadas ");

	scanf("%i",&A);

		switch(A)

		{
			case 1:
				printf("Entre a la opción 1") ;
				break;

			case 2:
				printf("Entre a la opción 2") ;
				break;

			default:
				printf("Opción invalida") ;
				break;

		}

	return 0;

}
