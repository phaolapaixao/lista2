#include <stdio.h>
#include <locale.h>

/*Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7.*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float n1, n2, n3, n4, media;
	
	printf("\nDigite a primeira nota: \n");
	scanf("%f", n1);
	
	printf("\nDigite a segunda no: \n");
	scanf("%f\n",&n2); 
	
	printf("\nDigite a terceira nota: \n");
	scanf("%f\n",&n3); 
	
	printf("\nDigite a quarta nota: \n");
	scanf("%f\n",&n4); 
	
	media = (n1 + n2 + n3 + n4) / 4;
	
	if (media >= 7.0) {
		printf("Parabéns, você está aprovado!!!");
	}else {
		printf("Sinto muito, você está reprovado.");
	}	
	return 0;
}
