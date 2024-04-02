#include <stdio.h>
#include <locale.h>

/*Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
Para idade inferior a 5, deverá mostrar mensagem.

CATEgoriA idAdE
Infantil 5 a 7
Juvenil 8 a 10
Adolescente 11 a 15
Adulto 16 a 30
Sênior Acima de 30 */

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int idade;
		
	printf("\nDigite sua idade: \n");
	scanf("%d", &idade);

	
	if(idade < 5) {
		printf("\n Por enquanto, está indisponível para essa categoria. \n");
	}
	else if(idade >= 5 && idade <=7) {
		printf("\nInfantil. \n");
	}
	else if(idade >= 8 && idade <=10) {
		printf("\nJuvenil. \n");
	}
	else if(idade >= 11 && idade <=15) {
		printf("\nAdolescente. \n");
	}
	else if(idade >= 16 && idade <=30) {
		printf("\nAdulto. \n");
	}
	else if(idade > 30) {
		printf("\nsênior. \n");
	}
	return 0;
}



