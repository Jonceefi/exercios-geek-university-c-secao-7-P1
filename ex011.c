#include<stdio.h>

int main(){

	float reais[10],seP=0;
	int i,seN=0;
	for(i = 0;i < 10;i++){
		printf("Digite o número |R:");
		fflush(stdout);
		scanf("%f", &reais[i]);
		if (reais[i] < 0){
			seN = seN + 1;
		}
		else if(reais[i] > 0){
			seP = seP + reais[i];
		}
	}
	printf("A soma dos positivos [%.2f]\n",seP);
	printf("A quantidade de negativos digitados foi [%.d]\n",seN);

	return 0;
}
