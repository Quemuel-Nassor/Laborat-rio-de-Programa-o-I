/*pow() exponenciação
sqrt() raiz quadrada   /biblioteca: math.h
 exemplos  das funções pow() e sqrt()*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int numero;

main(){
	printf("informe um numero");
	scanf("%i",&numero);
	
	printf("\nraiz quadrada %.2f", sqrt(numero));
	printf("\nnumero ao quadarado %.2f", pow(numero,2));
	printf("\nnumero ao cubo %.2f\n ", pow(numero,3));
		
		system("pause");
}
