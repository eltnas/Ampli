#include <stdio.h>

int main()
{
	int idade, filme = 0;
	
	printf("\nDigite a sua idade: ");
	scanf("%i", &idade);
	printf("\nDigite a Classificacao indicativa do filme: ");
	scanf("%i", &filme);
	
	if(idade < filme)
	{
		printf("\nEste filme nao e indicado para sua faixa etaria!!");
	}
	else
	{
		printf("Este filme e indicado para sua faixa etaria!!");
	}
}