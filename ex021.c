#include<stdio.h>

int main(){
	int a[5],b[5],c[5],i;
	printf("Vetor [A]:\n");
	for(i=0;i<5;i++){
		printf("Digite o valor:");
		fflush(stdout);
		scanf("%d",&a[i]);
	}
	printf("Vetor [B]:\n");
	for(i=0;i<5;i++){
		printf("Digite o valor:");
		fflush(stdout);
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++){
		c[i] = (a[i]-b[i]);
	}
	printf("Vetor [A]: ->");
	for(i=0;i<5;i++){
		printf("[%d]",a[i]);
	}
	printf("\nVetor [B]: ->");
	for(i=0;i<5;i++){
		printf("[%d]",b[i]);
	}
	printf("\n-------------[A - B = C]------------\n");
	printf("Vetor [C]: ->");
	for(i=0;i<5;i++){
		printf("[%d]",c[i]);
	}

	return 0;
}
