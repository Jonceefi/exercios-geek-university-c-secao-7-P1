#include <stdlib.h>
#include <stdio.h>

int main ()
{
	int i,aux,a[10],maior,menor,posma,posme;
	menor = 0;
	maior = 0;
	for (i = 0; i < 10; i++)
	{
		printf("Digite um n�mero:\n");
		fflush(stdout);
		scanf("%d",&aux);
		a[i] = aux;
		if(a[i] > maior)
		{
			maior = a[i];
			posma = i+1;
		}
		else if(a[i] < menor)
		{
			menor = a[i];
			posme = i+1;
		}
	}
	for(i = 0; i < 10;i++)
	{
		printf("[%d] ",a[i]);
	}
	fflush(stdout);
	printf("\nO maior valor � %d e est� na posi��o %d no vetor\n", maior,posma);
	printf("\nO menor valor � %d e est� na posi��o %d no vetor\n", menor,posme);
	return 0;
}
