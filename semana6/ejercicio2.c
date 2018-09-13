#include <stdio.h>
#include <math.h>
int main()
{
	FILE*archivo;
	int mujer=0, hombre=0;
	int uno=0, dos=0, tres=0, cuatro=0, cinco=0, seis=0, siete=0, ocho=0, nueve=0;
	int promedio=0;
	int YA, XA;
	int alumnos[4][10];
	for (YA=0; YA<10; YA++){
		for (XA=0; XA<4; YA++){
			alumnos[XA][YA];
		}
	}
	archivo=foopen("dalumnos")
	for (YA = 0; YA < 10; YA++){
        fscanf(dalumnos, "%d", &alumnos[0][YA]);
        }
	for (YA = 0; YA < 10; YA++){
        fscanf(dalumnos, "%d", &alumnos[1][YA]);
        }
	for (YA = 0; YA < 10; YA++){
        fscanf(dalumnos, "%d", &alumnos[2][YA]);
        }
	for (YA = 0; YA < 10; YA++){
        fscanf(dalumnos, "%d", &alumnos[3][YA]);
        }
	fclose(dalumnos);
	for (YA=0; YA<10;YA++){
		if(alumnos[1][YA]==1){
			mujer+=1;
		}
		else {hombre+=1;
		}
	}
	for (YA=0; YA<10;YA++){
                if(alumnos[2][YA]==1){
                        uno+=1;
                }
                else if (alumnos[2][YA]==2){
			dos+=1;
                }
		else if (alumnos[2][YA]==3){
                        tres+=1;
                }
		else if (alumnos[2][YA]==4){
                        cuatro+=1;
                }
		else if (alumnos[2][YA]==5){
                        cinco+=1;
                }
		else if (alumnos[2][YA]==6){
                        seis+=1;
                }
		else if (alumnos[2][YA]==7){
                        siete+=1;
                }
		else if (alumnos[2][YA]==8){
                        ocho+=1;
                }
		else if (alumnos[2][YA]==9){
                        nueve+=1;
                }

        }
	for(YA=0;YA<10;YA++){
		promedio+=alumnos[3][YA];
	}
	promedio=promedio/10;
	archivo=foopen("resumen")

	fprintf(resumen, " numero de mujeres = %i, numero de hombres = %i\n", mujer, hombre);
	fprintf(resumen, "alumnos por semestre 1=%i,2=%i,3=%i,4=%i,5=%i,6=%i,7=%i,8=%i,9=%i\n", uno, dos, tres, cuatro, cinco, seis, siete, ocho, nueve);
	fprintf(resumen, "promedio alumnos = %i\n", promedio);
	fclose(resumen);
	return 0;
}

