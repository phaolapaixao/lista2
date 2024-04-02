/* Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário.

EsCoLhA do usuári o oPErAção
1 Média entre os números digitados
2 Diferença do maior pelo menor
3 Produto entre os números digitados
4 Divisão do primeiro pelo segundo

Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa.
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num1, num2, opcao;
	
	printf("\nDigite um número:\n ");
	scanf("%d",&num1);
	
	printf("\nDigite outro número:\n ");
	scanf("%d",&num2);
	
	printf("\nAs opções são: \n 1 Para descobrir a média \n 2 Para descobrir a diferença \n 3 Para descobrir o produto dos números \n 4 Para descobrir a divisão entre os números\n");
	printf("\nDigite uma opção:\n ");
	scanf("%d",&opcao);
	
	
	
	if (opcao == 1) {
		printf("\nA média entre os números digitados é: \n %.2d", (num1 + num2)/ 2);
	}
	else if (opcao == 2) {
		if (num1 > num2 ) {
		printf("\nA diferença do maior pelo menor é: \n %.2d", num1 - num2);
	}
	else if (num2 > num1) {
		printf("\nA diferença do maior pelo menor é: \n %.2d", num2 - num1);
	}

	}
	else if (opcao == 3) {
		printf("\nO produto entre os números digitados é: \n %.2d", num1 * num2);
	}
	else if (opcao == 4) {
		printf("\nA divisão do primeiro pelo segundo é: \n %.2d", num1 / num2);
	}
	else {
		printf("\nOpção invalida\n");
	}
	return 0;
}
