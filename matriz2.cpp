#include <stdio.h>
#include <stdlib.h>
#include <math.h>



main()
{
	int m1[3][4];
	char n1[2][2];
	int lin, col;
	col = 1;
	
	
	
	
		for (lin=0; lin <= 2; lin ++)
	   {
	   	m1[lin][col]=2; 
		m1[lin][col-1] = 1;
		m1[lin][col+2] =2; 
		m1[lin][col+1] = 1;	
	   }
	   for (lin=0; lin <= 1;lin++)
	   	for(col=0; col < 2; col++)
	   	
	   		if(lin == col)
	   			n1[lin][col] = 'A';
	   			
	   		else
	   			n1[lin][col] = 'Z';
	   		
	   		// impressao
	   		
	   		for(lin=0; lin<3 ;lin++)
	   		 {
	   		 	for(col=0; col<4;col++)
	   		 	printf("%d ", m1[lin][col]);
	   		 	printf("\n");
	   		 }
	   		 printf("\n");
	   		for(lin=0; lin<2 ;lin++)
	   		 {
	   		 	for(col=0; col<2 ;col++)
	   		 	printf("%c ", n1[lin][col]);
	   		 	printf("\n");
	   		 }
}
