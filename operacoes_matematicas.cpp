#include<stdio.h>  //declara��o de bibliotecas
#include<stdlib.h>
#include<conio.h>

//declara��o de vari�veis

float num1,num2,resultado;
int opcao;


//declara��o da fun��o principal
main(){
	
	printf("Selecione:\n1 multiplicacao\n2 divisao\n3 soma\n4 subtracao\n");
	opcao=getche();
	printf("\ndigite o primeiro numero:");
	scanf("%f",& num1);
	printf("\ndigite o segundo numero:");
	scanf("%f",& num2);
	
	
	//op��o de sele��o
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
	
	printf("\nO resultado da operacao e %.2f",resultado);}//impress�o dos resultados
	
	
	system("pause>>null");
}
