/* Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num1, num2;
	char opcao;
	
	printf("\nDigite um número:\n ");
	scanf("%d",&num1);
	
	printf("\nDigite outro número:\n ");
	scanf("%d",&num2);
	
	printf("\nAs opções são: \n a Elevar o primeiro número ao segundo número. \n b Raiz quadrada de cada um dos números\n c Raiz cúbica de cada um dos números\n");
	
	printf("\nDigite uma opção:\n ");
	scanf(" %c",&opcao);
	
	
	if (opcao == 'a' ) {
		printf("\nO primeiro número elevado ao segundo número é: \n %.2f", pow(num1, num2));
	}
	else if (opcao == 'b' ) {
		printf("\nRaiz quadrada de cada um dos números é: \n %.2f \n %.2f", sqrt (num1) ,sqrt (num2));
	}
	else if (opcao == 'c' ) {
		printf("\nA Raiz cúbica de cada um dos números é: \n %.2f \n %.2f", pow(num1, 1.0 / 3.0), pow(num2, 1.0 / 3.0));
	}
	else {
		printf("\nOpção invalida\n");
	}
	return 0;
}
