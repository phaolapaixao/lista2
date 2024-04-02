#include <stdio.h>
#include <locale.h>

/* Fa�a um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizan-
do as seguintes f�rmulas (onde h � a altura):

�� para homens: (72.7 * h) � 58.
�� para mulheres: (62.1 * h) � 44.7.*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float altura;
	char sexo;
	
	printf("\nDigite sua altura: \n");
	scanf("%f", &altura);
	
	printf("\nDigite F para sexo feminino e M para sexo masculino.\n");
	
	printf("\nQual � o seu sexo? \n");
	scanf(" %c", &sexo);
	
	if(sexo == 'F') {
		printf("\nSeu peso ideal �: %.2f \n", (62.1 * altura) - 44.7);
	}
	else if(sexo == 'M') {
		printf("\nSeu peso ideal �: %.2f \n", (72. * altura) - 58);
	}
	else {
		printf("\nInvalido, verifique se n�o digitou um caractere errado ou minusculo. \n");
	}
	return 0;
}

