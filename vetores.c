#include <stdio.h>
//VETORES

//Array unidimencional
int main()
{
	//Vetores e Strings;
	char nome[50];
	printf("Qual seu nome?");
	fflush(stdout);
	gets(nome);
	printf("Olá %s\n", nome);

	//Vetores e Caracteres;
	char letras[26];
	int  cont = 0;
	int i;
	for(i = 97; i <= 122; i++) {
		letras[cont] = i;
		cont = cont + 1;
	}
	for(i = 0; i < 26; i++) {
		printf("%d == %c\n", letras[i], letras[i]);
	}
	//Vetores de Inteiros
	int numeros[5];
	numeros[0] = 1;
	numeros[1] = 2;
	numeros[2] = 3;
	numeros[3] = 4;
	numeros[4] = 5;

	//Vetores de Reais
	float valores[5];
	for(i = 0; i < 5; i++){
		valores[i] = (float)numeros[i] / (float)2;
	}
	for(i = 4; i >=0; i--) {
		printf("%.2f\n",valores[i]);
	}

	return 0;
}
