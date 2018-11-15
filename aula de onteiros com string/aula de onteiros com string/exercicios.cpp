#include <stdlib.h>
#include <stdio.h>

int CalcularTamanho(char *s1);
int ChecarIgualdade(char *s1, char *s2);
char ConcatenarString(char *s1, char *s2);
char * LocalizarCaracter(char *s1, char item);

int main()
{
	char s[100], w[100], z[100], resultado[256];
	int T = 0, T1 = 0, T2 = 0, valorigual, i;
	printf("Informe o texto:\n");
	gets_s(s);
	T = CalcularTamanho(s);
	printf("\nTamanho : %d\n", T);


	printf("\nentre com texto 1:\n");
	gets_s(w);
	T1 = CalcularTamanho(w);
	printf("\nTamanho : %d\n", T1);
	printf("\nentre com texto 2:\n");
	gets_s(z);
	T2 = CalcularTamanho(z);
	printf("\nTamanho : %d\n", T2);
	valorigual = ChecarIgualdade(w, z);
	if (valorigual == 1) { //devfuria
		for (i = 0;i < T2;i++)
			resultado[i] = ConcatenarString(w, z);
	}
	else
	return 0;
	char *c;
	c = LocalizarCaracter(w, 'g');
	if (c != NULL)
		printf("Caracter %c localizado no endereço %d\n", *c, c);
	system("pause");
	return 0;
}

int CalcularTamanho(char *s1){
	int T = 0;
	while (*s1 != '\0')
	{
		T++;
		s1++;
	}
	return T;
}

int ChecarIgualdade(char *s1, char *s2) {
	int i;
	if (CalcularTamanho(s1) != CalcularTamanho(s2))
	{
		return 0;
	}
	else
		for (i = 0; *(s1 + i) != '\0'; i++)
			if (*(s1+i) != *(s2+i))
				return 0;
	return 1;

}

char ConcatenarString(char *s1, char *s2) {


}

char * LocalizarCaracter(char *s1, char item) {
	for (int i = 0;*(s1 + i) != '\0'; i++)
		if (*(s1 + i) == item)
			return (s1 + i);
	return NULL;

}
//parte 2 ponteiros
// * Ler o tópico "ponteiros e matrizes"
//*fazer exercícios do ultimo slide
//falta concatenar e passar 1 vetor para outro