#include <stdio.h>
#include <locale.h>

/*Fa�a um programa que receba dois n�meros e mostre o menor.*/

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num1, num2;
	printf("\n Digite um n�mero: \n");
	scanf("%d",&num1);
	printf("\n Digite um segundo n�mero: \n");
	scanf("%d", &num2);	
	
	if (num1 < num2 ) {
		printf("\n O n�mero menor �: \n %.2d", num1);
	}
	else if (num2 < num1) {
		printf(" \n O n�mero menor �: \n %.2d", num2);
	}
	return 0;
} 
