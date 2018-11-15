#include <stdio.h>
#include <math.h>


main()
{
	float raio, altura, volume;
	do
	{
	printf("Entrar com raio:\n");
	scanf("%f", &raio);
	printf("Entrar com altura:\n");
	scanf("%f", &altura);
	
	volume = (3.14159) * (raio * raio) * altura;
	
	printf("\n\nO volume %c: %.3f\n\n", 130, volume);
	
	
	
	if (volume >= 1000)
	printf("\n\nTANQUE GRANDE MANOW!!\n\n");
	
	}while (volume < 1000);
		
		
	
	
	
	
}
