# include "stdio.h"

main ()
{
	int A [4][4] = {{1,2,3,4}, {1,2,3,4}, {1,2,3,4}, {1,2,3,4}};
	int B [4][4] = {{2,2,2,2}, {2,2,2,2}, {2,2,2,2}, {2,2,2,2}};
	int C [4][4];
	int i, j, aux;
	
	
	
	
	for(i = 0; i <=3; i++)
	{
		for(j = 0; j <=3; j++)
		    C[i][j] = A[i][j] + B[i][j];
		    
	}
		
		for (i=0; i < 4; i++)
	   {
	     for (j=0; j < 4; j++)     //imprime uma linha da matriz A
	        printf ("%2d ", A [i][j]);
	      printf ("    ");
	     for (j=0; j < 4; j++)     //imprime uma linha da matriz B
	        printf ("%2d ", B [i][j]);  
	     printf ("    ");
	     for (j=0; j < 4; j++)     //imprime uma linha da matriz C
	        printf ("%2d ", C [i][j]); 
	     printf ("\n");  
	 }

	
	
	
	
	
	
	
	
	
	
	
	
}
