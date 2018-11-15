#include <stdio.h>
#include <math.h>
#include <stdlib.h>


main()
{
	int num2, a, oper, precingre;
	float total, parc;
	
	a = 1;
	total = 0;
	parc = 0;
	
	while(a >= 1 && a <=5)
	{
	printf("Escolher uma modalidade:\n");
	scanf("%d", &a);
	printf("Quantidade de ingressos:\n");
	scanf("%d", &num2);
	printf("Inteira 1 ou meia 2?:\n");
	scanf("%d", &oper);
		if (oper == 1)
		{
		precingre = 100.00;
		}
			if (oper == 2)
			{
			precingre = 50.00;
			}
			if (oper != 1 && oper != 2)
			{
			system("pause");
			}
			
	parc = num2 * precingre;
	
switch (a)
	{
		case 1: 
		printf("\n\nNatacaoo e preco dos ingressos pedidos= %.2f", parc);
		break;
		case 2: 
		printf("\n\nAtletismo e preco dos ingressos pedidos= %.2f", parc);
		break;
		case 3: 
		printf("\n\nVolei e preco dos ingressos pedidos= %.2f", parc);
		break;
		case 4: 
		printf("\n\nGinastica e preco dos ingressos pedidos= %.2f", parc);
		break;
		case 5: 
		printf("\n\nIatismo e preco dos ingressos pedidos= %.2f", parc);
		break;
		default: printf("\n\nOperação errada");
	}
					
	total = total + parc;
	printf("\n\nPreco Total = %.2f\n\n", total);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
