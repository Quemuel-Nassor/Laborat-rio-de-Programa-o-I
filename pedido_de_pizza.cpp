/*Algoritmo para gerenciar o pedido de pizzas. O usu�rio poder�
escolhar n pizzas e no final deve-se informar o total das pizzas
solicitadas. As op��es s�o: 1 - Mu�arela R$ 25,00, 2 - Frango Catupiry
R$ 30,00, 3 - Marguerita R$ 28,00 e 4 - Portuguesa R$ 35,00 */

//declara��o das bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

//declara��o das vari�veis
int pizza;
float total=0;
char controle;

//declara��o da fun��o principal
main()
{
	//estrutura de repeti��o
	do
	{
		printf("Escolha a pizza: \n1 - Mu�arela R$ 20,00 \n2 - 
		Frango catupiry R$ 25,00\n3 - Marguerita R$ 28,00 \n4 - 
		Portuguesa R$ 30,00");
		scanf("%i", &pizza);
		
		//estrutura condicional para totalizar
		switch(pizza)
		{
			case 1 : total+=20; //total=total+20;
			         break;
			case 2 : total+=25;
			         break;
			case 3 : total+=28;
			         break;
			case 4 : total+=30;
			         break;
		    default : printf("\nPizza nao cadastrada...");
				      system("pause");	
		}
		printf("Outra pizza <S/N>");
		controle = getche();
	} while(toupper(controle)=='S');
	printf("\nTotal a pagar = R$ %.2f", total);
	system("pause");
}
