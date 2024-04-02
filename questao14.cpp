#include <stdio.h>
#include <locale.h>

/*Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.

FAixA sALAriAL % dE AuMENTo
Até R$ 300,00 50%
R$ 300,00 R$ 500,00 40%
R$ 500,00 R$ 700,00 30%
R$ 700,00 R$ 800,00 20%
R$ 800,00 R$ 1.000,00 10%
Acima de R$ 1.000,00 5%*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float salario, aumento, Nsalario;
	
	printf("\nDigite seu sálario: \n R$");
	scanf("%f",&salario);

	
	if (salario < 300) {
			aumento = salario * 0.50;
		printf("\nSeu novo salário é R$: %.2f \n", aumento + salario);
	}
	else if ( salario > 300 && salario <= 500) {
		aumento = salario * 0.40; 
		printf("\nSeu novo salário é R$: %.2f \n", aumento + salario);
	}
    else if ( salario > 500 && salario <= 700){
		aumento = salario * 0.30; 
		printf("\nSeu novo salário é R$: %.2f \n", aumento + salario);
	} 
	else if ( salario > 700 && salario <= 800) {
		aumento = salario * 0.20; 
		printf("\nSeu novo salário é R$: %.2f \n", aumento + salario);
	}
	else if ( salario > 800 && salario <= 1000) {
		aumento = salario * 0.10; 
		printf("\nSeu novo salário é R$: %.2f \n", aumento + salario);
	}
	else if ( salario > 1000) {
		aumento = salario * 0.05; 
		printf("\nSeu novo salário é R$: %.2f \n", aumento + salario);
	}
	
	return 0;
}


