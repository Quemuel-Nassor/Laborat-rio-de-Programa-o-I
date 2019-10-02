#include<stdio.h>  //declaração de bibliotecas
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>

//declaração de variáveis

char controle='S';
float area,largura, altura;



//declaração da função principal
main(){

	//laço de repetição
	while (toupper(controle)=='S'){
	
		system("cls");
		printf("\n\n\n\n\n                          CALCULADORA DE AREA  \n\n\n\n\n");
		
		printf("\nInforme a largura:");
		scanf("%f",& largura);
	
		printf("\nInforme a altura:");
		scanf("%f",& altura);
	
		area = largura*altura;//calculo
	
		printf("\na area calculada e %f",area);


printf("\ndeseja calcular uma nova area?<s\n>");//continuação ou encerramento
controle=getche();}
	
	system("pause>>null");
}
