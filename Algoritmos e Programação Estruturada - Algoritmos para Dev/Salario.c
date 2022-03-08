#include <stdio.h>

int main(){
	float salario_bruto, desc_inss, desc_ir, salario_liquido;
	
	printf("\n\nCalculo de Salario Liquido com descontos de IR e INSS!!");
	printf("\nDigite o valor do Salario: R$ ");
	scanf("%f", &salario_bruto);
	
	// Desconto do INSS
	if (salario_bruto <=1045.0){
		desc_inss = salario_bruto * 0.075;
		
	}else if (salario_bruto <= 2089.60){
		desc_inss = salario_bruto * 0.09;
		
	} else if (salario_bruto <= 3134.4){
		desc_inss = salario_bruto * 0.12;
		
	} else {
		desc_inss = salario_bruto * 0.14;
	}
	
	// Desconto IR
	if (salario_bruto <= 1903.98){
		desc_ir = 0;
		
	} else if (salario_bruto <= 2826.65){
		desc_ir = salario_bruto * 0.075;
		
	}else if (salario_bruto <= 3751.05){
		desc_ir = salario_bruto * 0.15;
		
	} else if (salario_bruto <= 4664.68){
		desc_ir = salario_bruto * 0.225;
		
	} else{
		desc_ir = salario_bruto * 0.275;
		
	}
	
	salario_liquido = salario_bruto - desc_inss - desc_ir;
	
	
	
	printf("\nSalario bruto:   R$%.2f", salario_bruto);
	printf("\nDesconto INSS:   R$%.2f", desc_inss);
	printf("\nDesconto IR:     R$%.2f", desc_ir);
	printf("\nSalario Liquido: R$%.2f", salario_liquido);
	
	return 0;
	
}