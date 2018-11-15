#include <stdio.h>
#include <stdlib.h>

//int main(void)
//{
//char url[] = "Texto3.txt",
//	float preco, total;
//	FILE *arq;
//
//arq = fopen(url, "r");
//	if (arq == NULL)
//		printf("Erro, nao foi possivel abrir o arquivo\n");
//	else
//		while ((fscanf(arq, "%f", total += preco) != EOF))
//			printf("Montante total: %.2f\n", total);
//
//	fclose(arq);
//
//	return 0;
//}
/* fgets example */
#include <stdio.h>

int main()
{
	FILE * pFile;
	int c;
	int n = 0, num = 1;
	pFile = fopen("Texto3.txt", "r");
	if (pFile == NULL) perror("Error opening file");
	else
	{
		do {
			c = fgetc(pFile);
			n++;
			if (c == '\n')
				num++;
		} while (c != EOF);
		fclose(pFile);
		printf("o arquivo contem %d quantidade de numero de characters, %d numero de linhas .\n", n, num);


		char mystring[1500];

		pFile = fopen("Texto3.txt", "r");
		if (pFile == NULL) perror("Error opening file");
		else {
			if (fgets(mystring, 1500, pFile) != NULL)
				puts(mystring);
			fclose(pFile);
		}
		return 0;
	}
}