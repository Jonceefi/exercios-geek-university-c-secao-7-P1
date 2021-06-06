#include<stdio.h>
//Números primos e suas posições nos vetores;
int main(){

	int vet[10],i,r,valor,aux,primo,vetp[10] ;
	primo = 0;
	for(i = 0; i < 10;i++)
	{
		scanf("%d", &valor);
		fflush(stdout);
		vet[i] = valor;
		for(r = 2; r < valor;r++)
		{
			aux = valor%r;
			if(aux == 0)
			{
				primo++;
			}
		}
		if(primo == 0)
		{
			 vetp[i] = valor;
		}
		else if (primo > 0 || aux == 1 || aux == 0)
		{
			vetp[i] = 0;
		}
		primo = 0;
	}
	for(i=0; i < 10;i++)
	{
		printf("[%d]",vet[i]);
	}
	printf("\n");
	for(i=0; i < 10;i++)
	{
		printf("[%d]",vetp[i]);
	}
	return 0;
}
