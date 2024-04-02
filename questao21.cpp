#include <stdio.h>
#include <locale.h>

/*Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir.

04 asc0711_CAP04 BR.indd 92 4/26/12 10:44 AM

Capítulo 4 Estrutura condicional | 93

Código dE origEM ProCEdêNCiA
1 Sul
2 Norte
3 Leste
4 Oeste
5 ou 6 Nordeste
7 ou 8 ou 9 Sudeste
10 a 20 Centro-oeste
21 a 30 Nordeste*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float preco, novopreco;
	int cod;
	
	printf("\nDigite o preço do produto: \n R$ ");
	scanf("%f",&preco);
    
    printf("\nCódigos de 1 a 30. \n");
    
    printf("\nDigite o código de origem do produto: \n");
    scanf("%d",&cod);
	  
	if (cod == 1) {
		printf("\nSua procedência é sul. \n");
	}
	else if (cod == 2) {
		printf("\nSua procedência é norte. \n");
	}
	else if (cod == 3) {
		printf("\nSua procedência é leste. \n");
	}
	else if (cod == 4) {
		printf("\nSua procedência é oeste. \n");
	}
	else if (cod == 5 || cod == 6 ) {
		printf("\nSua procedência é nordeste. \n");
	}
	else if (cod == 7 || cod == 8 || cod == 9) {
		printf("\nSua procedência é sudeste. \n");
	}
	else if (cod >= 10 && cod <= 20 ) {
		printf("\nSua procedência é centro-oeste. \n");
	}
	else if (cod >= 21 &&  cod <= 30 ) {
		printf("\nSua procedência é nordeste. \n");
	}
	else {
		printf("\nIvalido. \n");
	}
	return 0;
}
