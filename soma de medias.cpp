#include <stdio.h>
#include <math.h>
#include <stdlib.h>


main()
{
	float media, nota [10];
	int a, aux, acima, abaixo;
	
	acima = 0;
	abaixo = 0;
	aux = 3; // numero de valores e divisao da media
	// leitura dos valores
	for(a = 0; a < aux; a++)
	{
		printf("Ler nota do aluno\n\n");
		scanf("%f", &nota [a]);
	}
	
	// soma dos valores
	for(a = 0; a < aux; a++)

	{
		media += nota [a]; // media = media + nota[a] === {  +=  }
	}
		media = media / aux;
		
	
		
	for(a = 0; a < aux; a++)
	{
		printf("\n\nNota: %5.2f", nota [a]);
		if (nota[a] >= media)
		{
			printf("\nEsta acima da media da turma");
			acima ++;
		}
		else
		{
			printf("\nNao esta acima da media da turma");
			abaixo ++;
		}
	}	
	
	printf("\n\n Media da turma: %5.2f", media);
	printf("\n\n Numero de pessoas acima da media: %d", acima);
	printf("\n\n Numero de pessoas abaixo da media: %d", abaixo);
	
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
