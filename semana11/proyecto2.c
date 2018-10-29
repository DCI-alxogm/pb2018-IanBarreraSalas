#include<stdio.h>
int main()
{
	int i=0,c=0,YA,XA,N;
	float izq,der,arr,abj;
	FILE*datos;
	FILE*resultados;

	datos = fopen("datos","r");
	fscanf(datos,"%f %f %f %f %i", &izq,&der,&arr,&abj,&N);
	fclose(datos);
	printf("%f %f %f %f %i", izq,der,arr,abj,N);
	float placa[N][N];
	for(YA=0; YA<N; YA++){
                for(XA=0; XA<N; XA++){
                        placa[XA][YA]=0;
                }
        }

	for(YA=0;YA<N;YA++){
		placa[0][YA]=arr;
		placa[N-1][YA]=abj;
	}
	for(XA=0;XA<N;XA++){
		placa[XA][0]=izq;
		placa[XA][N-1]=der;
	}
	while(i<10){
	while(placa[5][5]<izq-1){
		     char buffer[32];
        while(c<21) {

	for(YA=1; YA<N-1; YA++){
		for(XA=1; XA<N-1; XA++){
			placa[XA][YA]=(placa[XA+1][YA]+placa[XA-1][YA]+placa[XA][YA+1]+placa[XA][YA-1])/4;
		}
	}

                snprintf(buffer, sizeof(char)*32, "resultados%i", c);
                c++;
	
	resultados=fopen(buffer,"w");
	for(YA=0; YA<N; YA++){
                for(XA=0; XA<N; XA++){
			fprintf(resultados, "%f ", placa[XA][YA]);
		}
		fprintf(resultados, "\n");
	}
	}
	fclose(resultados);
	c=0;
	}
	i++;
	c=0;
	}

	return 0;
}
