#include <stdio.h>
#include <locale.h>

/* Fa�a um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre em qual grupo de risco essa pessoa se encaixa.

IDADE

PESO

At� 60 Entre 60 e 90 (inclusive) Acima de 90
Menores que 20 9 8 7
De 20 a 50 6 5 4
Maiores que 50 3 2 1*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float peso;
	int idade;
	
	printf("\nDigite sua idade: \n");
	scanf("%d", &idade);
	
	
	printf("\nDigite seu peso: \n");
	scanf("%f", &peso);
	
	
	if(idade < 20 && peso <=60) {
		printf("\nSua classifica��o de risco � 9. \n ");
	}
	else if(idade < 20 && peso >60 && peso <=90) {
		printf("\nSua classifica��o de risco � 8. \n ");
	}
	else if(idade < 20 && peso > 90) {
		printf("\nSua classifica��o de risco � 7. \n ");
	}
	
	
	if(idade >= 20 && idade <=50 && peso <=60) {
		printf("\nSua classifica��o de risco � 6. \n ");
    }
    else if(idade >= 20 && idade <= 50 && peso >60 && peso <=90) {
		printf("\nSua classifica��o de risco � 5. \n ");
	}
	else if(idade < 20 && idade <= 50 && peso > 90) {
		printf("\nSua classifica��o de risco � 4. \n ");
	}
		
		
	if(idade > 50 && peso <=60) {
	printf("\nSua classifica��o de risco � 3. \n ");
    }
    else if(idade > 50 && idade <= 50 && peso >60 && peso <=90) {
		printf("\nSua classifica��o de risco � 2. \n ");
    }
    else if(idade > 50 && peso > 90) {
		printf("\nSua classifica��o de risco � 1. \n ");
	}
	
	return 0;
}
