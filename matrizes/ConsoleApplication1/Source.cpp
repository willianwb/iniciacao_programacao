#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void SomaMatrizes2(int *n1, int *n2, int *n3) {
	int i;
	for (i = 0;i < 9;i++)
		*(n3 + i) = *(n1 + i) + *(n2 + i);
}

int lermatriz(float *mat) {
	int i, j;
	puts("Entre Com os valores da matriz:\n");
	for (i = 0;i < 3;i++) {
		for (j = 0;i < 3;i++) {
			printf("posicao M[%d][%d]", i,j);
			scanf_s("%f", mat + (i * 3 + j));
		}
	}
	return 0;
}

void imprime_matriz(float *mat) {
	int i, j;
	printf(" Matriz \n");
	for (i = 0; i<3; i++) {
		for (j = 0;j<3; j++)
			printf("%.1f ", *(mat + (i*3 + j)));
		printf("\n");
	}
}




int main() {
	int M1[3][3], M2[3][3], M3[3][3], i , j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			M1[i][j] = 30;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			M2[i][j] = 30;

	void SomaMatrizes2(M1, M2, M3);



}