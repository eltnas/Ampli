#include <stdio.h>

int main()
{
	float orcamento;
	
	printf("\nQual o orcamento disponivel para a viajem? ");
	scanf("%f", &orcamento);
	
	if(orcamento >= 10000)
	{
		printf("\n Joao e Maria possuem um orcamento para uma viajem internacional!");
	}
	else
	{
		printf("\n Joao e Maria possuem um orcamento para uma viajem nascional!");
	}
}