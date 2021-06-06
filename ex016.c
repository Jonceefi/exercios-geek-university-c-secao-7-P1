#include <stdio.h>

int main(){

	int vetor[5],i,op;
	do {
	printf("\n1 - DIGITAR UM VETOR DE 5 NÚMEROS;\n");
	printf("2 - MOSTRAR VETOR NA ORDEM DIRETA;\n");
	printf("3 - MOSTRAR VETOR NA ORDEM REVERSA; \n");
	printf("0 - SAIR DO PROGRAMA.\n");
	fflush(stdout);
	scanf("%d",&op);

	switch(op) {
		case 0:
		return 0;
		break;
		case  1:
			for(i=0;i < 5; i++){
					printf("Digite um valor:");
					fflush(stdout);
					scanf("%d",&vetor[i]);
				}
			break;
		case 2:
			printf("\nVetor na ordem direta:");
				for(i=0;i<5;i++){
					printf("[%d]",vetor[i]);
				}
			break;
		case 3:
			printf("\nVetor na ordem reversa");
			for(i=4;i>-1;i--){
				printf("[%d]",vetor[i]);
			}
			break;
		default:
			printf("Erro as opções disponíveis estão entre 0 e 3!");
			break;
		}
	}while(op != 0);
	return 0;
}

	/*int i,inteiro[3],j,n,aux,dif[3];
	aux = 0;

	for(i = 0; i < 3;i++){
		printf("Digite um valor: ");
		fflush(stdout);
		scanf("%d",&inteiro[i]);
		n = inteiro[i];
			for(j=0; j<i;j++){
				if(n != inteiro[j]){
					aux++;
					dif[aux] = n;
				}
			}
	}
	for(i=1; i <= aux;i++){
		printf("[%d]",dif[i]);
	}
	return 0;*/
