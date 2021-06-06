#include<stdio.h>

int main()
{
	int i,aux,a[5],x,y,soma;
	for(i = 0;i < 5;i++)
	{
		printf("Digite um valor: \n");
		fflush(stdout);
		scanf("%d",&aux);
		a[i] = aux;
	}
	for(i = 0; i < 5; i++)
	{
		printf("[%d]",a[i]);
	}
	fflush(stdout);
	printf("\nDigite uma posição entre 1 e 5\n");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdout);
	while(x < 1 || x > 5)
	{
		printf("Inválido\n");
		fflush(stdout);
		printf("Digite um valor entre 1 e 5\n");
		fflush(stdout);
		scanf("%d\n",&x);
		fflush(stdout);
	}
	fflush(stdout);
	printf("\nDigite outra posição entre 1 e 5 (Pode ser a mesma)\n");
	fflush(stdout);
	scanf("%d",&y);
	fflush(stdout);
	while(y < 1 || y > 5)
	{
		printf("Inválido\n");
		fflush(stdout);
		printf("Digite um valor entre 1 e 5\n");
		fflush(stdout);
		scanf("%d\n",&y);
		fflush(stdout);
	}
	fflush(stdout);
	x = a[x-1];
	y = a[y-1];
	soma = x + y;
	printf("\nA soma entre os intrevalos é %d",soma);

	return 0;
}
