#include<stdio.h>

int main ()
{

        float a;
        float b;
        float c;
        float d;

        printf("Introduce Valores a,b,c y d \n");
        scanf("%f",&a);
        scanf("%f",&b);
        scanf("%f",&c);
        scanf("%f",&d);
        printf("e=(a+b)*c/d= %f /n",(a+b)*c/d);
        printf("e=((a+b)*c)/d= %f /n",((a+b)*c)/d);
        printf("e=(a+b)*c/d= %f /n",(a+b)*c/d);
        printf("e=a+(b*c)/d= %f /n",a+(b*c)/d);

        return 0;
}

