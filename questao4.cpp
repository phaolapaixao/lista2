/*Faça um programa que receba três números e mostre o maior.*/

#include <stdio.h>
#include <locale.h>


int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num1, num2, num3;
	
	printf("\nDigite um número: \n");
	scanf("%d",&num1);
	
	printf("\nDigite um segundo número: \n");
	scanf("%d", &num2);	
	
	printf("\nDigite um terceiro número: \n");
	scanf("%d", &num3);	
	
	if (num1 > num2 && num1 > num3) {
		printf("\n O número maior é: \n %.2d", num1);
	}
	else if (num2 > num1 && num2 > num3) {
		printf("\n O número maior é: \n %.2d", num2);
	}
	else if (num3 > num1 && num3 > num2) {
		printf("\n O número maior é: \n %.2d", num3);
	}
	
	return 0;
} 
