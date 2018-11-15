#include <stdio.h>
#include <math.h>


main()
{
	float a, b, c, delta, raiz1, raiz2;
	float x1, x2;
	
	printf("Calculo das raízes de uma função do segundo grau");
	printf("\nEntrar com a:\n");
	scanf("%f", &a);
	printf("Entrar com b:\n");
	scanf("%f", &b);
	printf("Entrar com c:\n");
	scanf("%f", &c);
	
	delta = ((b*b)-(4*a*c));
		
	x1 = (-b) + sqrt(delta); // sqrt para raiz
	x2 = (-b) - sqrt(delta); // pow (base, expoente)
	raiz1 = x1 / (2 * a);
	raiz2 = x2 / (2 * a);
	if (delta >= 0)
	{
	printf("\n\nResultado da primeira raiz: %.2f e Resultado da segunda raiz: %.2f", raiz1, raiz2);
	}
	else
	printf("\nDelta negativo , portanto , raizes imaginarias");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
