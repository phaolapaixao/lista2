#include <stdio.h>
#include <locale.h>

/*Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rios inferiores a R$ 500,00. Fa�a um
programa que receba o sal�rio do funcion�rio e mostre o valor do sal�rio reajustado ou uma mensagem, caso
ele n�o tenha direito ao aumento.*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float aumento, salario, reajuste;
	
	printf("\nDigite seu sal�rio: \n");
	scanf("%f",&salario);
	
	reajuste = 500 * 0.3;
	if (salario == 500.00) {
		printf("\nO sal�rio reajustado �: %.2f \n", salario + reajuste);
	}
	else {
		printf("\nVoc� n�o tem direito ao reajuste.");
	}
	return 0;
}
