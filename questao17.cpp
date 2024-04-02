#include <stdio.h>
#include <locale.h>

/* 17. Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
programa deve mostrar uma mensagem de permissão de acesso ou não.*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int senha;
	
	printf("Sua senha tem 4 dígitos. \n");
	
	printf("\nDigite sua senha: \n");
	scanf("%d", &senha);
	
	if (senha == 4531) {
		printf("\nPermissão para acesso.\n");
	}
	else {
		printf("\nAcesso negado, tente novamente.\n");
	}
	return 0;
}
