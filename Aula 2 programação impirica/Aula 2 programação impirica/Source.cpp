#include <stdlib.h>
#include <stdio.h>
#include <math.h>


float CalculaDelta(float a, float b, float c);
float MaiorNum(float N1, float N2, float N3);
int SomaN(int x);

int main()
{
	printf("Delta: %.2f\n", CalculaDelta(1,2,4));
	printf("Maior Numero: %.2f\n", MaiorNum(1, 2, 4));
	printf("SomaN: %d\n", SomaN(10.0));
	return 0;

}

float CalculaDelta(float a, float b, float c) {
	return (pow(b,2.0) - (4.0*a*c));
}

float MaiorNum(float N1, float N2, float N3) {
	float maior;
	maior = 0;
	if (N1 > maior)
	{
		maior = N1;
	}
	else
		if (N2 > maior)
		{
			maior = N2;
		}
		else
			if (N3 > maior)
			{
				maior = N3;
			}
			else
			return maior;
}

int SomaN(int x) {
	int a, soma = 0, aux;
	aux = x;
	for (a = 0; a < aux; a++)
		{
		soma += a;
		}
	return soma;
	}