#include <stdio.h>
#include <math.h>
int main()
{
	FILE*datos;
	FILE*resultados;
	int p, a, b, n;
	int i, h, io;
	float k, ab, ter;
	
	datos = fopen("datos","r");
	fscanf(datos, "%d", &p);
	fscanf(datos, "%d", &a);
	fscanf(datos, "%d", &b);
	fscanf(datos, "%d", &n);
	fscanf(datos, "%f", &k);
	ab=a;
	ter=(a+b)/n;

	float FX[n], sum[n];
	if (p>=0) {
		for (i=0;i<n;i++){
			FX[i]=pow(ab,p);
			ab=ab+ter;
		}
	}
	else {
		printf("error, potencia invalida");
		return 1;
	}
h=(b-a)/k;
ab=a;
for(i=0;i<n;i++){
	sum[i]=0;
}
for(i=0;i<n;i++){
	for(io=1;io<k;io++){
		sum[i]=sum[i-1]+ab+(a+b/2)/n;}
sum[i]= h*((sum[i]+sum[0])/2+sum[1]);
}
resultados = fopen("resultados","w");
for(i=0;i<n;i++){
	ab=a+i;
	printf( "%f ", ab);
	printf( "%f ", FX[i]);
	printf( "%f \n", sum[i]);
	fprintf(resultados, "%f ", ab);
        fprintf(resultados, "%f ", FX[i]);
        fprintf(resultados, "%f \n", sum[i]);

}
fclose(resultados);
return 0;
}



