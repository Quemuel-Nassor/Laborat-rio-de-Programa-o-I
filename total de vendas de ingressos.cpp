/*Algoritmo para receber o valor do ingresso de um show e totalizar
a venda de n ingressos, contudo para cliente com idade <= 18 e
idade >= 65 há 25% de desconto no valor do ingresso */

//declaração das bibliotecas
#include <stdio.h> 
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

//declaração das variáveis
float vlringresso, total=0;
int idade;
char controle;

//declaração da função principal
main()
{
	//entrada de dados - valor do ingresso, apenas uma vez
	printf("Informe o valor do ingresso");
	scanf("%f", &vlringresso);
	
	//estrutura de repetição para entrada de dados
	do
	{
		system("cls");
		printf("Informe a idade do cliente: ");
		scanf("%i", &idade);
		
		//verificar a idade
		if(idade <= 18 || idade >= 65)
			total+= vlringresso*0.75;
		else
			total+= vlringresso;	
		
		//controle a entrutura de repetição
		printf("\nOutra venda <s/n>:");
		controle = getche();
	} while (toupper(controle)=='S');
	
	//saída de dados
	printf("\nTotal de venda = %.2f", total);
	system("pause");
}
