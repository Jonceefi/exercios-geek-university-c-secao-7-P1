#include<stdio.h>

int main(){
	int vetor[10],igual,i,aux,j,ig[10];
	aux = 0;
	j = 0;
	for(i = 0;i < 10;i++){
		printf("Digite os valores:");
		fflush(stdout);
		scanf("%d",&vetor[i]);
		igual = vetor[i];
		for(j = 0; j < i;j++){
			if(igual == vetor[j]){
				aux++;
				ig[aux] = igual;
			}
		}
	}
	printf("Números de valores repetidos: ");
	printf("[%d]\n",aux);
	printf("Valores repetidos:");
	for(i = 1; i <= aux;i++){
		printf("[%d]",ig[i]);
	}

	return 0;
}
