    #include <stdio.h>
     
    int main()
    {
	    FILE*num_maximo;
	    int i, tam=95;
      float datos[95], *maximo, lugar = 1;
     num_maximo = fopen("num_maximo.txt","r");
     for (i=0; i < tam; i++){
	     fscanf(num_maximo,"%f", &datos[i]);
     }

      maximo  = datos;
      *maximo = *datos;
     
      for (i = 1; i < tam; i++)
      {
        if (*(datos+i) > *maximo)
        {
           *maximo = *(datos+i);
           lugar = i+1;
        }
      }
     
      printf("Maximo almacendado en  %f y su valor es %f.\n", lugar, *maximo);
      return 0;
    }
