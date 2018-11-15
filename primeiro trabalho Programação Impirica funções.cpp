#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float adic(float a, float b) {
	return a + b;
}
float subt(float a, float b){	return a - b;	}float multi(float a, float b){	return a * b;}float divi(float a, float b){
	return a / b;
	}

float expo(float a, float b){	int i;	float Res;	for (i = 0; i<b; i++)
	{
		Res *= a;
	}	return Res;}float quad(float a) {
	return a * a;
}float inv(float x){
	return 1 / x;

}

float abswillian(float a){
	if (a < 0)
	{
		a *= -1;
	}
	else
		a = a;
return a;
}

int main()
{

	printf("valor adicao: %.2f\n\n\n ", adic(2.5, 3));
	printf("valor subtracao: %.2f\n\n\n ", subt(2.5, 3));
	printf("valor multiplicacao: %.2f\n\n\n ", multi(2.5, 3));
	printf("valor divisao: %.2f\n\n\n ", divi(2.5, 3));
	printf("valor exponencial: %.2f\n\n\n ", expo(2.5, 3));
	printf("valor quadrado: %.2f\n\n\n ", quad(2.5));
	printf("valor inverso: %.2f\n\n\n ", inv(2.5));
	printf("valor absoluto: %.2f\n\n\n ", abswillian(2.5));

	system("pause");
	return 0;
}