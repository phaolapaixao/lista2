#include <stdio.h>
#include <locale.h>

/* Fa�a um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou n�o..*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int idade;
	
	
	printf("\nDigite sua idade: \n");
	scanf("%d", &idade);
	
	if (idade >= 18) {
		printf("\nVoc� � de maior.\n");
	}
	else {
		printf("\nVoc� n�o � de maior.\n");
	}
	return 0;
}
