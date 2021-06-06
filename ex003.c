#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	float a[3],aux=0,b[3];
	for(i = 0; i < 3; i++)
	{
		printf("Digite um valor |R:\n");
		fflush(stdout);
		scanf("%f",&aux);
		a[i] = aux;
	}
	for(i = 0; i < 3; i++)
	{
		b[i]= a[i]*a[i];
		printf("O quadrado de [%.2f] é [%.2f]\n",a[i],b[i]);
	}

	return 0;
}
