#include<stdio.h>

int main(){
	int i,a[3],b[3],c[6],par,impar,j,w;
	j = 0;
	w = 0;
	printf("\nVETOR[a]\n:");
	for(i=0;i<3;i++){
		printf("Digite um valor");
		fflush(stdout);
		scanf("%d",&a[i]);
	}
	printf("\nVETOR[b]\n:");
	for(i=0;i<3;i++){
		printf("Digite um valor");
		fflush(stdout);
		scanf("%d",&b[i]);
	}
	for(i=0;i<6;i = i +2){
		par = a[j]%2;
		if(par == 0){
			c[i] = a[j];
		}
		else{
			c[i] = 0;
			}
		j++;
	}
	for(i=1;i<6;i=i+2){
		impar = b[w]%2;
		if(impar != 0){
			c[i] = b[w];
		}
		else{
			c[i] = 0;
		}
	w++;
	}
	printf("\nVetor [A]:");
	for(i=0;i<3;i++){
		printf("[%d]",a[i]);
	}
	printf("\nVetor [B]:");
	for(i=0;i<3;i++){
		printf("[%d]",b[i]);
	}
	printf("\nVetor [C]:");
	for(i=0;i<6;i++){
		printf("[%d]",c[i]);
	}

	return 0;
}
