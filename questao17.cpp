#include <stdio.h>
#include <locale.h>

/* 17. Fa�a um programa que verifique a validade de uma senha fornecida pelo usu�rio. A senha � 4531. O
programa deve mostrar uma mensagem de permiss�o de acesso ou n�o.*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int senha;
	
	printf("Sua senha tem 4 d�gitos. \n");
	
	printf("\nDigite sua senha: \n");
	scanf("%d", &senha);
	
	if (senha == 4531) {
		printf("\nPermiss�o para acesso.\n");
	}
	else {
		printf("\nAcesso negado, tente novamente.\n");
	}
	return 0;
}
