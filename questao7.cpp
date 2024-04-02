#include <stdio.h>
#include <locale.h>

/*Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float aumento, salario, reajuste;
	
	printf("\nDigite seu salário: \n");
	scanf("%f",&salario);
	
	reajuste = 500 * 0.3;
	if (salario == 500.00) {
		printf("\nO salário reajustado é: %.2f \n", salario + reajuste);
	}
	else {
		printf("\nVocê não tem direito ao reajuste.");
	}
	return 0;
}
