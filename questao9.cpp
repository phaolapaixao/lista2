#include <stdio.h>
#include <locale.h>

/*Um banco conceder� um cr�dito especial aos seus clientes, de acordo com o saldo m�dio no �ltimo ano. Fa�a
um programa que receba o saldo m�dio de um cliente e calcule o valor do cr�dito, de acordo com a tabela a
seguir. Mostre o saldo m�dio e o valor do cr�dito.
JAVA

04 asc0711_CAP04 BR.indd 90 4/26/12 10:44 AM

Cap�tulo 4 Estrutura condicional | 91

sALdo M�dio PErCENTuAL
Acima de R$ 400,00 30% do saldo m�dio
R$ 400,00 R$ 300,00 25% do saldo m�dio
R$ 300,00 R$ 200,00 20% do saldo m�dio
At� R$ 200,00 10% do saldo m�dio*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float saldo, cred;
	
	printf("\nDigite seu saldo m�dio: \n R$");
	scanf("%f",&saldo);

	
	if (saldo > 400) {
			cred = saldo * 0.3;
		printf("\nO do seu cr�dito especial �: %.2f R$ \n ", cred);
	}
	else if ( saldo <= 400 && saldo >= 301) {
		cred= saldo * 0.25;
		printf("\nO sal�rio reajustado �: %.2f R$ \n", cred);
	}
	else if ( saldo <= 300 && saldo >= 201) {
		cred= saldo * 0.25;
		printf("\nO sal�rio reajustado �: %.2f R$ \n", cred);
}
	else if ( saldo <= 200) {
		cred= saldo * 0.25;
		printf("\nO sal�rio reajustado �: %.2f R$ \n", cred);
}
	printf("\nSeu saldo m�dio �: %.2f \n", saldo + cred);
	return 0;
}
