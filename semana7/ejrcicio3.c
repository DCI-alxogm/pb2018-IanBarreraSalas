#include <stdio.h>
#include <math.h>
int main()
{
	FILE*datos;
	FILE*resultados;
	int p, a, b, n, k;
	int i, ab, h, io, sum;


	datos = fopen("datos","r");
	fscanf(datos, "%d", &p);
	fscanf(datos, "%d", &a);
	fscanf(datos, "%d", &b);
	fscanf(datos, "%d", &n);
	fscanf(datos, "%d", &k);
	ab=a;
	float FX[n], IX[n];
	if (p>=1) {
		for (i=0;i<n;i++){
			FX[i]=pow(ab,p);
			ab++;
		}
	}
	else {
		printf("error, potencia invalida");
		return 1;
	}
h=(b-a)/k;
ab=a;
sum = 0;
for(i=0;i<n;i++){
	for(io=1;io<k;io++){
		sum=sum+FX[h];
	}
IX[i]= h*((FX[i]+FX[0])/2+sum);
}
resultados = fopen("resultados","w");
for(i=0;i<n;i++){
	ab=a+i;
	printf( "%i ", ab);
	printf( "%f ", FX[i]);
	printf( "%f \n", IX[i]);
	fprintf(resultados, "%i ", ab);
        fprintf(resultados, "%f ", FX[i]);
        fprintf(resultados, "%f \n", IX[i]);

}
fclose(resultados);
return 0;
}
