//declara��o de blibliotecas
#include<stdio.h>
#include<stdlib.h>

//declara��o de vari�veis
float preco_fabrica,vlr_impostos,porcentagem_revenda,preco_final;
char nome_carro[41];

//declara��o da fun��o principal
main()
{
//in�cio
    printf("informe o preco de fabrica: ");
    scanf("%f", &preco_fabrica);

     printf("informe o nome do carro: ");
     fflush(stdin);// limpar o buffer de entrada
     gets(nome_carro); // recebe uma string por meio do teclado

//c�lculos
     vlr_impostos = ((preco_fabrica * 45) /100);
     porcentagem_revenda = ((preco_fabrica * 28) /100);
     preco_final = preco_fabrica + vlr_impostos + porcentagem_revenda;

//sa�da de dados
     printf("\nPreco_final = %.0f\n", preco_final);
     printf("\nO nome do carro e: = %s\n", nome_carro);

     system("pause");
     }















