#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copiastring(int a,char *s1,char **s2) {
	*s2 = (char*)malloc((a+1)*sizeof(char*));
	for (int i = 0;i <= a;i++)
	(*s2)[i] = s1[i];
	// *(*s2)+i= *(s1+i);
}

int main() {
	int a = 5;
	int *b;
	int **c;

	b = &a;
	c = &b;

	printf("%d\n", *c);
	printf("%d\n", &c);
	printf("%d\n", **c);


	char s1[] = "meu string!";
	char *s2;
	printf("\n%d\n", strlen(s1));
	copiastring(strlen(s1),s1,&s2);
	printf("%s\n", s2);
	free(s2);
	system("pause");
	return 0;
}