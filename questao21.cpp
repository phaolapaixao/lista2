#include <stdio.h>
#include <locale.h>

/*Fa�a um programa que receba o pre�o de um produto e seu c�digo de origem e mostre sua proced�ncia.
A proced�ncia obedece � tabela a seguir.

04 asc0711_CAP04 BR.indd 92 4/26/12 10:44 AM

Cap�tulo 4 Estrutura condicional | 93

C�digo dE origEM ProCEd�NCiA
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
	
	printf("\nDigite o pre�o do produto: \n R$ ");
	scanf("%f",&preco);
    
    printf("\nC�digos de 1 a 30. \n");
    
    printf("\nDigite o c�digo de origem do produto: \n");
    scanf("%d",&cod);
	  
	if (cod == 1) {
		printf("\nSua proced�ncia � sul. \n");
	}
	else if (cod == 2) {
		printf("\nSua proced�ncia � norte. \n");
	}
	else if (cod == 3) {
		printf("\nSua proced�ncia � leste. \n");
	}
	else if (cod == 4) {
		printf("\nSua proced�ncia � oeste. \n");
	}
	else if (cod == 5 || cod == 6 ) {
		printf("\nSua proced�ncia � nordeste. \n");
	}
	else if (cod == 7 || cod == 8 || cod == 9) {
		printf("\nSua proced�ncia � sudeste. \n");
	}
	else if (cod >= 10 && cod <= 20 ) {
		printf("\nSua proced�ncia � centro-oeste. \n");
	}
	else if (cod >= 21 &&  cod <= 30 ) {
		printf("\nSua proced�ncia � nordeste. \n");
	}
	else {
		printf("\nIvalido. \n");
	}
	return 0;
}
