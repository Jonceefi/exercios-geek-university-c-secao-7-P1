#include <stdio.h>

int main(){
	
	int vai[6],volta[6],i,j=5;
	
	for(i=0;i < 6;i++){
		printf("Digite um número:");
		fflush(stdout);
		scanf("%d",&vai[i]);
		volta[j] = vai[i];
		j--;
	}
	printf("\n");
	printf("Vetor A->: ");
	for (i=0; i< 6;i++){
		printf("[%d]",vai[i]);
	}
	printf("\n");
	printf("Vetor A<-: ");
	for (i=0;i < 6;i++){
		printf("[%d]",volta[i]);
	}
	return 0;
}
