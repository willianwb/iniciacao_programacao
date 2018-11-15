/****************************************
Lista um arquivo texto – comando type do DOS
****************************************/
#include <stdio.h> /* para FILE e EOF */
#include <string.h>
int main(int argc, char *argv[]) {
	FILE *fp;
	int ch;
	
	if (argc != 3) {
		fprintf(stderr, "Formato: MOSTRE [Unidade:][Caminho]ARQUIVOTEXTO\n");
		return(-1);
	}
	if ((fp = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Arquivo de entrada invalido: %s\n", argv[1]);
		return(-2);
	}
	int qd = 0;
	if (strcmp(argv[2], "/qd") == 0)
	{
		while ((ch = fgetc(fp)) != EOF) {
			printf("%c", ch);
			if (ch >= '0' && '9')
				qd++;
		}
		printf("\nQuantidade de digitos: %d\n", qd);
	}
	while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}
	fclose(fp);
	return 1;
}