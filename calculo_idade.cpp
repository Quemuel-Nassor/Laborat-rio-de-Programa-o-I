//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração de variáveis
int nasc,ano,idade,idade_futura,ano_futuro;

// declaração da função prinipal
main()
{
//início
       printf("informe o ano atual: ");
       scanf("%i", &ano);

       printf("informe o ano do seu nascimento: ");
       scanf("%i", &nasc);

       printf("informe o novo ano: ");
       scanf("%i", &ano_futuro);

//cálculo da idade
idade = ano - nasc;
idade_futura = ano_futuro - nasc;

//saída de dados
printf("\nIdade = %.i\n", idade);
printf("\nIdade_futura = %.i\n", idade_futura);

      system("PAUSE");
     }
