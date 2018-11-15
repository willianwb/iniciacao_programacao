#ifndef BILBERA_H
#define BILBERA_H
#include <string.h>
#include <math.h>




/*funcao de decimal para hexadecimal utilizando switch*/
char* DecimalHexa(char * c, char * b)
{
	int i = 0, j = 0, somavtr = 0;
	int d[33];
	somavtr = atoi(c); //Converte a string para um unico valor INT
	while (somavtr > 0) //Converte valor INT de decimal para hexadecimal invertido
	{
		d[i] = somavtr % 16;
		somavtr = somavtr / 16;
		i++;
	}
	d[i] = '\0'; //Atribui um final para o vetor resultante
	i--;
	for (; j <= i; j++) //Inverte o vetor resultante e aloca-o na string de saida
	{
		switch ((d[i - j]) + 48) //Substitui valores 10,11,12,13,14,15 da string para A,B,C,D,E,F respectivamente
		{
		case 58:
			*(b + j) = 'A';
			break;
		case 59:
			*(b + j) = 'B';
			break;
		case 60:
			*(b + j) = 'C';
			break;
		case 61:
			*(b + j) = 'D';
			break;
		case 62:
			*(b + j) = 'E';
			break;
		case 63:
			*(b + j) = 'F';
			break;
		default:
			*(b + j) = (d[i - j]) + 48;
		}
	}
	*(b + j) = '\0'; //Atribui um final para a string resultante
	return b;
}


/*função de decimal para octal*/
int DecimalOcta(int valor)
{
	int quociente, rest;
	if (valor) {
		quociente = valor / 8; // resultado da divisão por 8
		rest = valor - quociente * 8; // resto = valor - 8* o quociente que dara o numero mais proximo antes do resto, resultando no resto
		DecimalOcta(quociente); //função recursiva chamando a si mesma para continuar o processo					// switch para escolher o valor correto de rest, por ser um decimal 10 ou + vira letra de a-
		printf("%d", rest);
	}
	return 0;
}




#endif