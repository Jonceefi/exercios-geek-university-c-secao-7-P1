#include <stdio.h>

int main(){
	float nota[15],soma=0,media;
	int i,aux=0;

	for(i=0;i < 5;i++){
		printf("Digite a nota:");
		fflush(stdout);
		scanf("%f",&nota[i]);
		soma = soma + nota[i];
		aux = aux+1;
	}
	media = soma/aux;
	for(i=0; i < 5;i++){
		printf("[%.2f]",nota[i]);
	}
	printf("\n");
	printf("A media da turma foi: %.2f",media);

	return 0;
}
