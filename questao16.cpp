#include <stdio.h>
#include <locale.h>

/*Uma empresa decide aplicar descontos nos seus pre�os usando a tabela a seguir. Fa�a um programa que
receba o pre�o atual de um produto e seu c�digo, calcule e mostre o valor do desconto e o novo pre�o.

PrE�o ATuAL % dE dEsCoNTo
At� R$ 30,00 Sem desconto
Entre R$ 30,00 e R$ 100,00 10%
Acima de R$ 100,00 15%*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float preco, desconto, cod;
	
	printf("\nDigite o pre�o do produto: \n R$");
	scanf("%f",&preco);
	
	
	printf("\nDigite o c�digo do produto: \n R$");
	scanf("%f",&cod);
	  
	if (preco <= 30) {
		printf("\nN�o tem desconto. \n");
	}
	else if (preco > 30 && preco < 100) {
	        desconto = preco * 0.10;
	    printf("\nO desconto do produto �: %.2f \n", desconto);    
		printf("\nO novo pre�o do produto �: %.2f \n", preco - desconto);
	}
	else if (preco > 100) {
	        desconto = preco * 0.15;
		printf("\nO desconto do produto �: %.2f \n", desconto);
		printf("\nO novo pre�o do produto �: %.2f \n", preco - desconto);
    }


	return 0;
}
