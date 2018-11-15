#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <process.h>

typedef struct reg
{
	char nome[40];
	char end[50];
	int idade;
	float sal;
}Funcionario;

int main()
{
	int i=0, n=1;
	Funcionario *str = NULL;
	int resposta = 0;
	do {

		str = (struct reg *) realloc(str, n * sizeof(Funcionario)); /* Alocando memória para um registro */
		if (str == NULL) {
			printf("Não existe memória para ser alocada\n");
			return 0;
			}
		else {
			printf("\n\nFuncionario %d\n", i + 1);
			//fflush(stdin);
			//printf("\nNome: ");
			//gets_s((str + i)->nome);	fflush(stdin);
			//printf("\nEndereco: ");
			//gets_s((str + i)->end);		fflush(stdin);
			printf("\nIdade: ");
			scanf_s("%d", &(str + i)->idade);	fflush(stdin);
			printf("\nSalario: ");
			scanf_s("%f", &(str + i)->sal);	fflush(stdin);
			printf("\nIdade : %d\nSalario : %5.2f\n", (str+i)->idade, (str+i)->sal);
			
			
			i++;
			n++;

			printf("\n\nDeseja Continuar?(1/0) ");
			//resposta = getc(stdin); fflush(stdin);
			scanf("%d", &resposta);		fflush(stdin);
		}
	} while (resposta == 1);

	for (i = 0;i < (n-1);i++)
	{
		/*Imprime os funcionarios*/
		printf("\n\nFuncionario %d\n", i + 1);
		//printf("\nNome: %s, (str+i)->nome);
		//printf("\nEndereco: %s, (str+i)->nome);
		printf("\nIdade: %d", (str+i)->idade);
		printf("\nSalario: %f", (str+i)->sal);
	}
	free(str);
		/*Cadastra funcionarios*/
	 /* libera a memória */
				   /* copia dados para o registro */
				   //strcpy_s(str->nome, "João da Silva");
				   //strcpy_s(str->end, "Rua França, 123");
				   //str->idade = 34;
				   //str->sal = (float) 2000.00;
				   /* imprime o registro */
				   //printf("Nome: %s\nEdereco : %s\nIdade : %d\nSalario : %5.2f", str->nome, str->end, str->idade, str->sal);
				   //free(str); /* libera a memória */
	system("pause");
	return 0;
}