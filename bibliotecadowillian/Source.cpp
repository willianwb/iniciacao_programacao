#include <stdio.h>
#include <stdlib.h>
#include "bilbera.h"



int main()
{
	/*declaração das variaveis globais*/
	int N, valor1, resp = 1;
	char abc[33], oi[33], wasd[33];
	while (resp != 0) {
		system("CLS"); //limpeza da tela 
		printf("Menu de opcoes:\n");
		printf("1 -BINARIO PARA OCTAL\n");
		printf("2 -BINARIO PARA DECIMAL\n");
		printf("3 -BINARIO PARA HEXADECIMAL\n");
		printf("4 -OCTAL PARA BINARIO\n");
		printf("5 -OCTAL PARA DECIMAL\n");
		printf("6 -OCTAL PARA HEXADECIMAL\n"); 
		printf("7 -DECIMAL PARA BINARIO\n");
		printf("8 -DECIMAL PARA OCTAL\n");
		printf("9 -DECIMAL PARA HEXADECIMAL\n");
		printf("10 -HEXADECIMAL PARA BINARIO\n");
		printf("11 -HEXADECIMAL PARA OCTAL\n"); 
		printf("12 -HEXADECIMAL PARA DECIMAL\n"); 
		scanf_s("%d", &valor1); fflush(stdin);

		switch (valor1)
		{
		case 1:
			printf("OPCAO ESCOLHIDA: BINARIO PARA OCTAL\n");
			//BinarioOctal(); // funcao binario octal
			break;
		case 2:
			printf("OPCAO ESCOLHIDA: BINARIO PARA DECIMAL\n");
			//BinarioDec(); // funcao binario decimal
			break;
		case 3:
			printf("OPCAO ESCOLHIDA: BINARIO PARA HEXADECIMAL\n");
			//BinarioHexa(); // funcao binario hexadecimal
			break;
		case 4:
			printf("OPCAO ESCOLHIDA: OCTAL PARA BINARIO\n");
			//OctaBin(); //funcao octal binario
			break;
		case 5:
			printf("OPCAO ESCOLHIDA: OCTAL PARA DECIMAL\n");
			//OctaDec(); // funcao octa decimal
			break;
		case 6:
			printf("OPCAO ESCOLHIDA: OCTAL PARA HEXADECIMAL\n");
			//OctaHexa();
			break;
		case 7:
			// resolução de decimal para binario
			printf("OPCAO ESCOLHIDA: DECIMAL PARA BINARIO\n");
			//DecimalBin();
			break;
		case 8:
			printf("OPCAO ESCOLHIDA: DECIMAL PARA OCTAL\n");
			printf("Entre com o numero decimal\n");
			scanf_s("%s", &abc);
			//DecimalOcta(abc,oi); //funcao decimal para octal
			break;
		case 9:
			printf("OPCAO ESCOLHIDA: DECIMAL PARA HEXADECIMAL\n");
			printf("Entre com o numero decimal\n");
			scanf_s("%s", &abc); fflush(stdin);
			DecimalHexa(abc, oi);
			wasd[33] = *DecimalHexa(abc, oi);
			printf("\n Numero Hexadecimal: %s", oi);// funcao decimal hexa
			printf("\n Numero Hexadecimal: %s", wasd);
			break;
		case 10:
			printf("OPCAO ESCOLHIDA: HEXADECIMAL PARA BINARIO\n");
			//HexaBin(); // funcao hexadecimal binario
			break;
		case 11:
			printf("OPCAO ESCOLHIDA: HEXADECIMAL PARA OCTAL\n");
			//HexaOcta(); // funcao hexa octal
			break;
		case 12:
			printf("OPCAO ESCOLHIDA: HEXADECIMAL PARA DECIMAL\n");
			//HexaDec(); // funcao hexa decimal
			break;
		}

		printf("\n\n1 para continuar 0 para parar:");
		scanf_s("%d", &resp); fflush(stdin);
	}

	printf("\n\n");
	system("pause");
	return 0;
}