#include <stdio.h>

int main()
{
	int idade;
	printf("\nDigite a sua idade: ");
	scanf("%i", &idade);
	
	if(idade >= 18){
		printf("\nVoce ja pode tirar a sua CNH!");
	}
	else{
		printf("\nVoce ainda nao pode tirar a CNH!");
	}
}