#include <stdio.h>
#include <locale.h>

/* 24. Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário)
e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de re-
frigeração).
Calcule e mostre:
¦¦ O valor do aumento, usando as regras que se seguem:

¦¦ O valor do imposto, usando as regras a seguir.

04 asc0711_CAP04 BR.indd 93 4/26/12 10:44 AM

94 | Fundamentos da programação de computadores

O produto que preencher pelo menos um dos seguintes requisitos pagará imposto equivalente a 5%
do preço; caso contrário, pagará 8%. Os requisitos são:
Categoria: 2
Situação: R
¦¦ O novo preço, ou seja, o preço mais aumento menos imposto.
¦¦ A classificação, usando as regras a seguir.*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float preco, aumento, imposto, novopreco;
	int categoria;
	char situacao;
	
	printf("\nDigite o preço R$: \n");
	scanf("%f",&preco);
	
	
	printf("\nSituação\n 1 Limpeza\n 2 alimentação\n 3 vestuario\n");
	
	printf("\nEscolha uma categoria: \n");
	scanf("%d", &categoria);
	
	printf("\nR Produtos que necessitam de refrigeração; \nN Produtos que não necessitam de refrigeração.\n");
	
	printf("\nEscolha a situação: \n");
	scanf(" %c", &situacao);
	
	printf("\nValor do aumento: ");
	
	if(preco <= 25) {
		if(categoria == 1) {
			aumento = preco * 0.05;
			printf("\nO aumento será de R$: \n %.2f\n", aumento);
  	    }

    else if(categoria == 2) {
	        aumento = preco * 0.08;
	        printf("\nO aumento será de R$: \n %.2f\n", aumento);
   }

   
	else if(categoria == 3) {
			aumento = preco * 0.10;
			printf("\nO aumento será de R$: \n %.2f\n", aumento);
   }
}
    
	if(preco > 25) {
		if(categoria == 1){
			aumento = preco * 0.12;
			printf("\nO aumento será de R$: \n %.2f\n", aumento);
		}
	
	else if(categoria == 2){
			aumento = preco * 0.15;
			printf("\nO aumento será de R$: \n %.2f\n", aumento);
		}
	
	else if(categoria == 3){
			aumento = preco * 0.18;
			printf("\nO aumento será de R$: \n %.2f\n", aumento);
		}
	}
	
printf("\nValor do imposto: ");
if (categoria == 2) {
	if(situacao == 'R') {
	imposto = preco * 0.05;
	printf("\nO valor do imposto é: \n %.2f\n", imposto);
}
}
else {
	imposto = preco * 0.08;
	printf("\nO valor do imposto é: \n %.2f\n", imposto);
}
printf("\nNovo preço: ");
novopreco = (preco + aumento) - imposto;
printf("\nO novo preço é R$: \n %.2f\n", novopreco);

printf("\nClassificação: ");
if(novopreco <= 50) {
	printf("\nServiço barato. \n");
}
else if(novopreco > 50 && preco < 120){
	printf("\nServiço com preço normal. \n");
}
else if(novopreco >= 120) {
	printf("\nServoço caro. \n");
}
	return 0;
}
