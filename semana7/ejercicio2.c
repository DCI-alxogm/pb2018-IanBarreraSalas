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
	h=a-a/n
	for (){
		h+=a+ter-a
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




