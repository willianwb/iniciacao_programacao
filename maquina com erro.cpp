#include <stdio.h>
#include <stdlib.h>
#include <math.h>



main()
{
	int m[5][7] = {{0,0,1,0,1,0,0}, {0,0,1,0,1,1,0}, {0,0,1,0,1,0,0}, {0,0,1,0,1,0,0}, {1,1,1,1,1,1,0}}, l, c, numpec;
	int ContQual [5], defeito, menor, melhor;
	int m_maq,p_maq;
	
	m_maq = p_maq = -1;
	melhor = 100; menor = 0;
	
	numpec = 0;
	
	for (l=0; l <= 4; l++)
	{
	defeito = 0;
		for (c=0; c <= 6; c ++)
	   {
		 if ( m[l][c] == 1)
		 	defeito++;
	   }
	   ContQual[l] = defeito;
	
	}
	printf("tabela            Coluna de defeitos\n");
	// impressão da matriz pronta, com a ultima tabela de resultados
	for(l=0; l < 5 ; l++)
	   		 {
	   		 	for(c=0; c < 7; c++)
	   		 	printf("%d ", m[l][c]);
	   		 	printf("         %d", ContQual[l]);
	   		 	printf("\n");
	   		 }
	//impressão da matriz de quantidade de defeitos por linha   		 
	   		  printf("\n");
	   		for(l=0; l < 5 ; l++)
	   		 	printf("%d ", ContQual[l]);
	   		 	printf("\n");
	   		 
	
	for (l = 0; l < 5; l++)
	{
		if(melhor > ContQual[l])
		{
		melhor = ContQual[l];
		m_maq = ++l;
		}
	}
	
	for (l = 0; l < 5; l++)
	{
		if(menor < ContQual[l])
		{
		menor = ContQual[l];
		p_maq = ++l;
		}
	}
	

	
	
	   		 	printf("\n");	
		   		printf("Melhor: %d ", melhor);
	   		 	printf("\n");
		  		printf("Numero da maquina: %d ", m_maq);
	   		 	printf("\n");
				printf("Menor: %d ", menor);
	   		 	printf("\n");	   	
				printf("Numero da maquina :%d ", p_maq);
	   		 	printf("\n");
	
}

