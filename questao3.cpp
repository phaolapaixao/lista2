#include <stdio.h>
#include <locale.h>

/*Faça um programa que receba dois números e mostre o menor.*/

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num1, num2;
	printf("\n Digite um número: \n");
	scanf("%d",&num1);
	printf("\n Digite um segundo número: \n");
	scanf("%d", &num2);	
	
	if (num1 < num2 ) {
		printf("\n O número menor é: \n %.2d", num1);
	}
	else if (num2 < num1) {
		printf(" \n O número menor é: \n %.2d", num2);
	}
	return 0;
} 
