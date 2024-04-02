#include <stdio.h>
#include <locale.h>

/*Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
seguir. Mostre o saldo médio e o valor do crédito.
JAVA

04 asc0711_CAP04 BR.indd 90 4/26/12 10:44 AM

Capítulo 4 Estrutura condicional | 91

sALdo Médio PErCENTuAL
Acima de R$ 400,00 30% do saldo médio
R$ 400,00 R$ 300,00 25% do saldo médio
R$ 300,00 R$ 200,00 20% do saldo médio
Até R$ 200,00 10% do saldo médio*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float saldo, cred;
	
	printf("\nDigite seu saldo médio: \n R$");
	scanf("%f",&saldo);

	
	if (saldo > 400) {
			cred = saldo * 0.3;
		printf("\nO do seu crédito especial é: %.2f R$ \n ", cred);
	}
	else if ( saldo <= 400 && saldo >= 301) {
		cred= saldo * 0.25;
		printf("\nO salário reajustado é: %.2f R$ \n", cred);
	}
	else if ( saldo <= 300 && saldo >= 201) {
		cred= saldo * 0.25;
		printf("\nO salário reajustado é: %.2f R$ \n", cred);
}
	else if ( saldo <= 200) {
		cred= saldo * 0.25;
		printf("\nO salário reajustado é: %.2f R$ \n", cred);
}
	printf("\nSeu saldo médio é: %.2f \n", saldo + cred);
	return 0;
}
