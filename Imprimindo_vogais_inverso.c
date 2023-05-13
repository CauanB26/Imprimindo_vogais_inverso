/*
Programa que a partir de uma frase (toda em maiscula) imprime apenas as vogais e em ordem inversa.
*/
#include <stdio.h>
#include <string.h>

void vogais(char* nome, int tamanho);

int main(void)
{
	char nome[] = "TRABALHANDO COM STRINGS";
	
	int tamanho;
	tamanho = strlen(nome);

	vogais(nome, tamanho);
	return 0;
}

void vogais(char* nome, int tamanho)
{
	if (tamanho == 0)
	{
		return; //Condição de parada
	}

	if (nome[tamanho - 1] == 'A' || nome[tamanho - 1] == 'E' || nome[tamanho - 1] == 'I' || nome[tamanho - 1] == 'O' || nome[tamanho - 1] == 'U')
	{
		printf("%c", nome[tamanho - 1]); //Caso base
	}

	vogais(nome, tamanho - 1); //Caso recursivo
}