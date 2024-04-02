#include <stdio.h>
#include <locale.h>

/*Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.

sALário PErCENTuAL dE AuMENTo
Até R$ 300,00 35%
Acima de R$ 300,00 15%*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float salario, reajuste, reajuste2;
	
	printf("\nDigite seu salário: \n R$");
	scanf("%f",&salario);

	
	
	if (salario <=300) {
			reajuste = salario * 0.35;
		printf("\nO salário reajustado é: %.2f R$ \n ", salario + reajuste);
	}
	else if (salario > 300) {
		reajuste2 = salario * 0.15;
		printf("\nO salário reajustado é: %.2f R$ \n", salario + reajuste2);
	}
	return 0;
}
