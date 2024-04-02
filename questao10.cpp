#include <stdio.h>
#include <locale.h>

/*O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distri-
buidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a

seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.

CusTo dE FáBriCA % do dis Tri Buidor % dos iMPosTos
Até R$ 12.000,00 5 isento
Entre R$ 12.000,00 e R$ 25.000,00 10 15
Acima de R$ 25.000,00 15 20*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float custoF, distr, impostos;
	
	printf("\nDigite o custo de fabrica do veículo: \n R$");
	scanf("%f",&custoF);

	
	if (custoF < 12000) {
			distr = custoF * 0.05;
		printf("\nO preço dísponivel para o consumidor é: %.2f R$ \n ", distr + custoF);
	}
	else if ( custoF >= 12000 && custoF <= 25000) {
		distr= custoF * 0.10; 
		impostos =custoF * 0.15;
		printf("\nO preço dísponivel para o consumidor é: %.2f R$ \n", distr + custoF + impostos);
	}
	else if (  custoF > 25000) {
		distr = custoF * 0.15; 
		impostos = custoF * 0.20;
		printf("\nO salário reajustado é: %.2f R$ \n", distr + custoF + impostos);
}
	return 0;
}
