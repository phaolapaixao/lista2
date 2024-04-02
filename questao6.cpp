/* Fa�a um programa que receba dois n�meros e execute uma das opera��es listadas a seguir, de acordo com a
escolha do usu�rio. Se for digitada uma op��o inv�lida, mostre mensagem de erro e termine a execu��o do
programa. As op��es s�o:
a) O primeiro n�mero elevado ao segundo n�mero.
b) Raiz quadrada de cada um dos n�meros.
c) Raiz c�bica de cada um dos n�meros.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num1, num2;
	char opcao;
	
	printf("\nDigite um n�mero:\n ");
	scanf("%d",&num1);
	
	printf("\nDigite outro n�mero:\n ");
	scanf("%d",&num2);
	
	printf("\nAs op��es s�o: \n a Elevar o primeiro n�mero ao segundo n�mero. \n b Raiz quadrada de cada um dos n�meros\n c Raiz c�bica de cada um dos n�meros\n");
	
	printf("\nDigite uma op��o:\n ");
	scanf(" %c",&opcao);
	
	
	if (opcao == 'a' ) {
		printf("\nO primeiro n�mero elevado ao segundo n�mero �: \n %.2f", pow(num1, num2));
	}
	else if (opcao == 'b' ) {
		printf("\nRaiz quadrada de cada um dos n�meros �: \n %.2f \n %.2f", sqrt (num1) ,sqrt (num2));
	}
	else if (opcao == 'c' ) {
		printf("\nA Raiz c�bica de cada um dos n�meros �: \n %.2f \n %.2f", pow(num1, 1.0 / 3.0), pow(num2, 1.0 / 3.0));
	}
	else {
		printf("\nOp��o invalida\n");
	}
	return 0;
}
