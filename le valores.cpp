#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int n, val1,val2,val3,val4;
	n=0;
	val1=0;
	val2=0;
	val3=0;
	val4=0;
	do{
		printf("Dar um numero  de 0-100:\n");
		scanf("%d", &n);
		if (n > 0 && n <= 25)
		{
			val1++;
		}
			if (n > 26 && n <= 50)
			{
				val2++;
			}
				if (n > 51 && n <= 75)
				{
					val3++;
				}
					if (n > 76 && n <= 100)
					{
						val4++;
					}
	}while (n >=0 && n <= 100);
	
	printf("\nQuantidades no conjunto 1: %d\n", val1);
		printf("\nQuantidades no conjunto 2: %d\n", val2);
			printf("\nQuantidades no conjunto 3: %d\n", val3);
				printf("\nQuantidades no conjunto 4: %d\n", val4);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
