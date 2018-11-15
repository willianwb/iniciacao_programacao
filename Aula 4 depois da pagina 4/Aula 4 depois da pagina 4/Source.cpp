#include <stdlib.h>
#include <stdio.h>
#include <math.h>


//(*p)++; conteudo +1
//*(p++); pula +1 endereço e pega conteudo;
//p=num+3; p sendo ponteiro , pega posição 0 do vetor num e pula 3 endereços
// google no type cast  eg. float x=3.2; int y=(int)x; joga fora o decimal float z = (float)y;

#define CARACTER 1
#define INTEIRO 2

void somador(void *dado, int tipo); // void para indeterminado e dai escolhe

int main()
{
	char a = 'x';
	int b = 1602;
	somador(&a, CARACTER);
	somador(&b, INTEIRO);
	printf("\n %c %d \n", a, b);

	system("PAUSE");
	return 0;
}

void somador(void *dado, int tipo) {
	if (tipo == CARACTER)
	{
		printf("\nCaracter!\n");
		char *p_char;
		p_char = (char*)dado; // type cast converte o tipo
		++(*p_char); // ++ no valor do char
	}
	else if (tipo == INTEIRO)
	{
		printf("\nInteiro!\n");
		int *p_int;
		p_int = (int*)dado;
		++(*p_int); // + do valor do int
	}
}