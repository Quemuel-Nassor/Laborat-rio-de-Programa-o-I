//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o de vai�veis
float base,altura,area;

//decalra��o da fun��o principal
main()
{
//in�cio
   printf("informe o valor da base do trinagulo: ");
   scanf("%f",&base);

   printf("informe a altura do triangulo: ");
   scanf("%f",&altura);

// c�lculo da �rea
area = (base * altura)/2;

//exibi��o da �rea
printf("\nArea = %.0f\n", area);
      system("PAUSE");

}
