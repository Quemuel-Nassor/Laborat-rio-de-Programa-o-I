#include<stdio.h>
#include<stdlib.h>

//delcara��o de vari�veis
 float salario,valor_vendas,salario_final,salario_descontado,salario_ajustado,comissao;

//fun��o principal
main()
{
// in�cio
  printf("informe o salario: ");
  scanf("%f", &salario);

  printf("informe o valor de vendas: ");
  scanf("%f", &valor_vendas);


//c�lculos de ajuste e desconto

    salario_ajustado = salario + (salario * 10)/100;
    comissao = (valor_vendas * 6)/100;
    salario_descontado = salario_ajustado - (salario_ajustado * 5) /100;
    salario_final =  comissao + salario_descontado;

// resultado e sal�rio final
  printf("\nSalario_ajustado = %.0f\n", salario_ajustado);
  printf("\nComissao = %.0f\n", comissao);
  printf("\nSalario_descontado = %.0f\n", salario_descontado);
  printf("\nSalario_final = %.0f\n", salario_final);
      system("PAUSE");

}
