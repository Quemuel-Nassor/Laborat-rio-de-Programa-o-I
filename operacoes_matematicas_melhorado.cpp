//declara��o de bibliotecas:
#include<stdio.h>          
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>

main(){ // declara��o de fun��o principal


float v1,v2,resultado; // declara��o de vari�veis
int a;

// exibi��o de menssagens informativas:
	printf("calculo de operacoes matematicas basicas\n");
	printf("1 para adicao, "); 
	printf("2 para subtracao, "); 
	printf("3 para multiplicacao, ");
	printf("4 para divisao\n");

	printf("\nescolha a opcao desejada: ");
	a - getch();// menssagem acompanhada de fun��o para  entrada do tipo de opera��o matem�tica 

	printf("\ninforme o primeiro numero: ");
	scanf("%f",& v1);//menssagem acompanhada da primeira entrada de dados


	printf("\ninforme o segundo numero: ");
	scanf("%f",& v2);// menssagem acompanhada da segunda entrada de dados


switch (a)// estrutura do menu baseado em condi��es ou  escolhas
{
	case 1: resultado = v1+v2;
	break;//primeiro caso ou condi��o(soma)
	
	case 2: resultado = v1-v2;
	break;//segundo caso ou condi��o(subtra��o)
	
	case 3: resultado = v1*v2;
	break;//terceiro caso ou condi��o(multiplica��o)
	
	case 4: resultado = v1/v2;
	break;//quarto caso ou condi��o(divis�o)
}
	printf("\nO resultado da operacao matematica e: %.f\n", resultado);
	// menssagem exibindo o resultado da opera��o definida pelo usu�rio
	
system("pause");
}// encerramento do programa

