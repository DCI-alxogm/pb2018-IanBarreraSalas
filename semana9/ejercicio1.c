#include <stdio.h>
float cuadrado(float h);
int main(){
	float x,x2;
	printf("Introduce un numero\n");
	scanf("%f",&x);
	x2=cuadrado(x);
	return 0;
}
float cuadrado(float h){
	float x2;
	x2=h*h;
	printf("El cudrado de %f es %f\n",h,x2);
}
