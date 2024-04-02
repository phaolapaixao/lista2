#include <stdio.h>
#include <locale.h>

/* Faça um programa que receba:
¦¦ o código do produto comprado; e
¦¦ a quantidade comprada do produto.
Calcule e mostre:
¦¦ o preço unitário do produto comprado, seguindo a Tabela I;
¦¦ o preço total da nota;
¦¦ o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
¦¦ o preço final da nota depois do desconto.*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int cod, quant, preco, desconto, total;
	
	printf("\n Digite o código do produto: \n");
	scanf("%d",&cod);

    printf("\n Digite a quantidade comprada do produto: \n");
	scanf("%d",&quant);
	
	if(cod >=1 && cod <=10) {
		preco = 10;
		printf("O preço unitário é:\n %.2d",preco);
		total = quant * preco; 
	    printf("O preço total da nota é:\n %.2d", total);
    }
	else if(cod >= 11 && cod <=20) {
		preco = 15;
		printf("\nO preço unitátio é:\n %.2d", preco);
		total = quant *  preco; 
	    printf("\nO preço total da nota é:\n  %.2d", total);	
	}
	else if(cod >= 21 && cod <=30) {
		preco = 20;
		printf("\nO preço unitátio é:\n %.2d", preco);
		total = quant *  preco; 
	    printf("\nO preço total da nota é:\n %.2d", total);	
	}
	else if(cod >= 31 && cod <=40) {
		preco = 40;
		printf("\nO preço unitátio é:\n %.2d", preco);
		total = quant *  preco; 
	    printf("\nO preço total da nota é:\n %.2d", total);	
	}
	
	
	if (quant <= 250) {
		desconto = total * 0.05;
		printf("\nSeu desconto é de R$:\n %.2d",desconto );
		printf("\nO preço final da compra é:\n %.2d", total - desconto);
	}
	
	else if (quant >= 250 && quant <= 500 ) {
	desconto = total * 0.10;
	printf("\nSeu desconto é de R$: \n %.2d ",desconto );
	printf("\nO preço final da compra é:\n %.2d", total - desconto);
	}
	
	else if (quant > 500) {
	desconto = total * 0.15;
	printf("\nSeu desconto é de R$:\n %.2d",desconto );
	printf("\nO preço final da compra é:\n %.2d", total - desconto);
}
	return 0;
}
