//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o de vari�veis
int nasc,ano,idade,idade_futura,ano_futuro;

// declara��o da fun��o prinipal
main()
{
//in�cio
       printf("informe o ano atual: ");
       scanf("%i", &ano);

       printf("informe o ano do seu nascimento: ");
       scanf("%i", &nasc);

       printf("informe o novo ano: ");
       scanf("%i", &ano_futuro);

//c�lculo da idade
idade = ano - nasc;
idade_futura = ano_futuro - nasc;

//sa�da de dados
printf("\nIdade = %.i\n", idade);
printf("\nIdade_futura = %.i\n", idade_futura);

      system("PAUSE");
     }
