#include <stdio.h>
#include<math.h>
#include<complex.h>

int main()
{
	int X,start,loop;
	printf("Ingrese variable X\n");
	scanf("%i", &X);
	printf("Ingrese el numero de veces que quiere realizar el calculo\n");
	scanf("%i", &loop);
	start=0;
	for(start=0;start<loop;start++)
	{
		printf("exponente %f \n", exp(X));
		printf("logaritmo %f \n", log(X));
		printf("seno %f \n", sin(X));
		printf("coseno %f \n", cos(X));
		printf("raiz %f \n", sqrt(X));

	}
return 0;
}
