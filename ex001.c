#include <stdio.h>
#include <stdlib.h>

int main()
{
	int op,i,a[5],aux,soma = 0;

	do
	{
	system("cls");
	printf("\nMENU\n");
	printf("1 - Atribuir valores ao vetor\n");
	printf("2 - Soma das posições\n");
	printf("3 - Modificar Valor da posição 4 para 100\n");
	printf("4 - Exibir vetor\n");
	printf("5 - Fechar programa\n");
	fflush(stdout);
	scanf("%d", &op);
		switch(op)
		{
			case 1:
				for(i = 0; i < 5;i++)
				{
					printf("Digite um número: \n");
					fflush(stdout);
					scanf("%d", &aux);
					a[i] = aux;
					//soma = soma + aux;
				}
				break;
			case 2:
				soma = a[0] + a[1] + a[5];
				printf("Soma das Posições = %d\n", soma);
				break;
			case 3:
				a[4] =  100;
				break;
			case 4:
				printf("Vetor ->[A]\n");
				for(i = 0; i < 5;i++)
					{
						printf("[%d]->",a[i]);
					}
				break;
		}
	}while(op != 5);

	return 0;
}
