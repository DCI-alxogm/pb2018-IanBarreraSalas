#include<stdio.h>

int main ()
{

	int a;
	int b;
	int c;
	int d;

	printf("Introduce Valores a,b,c y d \n");
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);
	scanf("%i",&d);
	printf("e=(a+b)*c/d= %i /n",(a+b)*c/d);
	printf("e=((a+b)*c)/d= %i /n",((a+b)*c)/d);
	printf("e=(a+b)*c/d= %i /n",(a+b)*c/d);
	printf("e=a+(b*c)/d= %i /n",a+(b*c)/d);

	return 0;
}

