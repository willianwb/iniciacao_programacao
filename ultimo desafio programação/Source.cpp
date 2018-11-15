#include <stdio.h>
#include <stdlib.h>

int main()
{
	float c=0.0, soma=0.0;
	FILE * pFile;

	pFile = fopen("Texto3.txt", "r");
	do {
		c = fscanf(pFile, "%f");
		soma = soma + c;
		} while (c != EOF);
	fclose(pFile);
	printf("I have read: %f \n", soma);
	system("pause");
	return 0;
}
