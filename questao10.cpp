#include <stdio.h>
#include <locale.h>

/*O pre�o ao consumidor de um carro novo � a soma do custo de f�brica com a porcentagem do distri-
buidor e dos impostos, ambos aplicados ao custo de f�brica. As porcentagens encontram-se na tabela a

seguir. Fa�a um programa que receba o custo de f�brica de um carro e mostre o pre�o ao consumidor.

CusTo dE F�BriCA % do dis Tri Buidor % dos iMPosTos
At� R$ 12.000,00 5 isento
Entre R$ 12.000,00 e R$ 25.000,00 10 15
Acima de R$ 25.000,00 15 20*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float custoF, distr, impostos;
	
	printf("\nDigite o custo de fabrica do ve�culo: \n R$");
	scanf("%f",&custoF);

	
	if (custoF < 12000) {
			distr = custoF * 0.05;
		printf("\nO pre�o d�sponivel para o consumidor �: %.2f R$ \n ", distr + custoF);
	}
	else if ( custoF >= 12000 && custoF <= 25000) {
		distr= custoF * 0.10; 
		impostos =custoF * 0.15;
		printf("\nO pre�o d�sponivel para o consumidor �: %.2f R$ \n", distr + custoF + impostos);
	}
	else if (  custoF > 25000) {
		distr = custoF * 0.15; 
		impostos = custoF * 0.20;
		printf("\nO sal�rio reajustado �: %.2f R$ \n", distr + custoF + impostos);
}
	return 0;
}
