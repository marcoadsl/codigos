#include <stdio.h>
#include <locale.h>

/* 2. Crie um programa que solicita e armazena o nome completo de um usuário em um
vetor, e informa a quantidade de caracteres que foi inserida.
Obs.: considere o ‘\0’ na contagem e não utilize a função strlen. */

int main()
{
    setlocale(LC_ALL, " ");

    char a, i;
	
	scanf(" %s", a);
	
	char v[a];
	
	for( i = 0; i < v; i++)
	{
		printf("caractere na posicao: %d\n", i);
	}
	
    return(0);
}