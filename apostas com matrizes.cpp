#include <stdio.h>
#include <math.h>
#include <stdlib.h>


main()
{
	int resp[13], aposta[13], cont, numapost, acertos, apostas;
	
	for (cont = 0; cont < 13; cont++)
	{
		printf("RESPOSTA [%2d]: ", cont);
		scanf("%d", &resp[cont]);
	}
	apostas = 0;
	do {
	printf ("Numero Apostador:");
	scanf("%d", &numapost);
	
	for (cont = 0; cont < 13; cont++)
		{
			printf ("APOSTA [%2d]: ", cont);
			scanf ("%d", &aposta[cont]);
		}
	
	acertos = 0; // incialização
	
	// comparar aposta com resposta
	
	for (cont = 0; cont < 13; cont++)
	{
		if (aposta [cont] == resp [cont])
		acertos++;
	}
	
	if (acertos == 13)
	printf("GANHADOR %d Parabens!!\n", numapost);
	else
	printf ("Voce acertou %d numeros!!\n\n", acertos);
	
	apostas++;
	
	}
	while ( acertos != 13 && apostas <= 100);
}
