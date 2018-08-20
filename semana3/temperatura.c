#include<stdio.h>

int main()
{
	float C;
	float K;
	float F;
	float G;
	
	printf("Introduce la temperatura en Celsius\n");
	scanf("%f", &C);
	K=C+273;
	F=(C*9/5)+32;
	G=(F-32)*5/9;
	printf("\nTemperatura en Kelvin %f \n" ,K);
	printf("\nTemperatura en Fahrenheith %f \n" ,F);
	printf("\nTemperatura en Celsius %f \n" ,G);
	return 0;



}
