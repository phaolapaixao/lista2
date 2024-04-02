#include <stdio.h>
#include <locale.h>

/* Fa�a um programa que receba:
�� o c�digo do produto comprado; e
�� a quantidade comprada do produto.
Calcule e mostre:
�� o pre�o unit�rio do produto comprado, seguindo a Tabela I;
�� o pre�o total da nota;
�� o valor do desconto, seguindo a Tabela II e aplicado sobre o pre�o total da nota; e
�� o pre�o final da nota depois do desconto.*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int cod, quant, preco, desconto, total;
	
	printf("\n Digite o c�digo do produto: \n");
	scanf("%d",&cod);

    printf("\n Digite a quantidade comprada do produto: \n");
	scanf("%d",&quant);
	
	if(cod >=1 && cod <=10) {
		preco = 10;
		printf("O pre�o unit�rio �:\n %.2d",preco);
		total = quant * preco; 
	    printf("O pre�o total da nota �:\n %.2d", total);
    }
	else if(cod >= 11 && cod <=20) {
		preco = 15;
		printf("\nO pre�o unit�tio �:\n %.2d", preco);
		total = quant *  preco; 
	    printf("\nO pre�o total da nota �:\n  %.2d", total);	
	}
	else if(cod >= 21 && cod <=30) {
		preco = 20;
		printf("\nO pre�o unit�tio �:\n %.2d", preco);
		total = quant *  preco; 
	    printf("\nO pre�o total da nota �:\n %.2d", total);	
	}
	else if(cod >= 31 && cod <=40) {
		preco = 40;
		printf("\nO pre�o unit�tio �:\n %.2d", preco);
		total = quant *  preco; 
	    printf("\nO pre�o total da nota �:\n %.2d", total);	
	}
	
	
	if (quant <= 250) {
		desconto = total * 0.05;
		printf("\nSeu desconto � de R$:\n %.2d",desconto );
		printf("\nO pre�o final da compra �:\n %.2d", total - desconto);
	}
	
	else if (quant >= 250 && quant <= 500 ) {
	desconto = total * 0.10;
	printf("\nSeu desconto � de R$: \n %.2d ",desconto );
	printf("\nO pre�o final da compra �:\n %.2d", total - desconto);
	}
	
	else if (quant > 500) {
	desconto = total * 0.15;
	printf("\nSeu desconto � de R$:\n %.2d",desconto );
	printf("\nO pre�o final da compra �:\n %.2d", total - desconto);
}
	return 0;
}
