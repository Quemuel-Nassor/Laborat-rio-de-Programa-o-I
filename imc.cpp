//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o de vari�veis
float imc,massa,altura,h2;

//declara��o da fun��o principal
main()
{
//in�cio
  printf("informe seu peso: ");
  scanf("%f", &massa);

  printf("informe sua altura: ");
  scanf("%f", &altura);

//c�lculo de imc
   h2 = (altura * altura);
   imc = (massa / h2);

//sa�da de dados
  printf("\nImc = %.2f\n", imc);
     system("pause");
}
