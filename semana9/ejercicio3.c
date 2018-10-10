#include <stdio.h>
#include <math.h>
void cuadrado();
void raiz(float h);
float logaritmo();
float exponente2(float j);
int main(){
	float x, x2;
	cuadrado();
	printf ("Introduce un numero\n");
	scanf ("%f",&x);
	raiz(x);
	x2=logaritmo();
	printf("El logaritmo es %f\n",x2);
	x2=exponente2(x);
	printf("2 al exponente %f es %f\n",x,x2);
	return 0;
}
void cuadrado(){
	float x, x2;
	printf ("Introduce un numero\n");
        scanf ("%f",&x);
	x2=x*x;
	printf("el cuadrado de %f es %f\n",x,x2);
}
void raiz(float h){
	float x2;
	x2=sqrt(h);
	printf("la raiz es %f\n",x2);
}
float logaritmo(){
	float x;
	printf ("Introduce un numero\n");
        scanf ("%f",&x);
	return log(x);
}
float exponente2(float j){
	return pow(2,j);
}



