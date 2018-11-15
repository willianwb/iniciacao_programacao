# include "stdio.h"
#include <stdlib.h>



main()
{
	int M[3][2] = {{1,2}, {3,4}, {5,6}};
	int lin, col;
	lin = 0;
	col = 0;
	
	
		for (lin=0; lin <= 2; lin ++)
	   {
	     for (col=0; col <= 1; col ++)  
	        printf ("%2d\t", M[lin][col]);
	   printf ("\n");
		
		
		}
	
	printf("\n");
	for(lin=0; lin<=1;lin++)
	{
		for(col=0;col<=2;col++)
		
		printf ("%2d\t", M[col][lin]);
	printf ("\n");
	    
	}
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
