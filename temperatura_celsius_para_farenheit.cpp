//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração de variáveis
float cels,fhr;

//declaração de função principal
main()
{
   printf("informe temperatura em ºC: ");
   scanf("%f",&cels);

//cálculo
   fhr = ((cels) /5) * 9 + 32;

//temperatua em ºF
   printf("\nFhr = %f\n", fhr);
      system("PAUSE");

}
