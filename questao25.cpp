#include <stdio.h>
#include <locale.h>

/*Uma empresa decidiu dar uma gratifica��o de Natal a seus funcion�rios, baseada no n�mero de horas
extras e no n�mero de horas que o funcion�rio faltou ao trabalho. O valor do pr�mio � obtido pela con-
sulta � tabela que se segue, na qual:
H = n�mero de horas extras � (2/3 * (n�mero de horas falta)) */

int main () {
	int hrsextras, hrsfaltas;
	float hrs;
	
	printf("\nDigite as horas extras: \n");
	scanf("%d",&hrsextras);
	
	printf("\nDigite as horas faltas: \n");
	scanf("%d",&hrsfaltas);
	
	hrs = (hrsextras * 60) - (2/3 * (hrsfaltas));
	
	if (hrs >= 2400) {
		printf("\nR$: 500.00");
	}
	else if (hrs > 1800 && hrs < 2400) {
	printf("\nR$: 400.00");
	}
	else if (hrs >=1200 && hrs < 1800) {
	printf("\nR$: 300.00");
	}
	else if (hrs >=600 && hrs < 1200) {
	printf("\nR$: 200.00");
	}
	else if (hrs < 600) {
	printf("\nR$: 100.00");
}
	return 0;
}
