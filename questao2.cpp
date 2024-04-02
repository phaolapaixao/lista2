#include <stdio.h>
#include <locale.h>

/*Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir:*/

int main () {
 	setlocale(LC_ALL,"Portuguese_Brazil");
 	float media, n1,n2;
 	
 	printf("\nDigite a primeira nota:\n ");
 	scanf("%f", &n1);
 	
 	printf("\nDigite a segunda nota:\n ");
 	scanf("%f", &n2);
 	
 	media = (n1 + n2) / 2;
 	
 	printf("\nSua média é: \n %.2f", media);
 	
 	if (media >= 7.0 && media <= 10.0 ) {    
 		printf("\n \nAPROVADO!!! \n");
 		
 	} 
	else if (media >=0.0 && media <3.0) {  
 		printf("\n \nREPROVADO. \n");
     }
	else if (media >=3 && media <7.0) {
	 	printf("\n \nEXAME.\n");
	 }
	 
return 0;

}
