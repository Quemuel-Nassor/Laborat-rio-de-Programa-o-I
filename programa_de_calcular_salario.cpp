//decalra��o de bibliotecas
#include<stdio.h>
#include<stdlib.h>
//delcara��o de vari�veis
 float salario,perc_ajuste,ajuste,salario_final;

//fun��o principal
main()
{
// in�cio
  printf("informe o salario: ");
  scanf("%f", &salario);

  printf("informe percentual de ajuste: ");
  scanf("%f", &perc_ajuste);


//c�lculos de ajuste

    ajuste = (salario * perc_ajuste) /100;
    salario_final = salario + ajuste;

// resultado e sal�rio final
  printf("\nSalario_final = %.0f\n", salario_final);
      system("PAUSE");

}
