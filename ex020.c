#include <stdio.h>

int main(){
	int i,n,aux=0;
	int numeros[5],impar[5];
	for(i=0; i < 5;i++){
		printf("Digite um valor:");
		fflush(stdout);
		scanf("%d",&n);
			while(n<0 || n> 50){
				printf("Digite um valor entre 0 e 50:");
				fflush(stdout);
				scanf("%d",&n);
				}
		numeros[i] = n;
		if(n%2 != 0){
			impar[aux] = n;
			aux++;
		}
	}
	printf("\nOs números digitados foram:\n");
		for(i=0;i< 5;i++)
		{
			printf("[%d]",numeros[i]);
		}
	printf("\nOs números impares digitados foram:\n");
		for(i=0;i< aux;i++)
		{
			printf("[%d]",impar[i]);
		}
	return 0;
}
