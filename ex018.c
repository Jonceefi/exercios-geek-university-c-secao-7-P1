#include<stdio.h>

int main(){

	int i,n,mult[3],aux=0,resto;
	printf("Digite um valor:\n");
	fflush(stdout);
	scanf("%d",&n);
	for(i=2; i <= n; i++){
		resto = n%i;
		if(resto == 0 ){
			aux++;
			mult[aux] = i;
		}
	}
	printf("O valor [%d] tem [%d] multiplos\n",n,aux);
	printf("São eles: ");
	for(i=1; i<=aux;i++){
		printf("[");
		printf("%d",mult[i]);
		printf("]");
	}
	return 0;
}
