#include<stdio.h>  //declaração de bibliotecas
#include<stdlib.h>
#include<string.h>
#include<conio.h>

//declaração de variáveis

char nome[30];
int idade,i,sexo;



//declaração da função principal
main(){
	
	printf("Informe sua idade\n");
	scanf("%i",& idade);
	
	printf("Informe seu nome completo:\n");
	scanf("%d",& nome[i]);
	
	printf("digite 1 para masculino ou 2 para feminino\n");
	scanf("%i",& sexo);
	
	if ((sexo == 2) && (idade>18)){	//condição de verificação
		printf("você %d  pode votar",nome[i]);
		
	}else if((sexo != 2) && (idade<18)){
	printf("\nVoce %d nao pode votar",nome[i]);
	}
	
	system("pause>>null");
}
