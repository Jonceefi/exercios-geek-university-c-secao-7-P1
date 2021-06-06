#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,aux,a[3];
	int par = 0;
	for(i = 0;i < 3;i++)
	{
		printf("Digite um valor");
		fflush(stdout);
		scanf("%d", &aux);
		a[i] = aux;
		aux = a[i] % 2;
		if(aux == 0)
		{
			par = par + 1;
		}
	}
	fflush(stdout);
	printf("O vetor A possui %d valores páres",par);
	return 0;
}
