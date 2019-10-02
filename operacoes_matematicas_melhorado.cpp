//declaração de bibliotecas:
#include<stdio.h>          
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>

main(){ // declaração de função principal


float v1,v2,resultado; // declaração de variáveis
int a;

// exibição de menssagens informativas:
	printf("calculo de operacoes matematicas basicas\n");
	printf("1 para adicao, "); 
	printf("2 para subtracao, "); 
	printf("3 para multiplicacao, ");
	printf("4 para divisao\n");

	printf("\nescolha a opcao desejada: ");
	a - getch();// menssagem acompanhada de função para  entrada do tipo de operação matemática 

	printf("\ninforme o primeiro numero: ");
	scanf("%f",& v1);//menssagem acompanhada da primeira entrada de dados


	printf("\ninforme o segundo numero: ");
	scanf("%f",& v2);// menssagem acompanhada da segunda entrada de dados


switch (a)// estrutura do menu baseado em condições ou  escolhas
{
	case 1: resultado = v1+v2;
	break;//primeiro caso ou condição(soma)
	
	case 2: resultado = v1-v2;
	break;//segundo caso ou condição(subtração)
	
	case 3: resultado = v1*v2;
	break;//terceiro caso ou condição(multiplicação)
	
	case 4: resultado = v1/v2;
	break;//quarto caso ou condição(divisão)
}
	printf("\nO resultado da operacao matematica e: %.f\n", resultado);
	// menssagem exibindo o resultado da operação definida pelo usuário
	
system("pause");
}// encerramento do programa

