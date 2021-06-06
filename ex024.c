#include <stdio.h>

int main(){
	float n[5],h[5],maiorh=0,menorh=10;
	int i,posmaior,posmenor;
	for(i=0;i<5;i++){
		printf("Digite o número do aluno: ");
		fflush(stdout);
		scanf("%f",&n[i]);
		printf("Digite a altura do aluno:");
		fflush(stdout);
		scanf("%f",&h[i]);
		if(h[i] > maiorh){
			maiorh = h[i];
			posmaior = i+1;
		}
		else if(h[i] < menorh){
			menorh = h[i];
			posmenor = i+1;
		}
		printf("\n");
	}
	printf("\n[%d] é o maior aluno com altura de [%.2f]",posmaior,maiorh);
	printf("\n[%d] é o menor aluno com altura de [%.2f]",posmenor,menorh);
	return 0;
}
