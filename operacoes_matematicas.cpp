#include<stdio.h>  //declaração de bibliotecas
#include<stdlib.h>
#include<conio.h>

//declaração de variáveis

float num1,num2,resultado;
int opcao;


//declaração da função principal
main(){
	
	printf("Selecione:\n1 multiplicacao\n2 divisao\n3 soma\n4 subtracao\n");
	opcao=getche();
	printf("\ndigite o primeiro numero:");
	scanf("%f",& num1);
	printf("\ndigite o segundo numero:");
	scanf("%f",& num2);
	
	
	//opção de seleção
	switch (opcao){
		
		case 1:
				resultado = (num1*num2);
			break;
			
		case 2:
				resultado = (num1/num2);
			break;
			
		case 3:
				resultado = (num1+num2);
			break;
			
		case 4:
				resultado = (num1-num2);
			break;
	
	printf("\nO resultado da operacao e %.2f",resultado);}//impressão dos resultados
	
	
	system("pause>>null");
}
