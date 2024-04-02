#include <stdio.h>
#include <locale.h>

/*Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que
receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.

PrEço ATuAL % dE dEsCoNTo
Até R$ 30,00 Sem desconto
Entre R$ 30,00 e R$ 100,00 10%
Acima de R$ 100,00 15%*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float preco, desconto, cod;
	
	printf("\nDigite o preço do produto: \n R$");
	scanf("%f",&preco);
	
	
	printf("\nDigite o código do produto: \n R$");
	scanf("%f",&cod);
	  
	if (preco <= 30) {
		printf("\nNão tem desconto. \n");
	}
	else if (preco > 30 && preco < 100) {
	        desconto = preco * 0.10;
	    printf("\nO desconto do produto é: %.2f \n", desconto);    
		printf("\nO novo preço do produto é: %.2f \n", preco - desconto);
	}
	else if (preco > 100) {
	        desconto = preco * 0.15;
		printf("\nO desconto do produto é: %.2f \n", desconto);
		printf("\nO novo preço do produto é: %.2f \n", preco - desconto);
    }


	return 0;
}
