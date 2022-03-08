#include <stdio.h>

int main()
{
	int idade, filme = 0;
	char nome[50];
	
	printf("\nQual o seu nome? ");
	scanf("%s", &nome);
	
	printf("\nDigite a sua idade: ");
	scanf("%i", &idade);
	printf("\nDigite a Classificacao indicativa do filme: ");
	scanf("%i", &filme);
	
	if(idade < filme)
	{
		printf("\n%s, este filme nao e indicado para sua faixa etaria!!", nome);
	}
	else
	{
		printf("\n%s, este filme e indicado para sua faixa etaria!!", nome);
	}
}