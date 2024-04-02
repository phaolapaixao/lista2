#include <stdio.h>
#include <locale.h>

/* Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre em qual grupo de risco essa pessoa se encaixa.

IDADE

PESO

Até 60 Entre 60 e 90 (inclusive) Acima de 90
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
		printf("\nSua classificação de risco é 9. \n ");
	}
	else if(idade < 20 && peso >60 && peso <=90) {
		printf("\nSua classificação de risco é 8. \n ");
	}
	else if(idade < 20 && peso > 90) {
		printf("\nSua classificação de risco é 7. \n ");
	}
	
	
	if(idade >= 20 && idade <=50 && peso <=60) {
		printf("\nSua classificação de risco é 6. \n ");
    }
    else if(idade >= 20 && idade <= 50 && peso >60 && peso <=90) {
		printf("\nSua classificação de risco é 5. \n ");
	}
	else if(idade < 20 && idade <= 50 && peso > 90) {
		printf("\nSua classificação de risco é 4. \n ");
	}
		
		
	if(idade > 50 && peso <=60) {
	printf("\nSua classificação de risco é 3. \n ");
    }
    else if(idade > 50 && idade <= 50 && peso >60 && peso <=90) {
		printf("\nSua classificação de risco é 2. \n ");
    }
    else if(idade > 50 && peso > 90) {
		printf("\nSua classificação de risco é 1. \n ");
	}
	
	return 0;
}
