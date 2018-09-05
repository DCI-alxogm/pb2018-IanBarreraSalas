

#include <stdio.h>
 
int main()
{


	int start;
       	int X, N, k;
      	int  num, decimal = 0, base = 1, rem;

printf("Presiones 1 para convertir de binario a decimal y 2 para la inversa\n");
scanf("%i", &start);

if (start==1)
{
printf("Ingrese un numero binario \n");

    scanf("%d", &num); 
    

    while (num > 0)

    {

        rem = num % 10;

        decimal = decimal + rem * base;

        num = num / 10 ;

        base = base * 2;

    }

printf("El numero decimal es = %d \n", decimal);
return 0;
}
else if (start==2)
{
  printf("Ingrese un numero decimal\n");
  scanf("%d", &X);
 
  printf("%d en binario=\n", X);
 
  for (N = 20; N >= 0; N--) //se repite 20 veces y revisa el numero
  {
    k = X >> N; //cuenta cuantos espacios en el numero se han contado bit por bit
 
    if (k & 1) //Si k es 1 imprime 1
      printf("1");
    else
      printf("0");
  }
 
  return 0;
 }
else 
{
printf("opcion no valida");
return 0;
}

}
