//declaração de blibliotecas
#include<stdio.h>
#include<stdlib.h>

//declaração de variáveis
float preco_fabrica,vlr_impostos,porcentagem_revenda,preco_final;
char nome_carro[41];

//declaração da função principal
main()
{
//início
    printf("informe o preco de fabrica: ");
    scanf("%f", &preco_fabrica);

     printf("informe o nome do carro: ");
     fflush(stdin);// limpar o buffer de entrada
     gets(nome_carro); // recebe uma string por meio do teclado

//cálculos
     vlr_impostos = ((preco_fabrica * 45) /100);
     porcentagem_revenda = ((preco_fabrica * 28) /100);
     preco_final = preco_fabrica + vlr_impostos + porcentagem_revenda;

//saída de dados
     printf("\nPreco_final = %.0f\n", preco_final);
     printf("\nO nome do carro e: = %s\n", nome_carro);

     system("pause");
     }















