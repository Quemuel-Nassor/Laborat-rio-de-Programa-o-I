#include<stdio.h>  //declara��o de bibliotecas
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>

//declara��o de vari�veis

char controle='S';
float area,largura, altura;



//declara��o da fun��o principal
main(){

	//la�o de repeti��o
	while (toupper(controle)=='S'){
	
		system("cls");
		printf("\n\n\n\n\n                          CALCULADORA DE AREA  \n\n\n\n\n");
		
		printf("\nInforme a largura:");
		scanf("%f",& largura);
	
		printf("\nInforme a altura:");
		scanf("%f",& altura);
	
		area = largura*altura;//calculo
	
		printf("\na area calculada e %f",area);


printf("\ndeseja calcular uma nova area?<s\n>");//continua��o ou encerramento
controle=getche();}
	
	system("pause>>null");
}
