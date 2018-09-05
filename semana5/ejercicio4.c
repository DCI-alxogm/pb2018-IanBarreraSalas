#include<stdio.h>	
	int main()
{

    int  num, decimal = 0, base = 1, rem;

 

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
