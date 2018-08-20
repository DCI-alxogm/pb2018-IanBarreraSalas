#include<stdio.h>
#include<math.h>
#include<complex.h>

int main()
{
	float X;
	float Y;
	float Z;
	float A;

	printf("Introduce valor X");
	scanf("%f", &X);
	Y= cexp(X);
	Z= cos(X)+ 2*tan(X/2);
	A= clog(X)+3*X*X;
	printf("\nY=exp(X) %f \n", Y);
	printf("\nY=cos(X)+2tan(X/2) %f \n", Z);
	printf("\nY=log(X)+3X^2	%f \n", A);

	return 0;
}
