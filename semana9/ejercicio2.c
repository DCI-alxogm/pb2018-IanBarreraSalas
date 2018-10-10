#include <stdio.h>
float cuadrado();
int main(){
        float x2;
	x2=cuadrado();
       	printf("El cudrado es %f\n",x2);
        return 0;
}
float cuadrado(){
        float x;
        printf("Introduce un numero\n");
        scanf("%f",&x);
	return x*x;
}                                  
