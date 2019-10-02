/*Elaborar um algoritmo para receber o c�digo, valor e a quantidade
de cada produto de uma lista de compras e mostrar o valor 
total da lista de compras. */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //declara��o para usar a fun��ol getche()
#include <ctype.h> //declara��o para usar a fun��o toupper()
//touppper() - converte caractere em mai�sculo. 

//declara��o das vari�veis
int codigo, quant;
float valor, total=0;
char resposta = 'S';

//declara��o da fun��o principal
main()
{
	//estrutura de repeti��o para entrada de dados
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

