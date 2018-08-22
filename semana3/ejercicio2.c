#include <stdio.h>
#include<math.h>
#include<complex.h>

int main()
{

	int A;
	float C;
	float K;
	float F;
	float G;
	float X;
	float Y;
	float R;
	float O;

	printf(" Teclear una opción  \n");
	printf("(1) para convertir temperaturas");
	printf("(2) para convertir coordenadas ");

	scanf("%i",&A);

		switch(A)

		{
			case 1:
				printf("Entre a la opción 1\n")	;
				printf("Introduce la temperatura en Celsius\n");
	
				scanf("%f", &C);
	
				K=C+273;
	
				F=(C*9/5)+32;
	
				G=(F-32)*5/9;
	
				printf("\nTemperatura en Kelvin %f \n" ,K);
	
				printf("\nTemperatura en Fahrenheith %f \n" ,F);
	
				printf("\nTemperatura en Celsius %f \n" ,G);
				break;

			case 2:
				printf("Entre a la opción 2") ;
				printf("Introduce coordenada X,Y,\n");
				scanf("%f", &X);
				scanf("%f", &Y);
			
	R= sqrt(X*X+Y*Y);
	O= atan(Y/X);
	if(X>0)
	{
		O=O+0;
	}
	else if(X<0)
	{
		O=O+90;
	};
	printf("R= %f \n",R);
       	printf("O= %f \n",O);


				break;

			default:
				printf("Opción invalida") ;
				break;

		}

	return 0;

}
