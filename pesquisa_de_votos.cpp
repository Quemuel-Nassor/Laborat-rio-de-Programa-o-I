/*Algoritmo para gerenciar a pesquisa de inten��o de votos dos
candidatos a presid�ncia do DA de um Curso, sendo 1 -
CandidatoA, 2 - CandidatoB e 3 - CandidatoC. A pesquisa ser� respondida
por n alunos e, ap�s a coleta de dados deve-se mostrar o percentual
previsto de cada candidato */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

//declara��o das vari�veis
int candA=0, candB=0, candC=0, , i=0, voto;
char controle;

//fun��o principal
main()
{
	//estrutura de repeti��o
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
	//sa�da de dados
	printf("\nCandidatoA = %.2f%%", float(candA)/i*100);
	printf("\nCandidatoB = %.2f%%", float(candB)/i*100);
	printf("\nCandidatoC = %.2f%%", float(candC)/i*100);
	system("pause");
}
