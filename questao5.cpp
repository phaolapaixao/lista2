/* Fa�a um programa que receba dois n�meros e execute as opera��es listadas a seguir, de acordo com a escolha
do usu�rio.

EsCoLhA do usu�ri o oPErA��o
1 M�dia entre os n�meros digitados
2 Diferen�a do maior pelo menor
3 Produto entre os n�meros digitados
4 Divis�o do primeiro pelo segundo

Se a op��o digitada for inv�lida, mostre uma mensagem de erro e termine a execu��o do programa.
Lembre-se de que, na opera��o 4, o segundo n�mero deve ser diferente de zero.*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num1, num2, opcao;
	
	printf("\nDigite um n�mero:\n ");
	scanf("%d",&num1);
	
	printf("\nDigite outro n�mero:\n ");
	scanf("%d",&num2);
	
	printf("\nAs op��es s�o: \n 1 Para descobrir a m�dia \n 2 Para descobrir a diferen�a \n 3 Para descobrir o produto dos n�meros \n 4 Para descobrir a divis�o entre os n�meros\n");
	printf("\nDigite uma op��o:\n ");
	scanf("%d",&opcao);
	
	
	
	if (opcao == 1) {
		printf("\nA m�dia entre os n�meros digitados �: \n %.2d", (num1 + num2)/ 2);
	}
	else if (opcao == 2) {
		if (num1 > num2 ) {
		printf("\nA diferen�a do maior pelo menor �: \n %.2d", num1 - num2);
	}
	else if (num2 > num1) {
		printf("\nA diferen�a do maior pelo menor �: \n %.2d", num2 - num1);
	}

	}
	else if (opcao == 3) {
		printf("\nO produto entre os n�meros digitados �: \n %.2d", num1 * num2);
	}
	else if (opcao == 4) {
		printf("\nA divis�o do primeiro pelo segundo �: \n %.2d", num1 / num2);
	}
	else {
		printf("\nOp��o invalida\n");
	}
	return 0;
}
