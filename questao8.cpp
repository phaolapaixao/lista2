#include <stdio.h>
#include <locale.h>

/*Fa�a um programa para calcular e mostrar o sal�rio reajustado de um funcion�rio. O percentual de aumento
encontra-se na tabela a seguir.

sAL�rio PErCENTuAL dE AuMENTo
At� R$ 300,00 35%
Acima de R$ 300,00 15%*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float salario, reajuste, reajuste2;
	
	printf("\nDigite seu sal�rio: \n R$");
	scanf("%f",&salario);

	
	
	if (salario <=300) {
			reajuste = salario * 0.35;
		printf("\nO sal�rio reajustado �: %.2f R$ \n ", salario + reajuste);
	}
	else if (salario > 300) {
		reajuste2 = salario * 0.15;
		printf("\nO sal�rio reajustado �: %.2f R$ \n", salario + reajuste2);
	}
	return 0;
}
