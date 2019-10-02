/*Elaborar um algoritmo para receber o código, valor e a quantidade
de cada produto de uma lista de compras e mostrar o valor 
total da lista de compras. */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //declaração para usar a funçãol getche()
#include <ctype.h> //declaração para usar a função toupper()
//touppper() - converte caractere em maiúsculo. 

//declaração das variáveis
int codigo, quant;
float valor, total=0;
char resposta = 'S';

//declaração da função principal
main()
{
	//estrutura de repetição para entrada de dados
	while(toupper(resposta)=='S')
	{
		printf("Informe o codigo do produto: ");
		scanf("%i", &codigo);
		printf("\nInforme a quantidade do produto: ");
		scanf("%i", &quant);
		printf("Informe o valor do produto: ");
		scanf("%f", &valor);
		total+=valor*quant;
		printf("\nOutro produto <S/N>: ");
		resposta=getche();
	}
	printf("\nValor total da lista = R$ %.2f", total);
	system("pause");
}

