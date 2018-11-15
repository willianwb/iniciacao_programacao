# include "stdio.h"

main ()
{
	int A [5][5] = {{1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}};
	int B [5][5] = {{2,2,2,2,2}, {2,2,2,2,2}, {2,2,2,2,2}, {2,2,2,2,2}, {2,2,2,2,2}};
	int C [5][5];
	int lin, col, aux;
	
	for (lin=0; lin < 5; lin ++)
  	  for (col=0; col < 5; col ++)
  	     {
           C [lin][col] = 0;
		   for (aux=0; aux < 5; aux++)	     	
  	     	  C [lin][col] = C [lin][col] + A [lin][aux] * B [aux][col];
  	     }
	
	for (lin=0; lin < 5; lin ++)
	   {
	     for (col=0; col < 5; col ++)     //imprime uma linha da matriz A
	        printf ("%2d ", A [lin][col]);
	      printf ("    ");
	     for (col=0; col < 5; col ++)     //imprime uma linha da matriz B
	        printf ("%2d ", B [lin][col]);  
	     printf ("    ");
	     for (col=0; col < 5; col ++)     //imprime uma linha da matriz C
	        printf ("%2d ", C [lin][col]); 
	     printf ("\n");  
	 }

}
