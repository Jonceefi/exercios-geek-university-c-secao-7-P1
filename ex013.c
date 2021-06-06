#include<stdio.h>

int main(){
	int i,p=0,pMaior,pMenor,valor[5],maior=0,menor=0;
	for(i=0;i<5;i++){
		printf("Digite um valor:");
		fflush(stdout);
		scanf("%d",&valor[i]);
		p = p + 1;
		if (valor[i] > maior){
			maior = valor[i];
			pMaior = p;
		}
		else if(valor[i] < menor){
			menor = valor[i];
			pMenor = p;
		}
	}
	printf("\nO maior valor digitado foi: [%d] e se encontra na posição [%d] do vetor.\n",maior,pMaior);
	printf("O menor valor digitado foi: [%d] e se encontra na posição [%d] do vetor.",menor,pMenor);
	return 0;
}
