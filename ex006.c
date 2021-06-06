#include <stdlib.h>
#include <stdio.h>

int main ()
{
	int i,aux,a[10],maior,menor;
	menor = 0;
	maior = 0;
	for (i = 0; i < 10; i++)
	{
		printf("Digite um número:\n");
		fflush(stdout);
		scanf("%d",&aux);
		a[i] = aux;
		if(a[i] > maior)
		{
			maior = a[i];
		}
		else if(a[i] < menor)
		{
			menor = a[i];
		}
	}
	fflush(stdout);
	printf("\nO maior valor digitado foi %d", maior);
	printf("\nO menor valor digitado foi %d", menor);
	return 0;
}
