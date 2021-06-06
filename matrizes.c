#include <stdio.h>
/* Matrizes

   Arrays multidimencionais;
   int numeros[5][5];[linhas][colunas];

   [00][01][02][03][04]
   [10][11][12][13][14]
   [20][21][22][23][24]
   [30][31][32][33][34]
   [40][41][42][43][44]

*/
int main(){
	//Matriz de string:
	char nome[3][50];
	//onde tem-se 3 posições de linhas disponíveis para 49 caracteres;
	int i;
	for (i = 0; i < 3; i ++)
	{
		printf("Digite seu nome \n");
		gets(nome[i]);
	}
	for (i = 0; i < 3; i ++)
	{
		printf("Nome %d = %s\n",i ,nome[i]);
	}
	//Matriz de int:
	int numeros[2][2];
	int j, aux;
	for(i = 0; i < 2;i++)
	{
		for(j = 0; j < 2;j++)
		{
			printf("Digite um número");
			fflush(stdout);
			scanf("%d", &aux);
			numeros[i][j] = aux;
		}
	}
	for(i = 0; i < 2;i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("Matriz numeros[%d][%d] vale %d\n", i, j, numeros[i][j]);
		}
	}
	//Matriz de float:
	//float valores[5][5];
	return 0;
}
