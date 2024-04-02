#include <stdio.h>
#include <locale.h>

/* 24. Fa�a um programa que receba o pre�o, a categoria (1 � limpeza; 2 � alimenta��o; ou 3 � vestu�rio)
e a situa��o (R � produtos que necessitam de refrigera��o; e N � produtos que n�o necessitam de re-
frigera��o).
Calcule e mostre:
�� O valor do aumento, usando as regras que se seguem:

�� O valor do imposto, usando as regras a seguir.

04 asc0711_CAP04 BR.indd 93 4/26/12 10:44 AM

94 | Fundamentos da programa��o de computadores

O produto que preencher pelo menos um dos seguintes requisitos pagar� imposto equivalente a 5%
do pre�o; caso contr�rio, pagar� 8%. Os requisitos s�o:
Categoria: 2
Situa��o: R
�� O novo pre�o, ou seja, o pre�o mais aumento menos imposto.
�� A classifica��o, usando as regras a seguir.*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float preco, aumento, imposto, novopreco;
	int categoria;
	char situacao;
	
	printf("\nDigite o pre�o R$: \n");
	scanf("%f",&preco);
	
	
	printf("\nSitua��o\n 1 Limpeza\n 2 alimenta��o\n 3 vestuario\n");
	
	printf("\nEscolha uma categoria: \n");
	scanf("%d", &categoria);
	
	printf("\nR Produtos que necessitam de refrigera��o; \nN Produtos que n�o necessitam de refrigera��o.\n");
	
	printf("\nEscolha a situa��o: \n");
	scanf(" %c", &situacao);
	
	printf("\nValor do aumento: ");
	
	if(preco <= 25) {
		if(categoria == 1) {
			aumento = preco * 0.05;
			printf("\nO aumento ser� de R$: \n %.2f\n", aumento);
  	    }

    else if(categoria == 2) {
	        aumento = preco * 0.08;
	        printf("\nO aumento ser� de R$: \n %.2f\n", aumento);
   }

   
	else if(categoria == 3) {
			aumento = preco * 0.10;
			printf("\nO aumento ser� de R$: \n %.2f\n", aumento);
   }
}
    
	if(preco > 25) {
		if(categoria == 1){
			aumento = preco * 0.12;
			printf("\nO aumento ser� de R$: \n %.2f\n", aumento);
		}
	
	else if(categoria == 2){
			aumento = preco * 0.15;
			printf("\nO aumento ser� de R$: \n %.2f\n", aumento);
		}
	
	else if(categoria == 3){
			aumento = preco * 0.18;
			printf("\nO aumento ser� de R$: \n %.2f\n", aumento);
		}
	}
	
printf("\nValor do imposto: ");
if (categoria == 2) {
	if(situacao == 'R') {
	imposto = preco * 0.05;
	printf("\nO valor do imposto �: \n %.2f\n", imposto);
}
}
else {
	imposto = preco * 0.08;
	printf("\nO valor do imposto �: \n %.2f\n", imposto);
}
printf("\nNovo pre�o: ");
novopreco = (preco + aumento) - imposto;
printf("\nO novo pre�o � R$: \n %.2f\n", novopreco);

printf("\nClassifica��o: ");
if(novopreco <= 50) {
	printf("\nServi�o barato. \n");
}
else if(novopreco > 50 && preco < 120){
	printf("\nServi�o com pre�o normal. \n");
}
else if(novopreco >= 120) {
	printf("\nServo�o caro. \n");
}
	return 0;
}
