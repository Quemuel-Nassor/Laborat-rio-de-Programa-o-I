//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração de variáveis
float imc,massa,altura,h2;

//declaração da função principal
main()
{
//início
  printf("informe seu peso: ");
  scanf("%f", &massa);

  printf("informe sua altura: ");
  scanf("%f", &altura);

//cálculo de imc
   h2 = (altura * altura);
   imc = (massa / h2);

//saída de dados
  printf("\nImc = %.2f\n", imc);
     system("pause");
}
