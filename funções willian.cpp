#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float adic(float a, float b) {
	return a + b;
}
float subt(float a, float b) {
	return a - b;
}

float multi(float a, float b) {
	return a * b;
}

float divi(float a, float b) {
	float d;
	d = a / b;
	return d;
}

float expo(float a, float b){
	int Cont;
	float Res;
	Res = a;
	Cont = 1;
	while(Cont < b){
		Res = Res * a;
		Cont++;
	}
	return Res;
}

float quad(float a) {
	return a * a;
}

float inv(float x) {
	return 1 / x;

}

float abswillian(float a) {
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

	printf("valor adicao: %.2f\n ", adic(2.5, 3));
	printf("valor subtracao: %.2f\n ", subt(2.5, 3));
	printf("valor multiplicacao: %.2f\n ", multi(2.5, 3));
	printf("valor divisao: %.2f\n ", divi(2.5, 3));
	printf("valor exponencial: %.2f\n ", expo(2, 2));
	printf("valor quadrado: %.2f\n ", quad(4));
	printf("valor inverso: %.2f\n ", inv(2.5));
	printf("valor absoluto: %.2f\n ", abswillian(-2.5));
	system("pause");
	return 0;
}