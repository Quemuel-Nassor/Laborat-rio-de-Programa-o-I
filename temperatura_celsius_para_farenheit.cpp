//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o de vari�veis
float cels,fhr;

//declara��o de fun��o principal
main()
{
   printf("informe temperatura em �C: ");
   scanf("%f",&cels);

//c�lculo
   fhr = ((cels) /5) * 9 + 32;

//temperatua em �F
   printf("\nFhr = %f\n", fhr);
      system("PAUSE");

}
