#include <stdio.h>
#include <locale.h>

/*13. Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a se-
guir, o novo preço e a classificação.

TABELA 1 — PErCENTuAL dE AuMENTo
PrEço %
Até R$ 50,00 5
Entre R$ 50,00 e R$ 100,00 10
Acima de R$ 100,00 15

TABELA 2 — CLAssiFiCAçõEs
NoVo PrEço CLAssiFiCAção
Até R$ 80,00 Barato
Entre R$ 80,00 e R$ 120,00 (inclusive) Normal
Entre R$ 120,00 e R$ 200,00 (inclusive) Caro
Maior que R$ 200,00 Muito caro*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float preco, novopreco, classificacao;
	
	printf("\nDigite o preço do produto: \n R$");
	scanf("%f",&preco);
    
	printf("\nPREÇOS\n");
	  
	if (preco <= 50) {
	        novopreco = preco * 0.05;
		printf("\nO novo preço do produto é: %.2f \n", novopreco + preco);
	}
	else if (preco > 50 && preco < 100) {
	        novopreco = preco * 0.10;
		printf("\nO novo preço do produto é: %.2f \n", novopreco + preco);
	}
	else if (preco > 100) {
	        novopreco = preco * 0.15;
		printf("\nO novo preço do produto é: %.2f \n", novopreco + preco);
    }

printf("\nCLASSIFIÇÃO DE PREÇOS\n");

if (preco <= 80) {
		printf("\nProduto barato. \n");
	}
	else if (preco > 80 && preco <= 120) {
		printf("\nProduto Nomal: \n");
	}
	else if (preco > 120 && preco <= 200) {
		printf("\nProduto Caro: \n");
	}
	else if (preco > 200) {
		printf("\nProduto Muito Caro: \n");
	}

	return 0;
}
