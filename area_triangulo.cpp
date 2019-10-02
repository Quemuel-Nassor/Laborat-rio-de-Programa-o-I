//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração de vaiáveis
float base,altura,area;

//decalração da função principal
main()
{
//início
   printf("informe o valor da base do trinagulo: ");
   scanf("%f",&base);

   printf("informe a altura do triangulo: ");
   scanf("%f",&altura);

// cálculo da área
area = (base * altura)/2;

//exibição da área
printf("\nArea = %.0f\n", area);
      system("PAUSE");

}
