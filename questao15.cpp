#include <stdio.h>
#include <locale.h>

/* Uma ag�ncia banc�ria possui dois tipos de investimentos, conforme o quadro a seguir. Fa�a um pro-
grama que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido ap�s um m�s de

investimento, de acordo com o tipo de investimento.

TiPo dEsCri ��o rENdiMENTo MENsAL
1 Poupan�a 3%
2 Fundos de renda fixa 4% */ 

int main (){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int tipo, investimento;
	float valor;
	
	printf("\nOs tipos de investimentos s�o: \n 1 Poupan�a 3 por cento.\n 2 Fundos de renda fixa 4 por cento.");
	printf("\nDigite o tipo de investimento: \n");
	scanf("%d",&tipo);
	
	printf("\nDigite o valor: \n");
	scanf("%f",&valor);
	
	if (tipo == 1) {
		investimento = valor * 0.03;
		printf("\n Ovalor corrigido ap�s um m�s de invesmento �: %.2f \n", valor + investimento);

	}
	else if (tipo == 2) {
		investimento = valor * 0.04;
		printf("\n Ovalor corrigido ap�s um m�s de invesmento �: %.2f \n", valor + investimento);

	}
	return 0;
}
