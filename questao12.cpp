#include <stdio.h>
#include <locale.h>

/*Fa�a um programa que receba o sal�rio bruto de um funcion�rio e, usando a tabela a seguir, calcule e

mostre o valor a receber. Sabe-se que este � composto pelo sal�rio bruto acrescido de gratifica��o e des-
contado o imposto de 7% sobre o sal�rio.

TABELA dAs grATiFiCA��Es
SAL�RIO GRATIFICA��O
At� R$ 350,00 R$ 100,00
R$ 350,00 R$ 600,00 R$ 75,00
R$ 600,00 R$ 900,00 R$ 50,00
Acima de R$ 900,00 R$ 35,00*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float salario, imposto, aumento, Nsalario;
	
	printf("\nDigite seu s�lario: \n R$");
	scanf("%f",&salario);
    
    printf("OBS: H� um desconto de 7 por cento sobre seu s�lario. \n");
	
	if (salario < 350) {
	        imposto = salario * 0.07;
			aumento = 100;
			salario = salario - imposto;
		printf("\nO valor a receber da gratifica��o � de: %.2f \n", aumento + salario);
	}
	else if (salario > 350 && salario < 600) {
	        imposto = salario * 0.07;
			aumento = 75;
			salario = salario - imposto;
		printf("\nO valor a receber da gratifica��o �: %.2f \n", aumento + salario);
	}
	else if (salario >= 600 && salario <= 900) {
	        imposto = salario * 0.07;
			aumento = 50;
			salario = salario - imposto;
		printf("\nO valor a receber da gratifica��o �: %.2f \n", aumento + salario);
}
	else if (salario > 900) {
	        imposto = salario * 0.07;
			aumento = 35;
			salario = salario - imposto;
		printf("\nO valor a receber da gratifica��o � de: %.2f \n", aumento + salario);

}
	return 0;
}
