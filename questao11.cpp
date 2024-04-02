#include <stdio.h>
#include <locale.h>

/*Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo salário.

SALÁRIO PErCENTuAL DE AUMENTO
Até R$ 300,00 15%
R$ 300,00 R$ 600,00 10%
R$ 600,00 R$ 900,00 5%
Acima de R$ 900,00 0%*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float salario, aumento, Nsalario;
	
	printf("\nDigite seu sálario: \n R$");
	scanf("%f",&salario);

	
	if (salario < 300) {
			aumento = salario * 0.15;
		printf("\nSeu aumento é de: %.2f R$ \n ", aumento);
		printf("\nSeu salário ficou: %.2f \n", aumento + salario);
	}
	else if ( salario > 300 && salario < 600) {
		aumento = salario * 0.10; 
		printf("\nSeu aumento é de: %.2f R$ \n ", aumento);
		printf("\nSeu salário ficou: %.2f \n", aumento + salario);
		
	}
	else if ( salario >= 600 && salario <= 900) {
		aumento = salario * 0.05; 
		printf("\nSeu aumento é de: %.2f R$ \n ", aumento);
		printf("\nSeu salário ficou: %.2f \n", aumento + salario);
	
}
else if ( salario > 900) {
		aumento = salario * 0;
		printf("\nSeu aumento é de: %.2f R$ \n ", aumento);
		printf("\nVocê não teve aumento.");
}
	return 0;
}






