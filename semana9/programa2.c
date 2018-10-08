  #include <stdio.h>
     
    int main()
    {
	    FILE*prom;
	    int i, tam=267;
      float datos[267], *promedio, suma=0;
     prom = fopen("promedio.txt","r");
     for (i=0; i < tam; i++){
	     fscanf(prom,"%f", &datos[i]);
     }

      promedio  = datos;
      *promedio = *datos;
     
      for (i = 0; i < tam; i++)
      {
	     suma+=*promedio+i;
      }
      suma= suma/tam;
      printf("el promedio es %f.\n", suma);
      return 0;
    }
