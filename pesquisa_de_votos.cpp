/*Algoritmo para gerenciar a pesquisa de intenção de votos dos
candidatos a presidência do DA de um Curso, sendo 1 -
CandidatoA, 2 - CandidatoB e 3 - CandidatoC. A pesquisa será respondida
por n alunos e, após a coleta de dados deve-se mostrar o percentual
previsto de cada candidato */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

//declaração das variáveis
int candA=0, candB=0, candC=0, , i=0, voto;
char controle;

//função principal
main()
{
	//estrutura de repetição
	do
	{
		system("cls");
		printf("Escolha o candidato:\n1-CandidatoA\n2-CandidatoB\n3-CandidatoC");
		scanf("%i", &voto);
		
		//estrutura condicional
		switch(voto)
		{
			case 1 : {
						candA++;
						i++;
				break;
			}
			case 2 : {
						candB++;
						i++;
				break;
			}
			case 3 : {
						candC++;
						i++;
				break;
			}
			default : {
						printf("\nCandidato Inexistente...");
						system("pause");
			}
		}
		printf("\nOutro voto <s/n>:");
		controle = getche();
	} while (toupper(controle)=='S');
	//saída de dados
	printf("\nCandidatoA = %.2f%%", float(candA)/i*100);
	printf("\nCandidatoB = %.2f%%", float(candB)/i*100);
	printf("\nCandidatoC = %.2f%%", float(candC)/i*100);
	system("pause");
}
