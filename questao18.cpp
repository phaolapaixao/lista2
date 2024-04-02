#include <stdio.h>
#include <locale.h>

/* Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não..*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int idade;
	
	
	printf("\nDigite sua idade: \n");
	scanf("%d", &idade);
	
	if (idade >= 18) {
		printf("\nVocê é de maior.\n");
	}
	else {
		printf("\nVocê não é de maior.\n");
	}
	return 0;
}
