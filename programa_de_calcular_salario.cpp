//decalração de bibliotecas
#include<stdio.h>
#include<stdlib.h>
//delcaração de variáveis
 float salario,perc_ajuste,ajuste,salario_final;

//função principal
main()
{
// início
  printf("informe o salario: ");
  scanf("%f", &salario);

  printf("informe percentual de ajuste: ");
  scanf("%f", &perc_ajuste);


//cálculos de ajuste

    ajuste = (salario * perc_ajuste) /100;
    salario_final = salario + ajuste;

// resultado e salário final
  printf("\nSalario_final = %.0f\n", salario_final);
      system("PAUSE");

}
