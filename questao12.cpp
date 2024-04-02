#include <stdio.h>
#include <locale.h>

/*Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e

mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e des-
contado o imposto de 7% sobre o salário.

TABELA dAs grATiFiCAçõEs
SALÁRIO GRATIFICAÇÃO
Até R$ 350,00 R$ 100,00
R$ 350,00 R$ 600,00 R$ 75,00
R$ 600,00 R$ 900,00 R$ 50,00
Acima de R$ 900,00 R$ 35,00*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float salario, imposto, aumento, Nsalario;
	
	printf("\nDigite seu sálario: \n R$");
	scanf("%f",&salario);
    
    printf("OBS: Há um desconto de 7 por cento sobre seu sálario. \n");
	
	if (salario < 350) {
	        imposto = salario * 0.07;
			aumento = 100;
			salario = salario - imposto;
		printf("\nO valor a receber da gratificação é de: %.2f \n", aumento + salario);
	}
	else if (salario > 350 && salario < 600) {
	        imposto = salario * 0.07;
			aumento = 75;
			salario = salario - imposto;
		printf("\nO valor a receber da gratificação é: %.2f \n", aumento + salario);
	}
	else if (salario >= 600 && salario <= 900) {
	        imposto = salario * 0.07;
			aumento = 50;
			salario = salario - imposto;
		printf("\nO valor a receber da gratificação é: %.2f \n", aumento + salario);
}
	else if (salario > 900) {
	        imposto = salario * 0.07;
			aumento = 35;
			salario = salario - imposto;
		printf("\nO valor a receber da gratificação é de: %.2f \n", aumento + salario);

}
	return 0;
}
