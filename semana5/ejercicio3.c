#include<stdio.h>
#include<math.h>

int main()
{

	int start;
	int X, N, F;
X=1;
F=1;
start=1;
while(start==1)
{
printf("Ingrese	un numero para calcular su factorial\n");
scanf("%i", &N);
if ( N > 0){
	for (X=1;X<=N;++X)
	{
		F=F*N;
	}
	printf("Factorial of %i=%i \n", N , F);

			}	
else
{
	printf("Error, Factorial no existe\n");	
}
printf(" Presione 1 si quiere calcular algo y otro numero si desea salir \n");
	scanf("%i", &start);
}

return 0;
}
