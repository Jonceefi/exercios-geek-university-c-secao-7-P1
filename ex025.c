#include<stdio.h>

//Os primeiros 10 números terminados em 7 não divisiveis por 7.

int main(){

	int sete[10],i,j,r,aux,aux2;
	i=1;
	j=0;
	for(r = 0;j < 10;r++)
	{
		aux = i%7;
		if(aux != 0)
		{
			if(i > 10 || i < 100){
				aux2 = i%10;
					if( aux2 == 7){
						sete[j] = i;
						j++;
					}

			}
		}
		i++;
	}
	for(i=0;i < 10; i++){
		printf("%d \n", sete[i]);
	}
	return 0;
}
