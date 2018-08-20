#include<stdio.h>
#include<math.h>
#include<complex.h>

int main()
{
	float X;
	float Y;
	float Z;
	float R;
	float O;
	float P;

	printf("Introduce coordenada X,Y,Z\n");
	scanf("%f", &X);
       	scanf("%f", &Y);
        scanf("%f", &Z);
	P= sqrt(X*X+Y*Y+Z*Z);
	R= acos(Z/P);
	O=Y/P*sin(R);
	printf("r= %f \n",R);
       	printf("O= %f \n",O);
        printf("P= %f \n",P);

	printf("X=%F \n", X=sqrt(P*P-Y*Y-Z*Z));
	printf("Y=%F \n", Y= O*P/sin(R));
       	printf("Z=%F \n", Z= cos(R)*P);



	return 0;





}
