#include <stdlib.h>
#include <stdio.h>



void func1(int *a) {
	int i;
	for (i = 0;i < 5; i++)
		printf("%d\n", *(a + i)); //comasterisco conteudo sem asterisco endereco
	printf("\n");
}

void func2(int *b) {
	int i, x;
	for (i = 0;i < 2;i++)
	{
		x = *(b + i);
		*(b + i) = *(b + (4 - i));
		*(b + (4 - i)) = x;
	}
}

void func3(int *c) {
	int i;
	for (i = 0;i < 5;i++)
		*(c + i) = 0;
}

int main()
{
	int v[5] = { 7,9,3,8,2 };
	//func1(v); //só o nome do vetor é a mesma coisa ex: v=&v[0]
	//v[0] = 0;
	//v[4] = 4;
	//func1(v);
	func1(v);
	func2(v);
	func1(v);
	func3(v);
	func1(v);
	system("pause");
	return 0;
}