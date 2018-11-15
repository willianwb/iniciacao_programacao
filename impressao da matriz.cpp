#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int M[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{2,2,2,2,2},{3,3,3,3,3},{1,1,1,1,1}},SL[5] ,SC[5];
	int i, j, soma=0;
	
	for (i=0 ;i<5 ;i++)
	{
	soma=0;
		for (j=0 ;j<5 ;j++)
		{
		soma = soma + M[j][i];
		}
	SL[i] = soma;
	}
			for (j=0 ;j<5 ;j++)
			{
				soma=0;
				for (i=0 ;i<5 ;i++)
				{
				soma = soma + M[i][j];
				}
			SC[j] = soma;
			}
	
	for (i=0 ;i<5 ;i++)
	{
		printf("%d\n", SL[i]);
		printf("\n\n");
	}
	printf("\n\n");
		for (j=0 ;j<5 ;j++)
		{
			printf("%d\t", SL[j]);
		}
	
	
}
