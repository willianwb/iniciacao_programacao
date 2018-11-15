#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float CalculaDelta(float a, float b, float c);
float MaiorNum(float N1, float N2, float N3);
int SomaN(int x);
float f(float b, int e);
char conceito(float a);
float valors(int N);
float expo(float a, float b);
int fatorial(int num);
void calculoMedia(float nota1, float nota2, float nota3, char tipoMedia, float *retorno);

int main()
{
	printf("F faz algo: %f\n", f(3.0, 2));
	printf("Conceito: %c\n", conceito(8.0));
	printf("Delta: %f\n", CalculaDelta(1, 2, 4));
	printf("Maior Numero: %.2f\n", MaiorNum(1, 2, 4));
	printf("SomaN: %d\n", SomaN(10));
	printf("Soma S: %f\n", valors(10));
	printf("Exponencial: %f\n", expo(3.0,4.0));
	printf("Fatorial: %d\n", fatorial(3));
	printf("Media: %f\n", &retorno);
	system("pause");
	return 0;
}

float CalculaDelta(float a, float b, float c) {
	return (pow(b, 2.0f) - (4.0*a*c));
}

float MaiorNum(float N1, float N2, float N3) {
	float maior;
	maior = 0;
	if (N1 > maior)
	{
		maior = N1;
	}
	if (N2 > maior)
	{
		maior = N2;
	}
	if (N3 > maior)
	{
		maior = N3;
	}
	return maior;
}
int SomaN(int x) {
	int a, soma = 0, aux;
	aux = x;
	for (a = 0; a <= aux; a++)
	{
		soma += a;
	}
	return soma;
}

float f(float b, int e) // "r" coemçando com 1 multiplicado por "b" numero de vezes em "e"
{
	float r = 1.0;
	for (int i = 0; i<e; i++)
		r *= b;
	return r;
}

char conceito(float a) {
		if (a >= 0.0 && a < 5.0)
		{
			return 'D';
		}
		else if (a > 4.9 && a < 7.0)
		{
			return 'C';
		}
		else if (a > 6.9 && a < 9.0)
		{
			return 'B';
		}
		else if (a > 8.9 && a <= 10.0)
		{
			return 'A';
		}
		else
			return 0;
}

float valors(int N) {
	float resultado = 1;
	int x;
	for (x = 1; x <= N; x++)
		resultado += 1 / x;
	return resultado;
}

float expo(float a, float b) {
	int Cont;
	float Res;
	Res = a;
	Cont = 1;
	while (Cont < b) {
		Res = Res * a;
		Cont++;
	}
	return Res;
}

int fatorial(int num)
{
	int i, fact = 1;

	for (i = num; i > 1; i--)
		fact = fact * i;

	return fact;
}

void calculoMedia(float nota1, float nota2, float nota3, char tipoMedia, float *retorno){
	if (tipoMedia == 'a' || tipoMedia == 'A')
	{
			
	}
	if (tipoMedia == 'p' || tipoMedia == 'P')
	{
	
	}

}