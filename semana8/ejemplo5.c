#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, sum = 0;
	int *num;
	printf("Introduce 6 números enteros:\n");
	num=(int*) malloc(*num*sizeof(int));				
	for(i = 0; i < 6; ++i)
	{
		scanf("%d",&num[i]);
		sum +=num[i];
	}
	printf("Suma = %d", sum);
	return 0;
}
