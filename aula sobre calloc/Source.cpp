/* calloc example */
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* calloc, exit, free */

int main()
{
	int i, n;
	float * pData;
	printf("Amount of numbers to be entered: ");
	scanf("%d", &i);
	pData = (float*)calloc(i, sizeof(float));
	if (pData == NULL) exit(1);
	//for (n = 0;n<i;n++)
	//{
	//	printf("Enter number #%d: ", n + 1);
	//	scanf("%d", &pData[n]);
	//}
	printf("You have entered: \n");
	for (n = 0;n<i;n++) printf("%d:%.5f \n",(n+1) , pData[n]);
	free(pData);
	return 0;
}