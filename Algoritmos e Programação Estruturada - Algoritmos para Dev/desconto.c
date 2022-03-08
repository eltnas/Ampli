#include <stdio.h>

int main()
{
	char x;
	float desc, valor, total;
	
	printf("\nDigite o valor da Compra: ");
	scanf("%f", &valor);
	printf("\n\nSelecione a Letra que corresponde ao desconto oferecido!");
	printf("\n\n a. Azul");
	printf("\n b. Vermelho");
	printf("\n c. Branco");
	printf("\n\nSua opcao: ");
	scanf("%s", &x);
	
	switch(x)
	{
		case 'a':
			printf("\nVoce escolheu a cor Azul, seu desconto sera de 30 por cento");
			desc = 30;
			break;
			
		case 'b':
			printf("\nVoce escolheu a cor Vermelho, seu desconto sera de 20 por cento");
			desc = 20;
			break;
			
		case 'c':
			printf("\nVoce escolheu a cor Branco, seu desconto sera de 10 por cento");
			desc = 10;
			break;
			
		default:
			printf("\nOpcao invalida, nao sera dado nenhum desconto!");
			desc = 0;
	}
	
	total = valor - (valor * desc / 100);
	printf("\n\nO valor da sua compra e R$ %.2f", total);
	
}