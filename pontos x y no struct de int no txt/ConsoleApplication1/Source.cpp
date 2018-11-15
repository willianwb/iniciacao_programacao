/* fwrite example : write buffer */
#include <stdio.h>
#include <stdlib.h>


#include <stdio.h>

typedef struct point
{
	int x;
	int y;
}Ponto;


int main()
{	
	Ponto A;
	FILE *f;
	int tam = 0;
	if ((f = fopen("pontos.txt", "wt")) == NULL)
	{
		printf("Impossivel abrir arquivo de entrada");
		return -1;
	}
	printf("informe o numero de pontos:");
	scanf("%d", &tam);

		for(;tam > 0;tam--)
		{
			printf("Ponto X:");
			scanf("%d", &A.x);
			printf("Ponto Y:");
			scanf("%d", &A.y);
			fwrite(&A, sizeof(Ponto), 1, f);
	}


	fclose(f);
	if ((f = fopen("pontos.txt", "rt")) == NULL)
	{
		printf("Impossivel abrir arquivo de entrada");
		return -1;
	}
	Ponto C;

	while (fread(&C, sizeof(Ponto), 1, f) == 1)
	{
		printf("Ponto Lido:x=%d,y=%d\n", C.x, C.y);
	}


	return 0;
}

