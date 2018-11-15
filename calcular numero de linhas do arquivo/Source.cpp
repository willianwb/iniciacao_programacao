#include <stdio.h>
#include <stdlib.h>

//exemplo 2 numero de characters
/* fgetc example: character counter */
int main()
{
	FILE * pFile;
	int c;
	int n = 0, num = 0;
	pFile = fopen("Texto1.txt", "r");
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
	}
	return 0;
}