#include <stdio.h>
#include <math.h>
#include <stdlib.h>


main()
{
	float num1, num2, calculo, a;
	char oper;
	for(a = 1; a < 10; a++)
	{
	printf("\Entrar com Primeiro Numero:\n");
	scanf("%f", &num1);
	printf("Entrar com Segundo Numero:\n");
	scanf("%f", &num2);
	printf("Entre com a operação:\n");
	scanf("%s", &oper);
	if (num1 != 0 && num2 !=0)
	{
	

			if (oper == '+')
	{
	calculo = num1 + num2;
	}
	else
		if (oper == '-')
		{
		calculo = num1 - num2;
		}
		else
			if (oper == '/')
			{
			calculo = num1 / num2;
			}
			else
				if (oper == '*')
			{
			calculo = num1 * num2;
				}

	
	printf("\n\nResultado = %.2f\n\n", calculo);
		
	}
	else
	a = 11;
	system("pause");
	
		
		
		
		
		
	}
  
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//switch (oper)
	//{
	//	case '+': 
	//	calculo = num1 + num2;
	//	printf("\n\nResultado = %.2f", calculo);
	//	break;
	//	case '-': 
	//	calculo = num1 - num2;
	//	printf("\n\nResultado = %.2f", calculo);
	//	break;
	//	case '/': 
	//	calculo = num1 / num2;
	//	printf("\n\nResultado = %.2f", calculo);
	//	break;
	//	case '*': 
	//	calculo = num1 * num2;
	//	printf("\n\nResultado = %.2f", calculo);
	//	break;
	//	case '^': 
	//	calculo = pow(num1,num2);
	//	printf("\n\nResultado = %.2f", calculo);
	//	break;
	//	default: printf("Operação errada");
				
		
		
	//}
	
	//if (oper == '+')
	//{
	//calculo = num1 + num2;
	//}
	//else
	//	if (oper == '-')
	//	{
	//	calculo = num1 - num2;
	//	}
	//	else
	//		if (oper == '/')
	//		{
	//		calculo = num1 / num2;
	//		}
	//		else
	//			if (oper == '*')
		//		{
		//		calculo = num1 * num2;
	//			}
	
	//printf("\n\nResultado = %.2f", calculo);
	
}	
