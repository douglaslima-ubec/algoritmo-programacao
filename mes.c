/*
Disciplina: Algoritmo e Programação Estruturada
Execução: Douglas Souza de Lima
Data: 04/09/2023
Link da atividade: https://www.beecrowd.com.br/judge/en/problems/view/1052
*/

#include <stdio.h>

int main(){

	int month;

	scanf("%d",&month);

	switch(month){
	
		case 1:
			printf("January");
			break;

		case 2:
			printf("February");
			break;

		case 3:
			printf("March");
			break;

		case 4:
			printf("April");
			break;

		case 5:
			printf("May");
			break;

		case 6:
			printf("June");
			break;

		case 7:
			printf("July");
			break;

		case 8:
			printf("August");
			break;

		case 9:
			printf("September");
			break;

		case 10:
			printf("October");
			break;

		case 11:
			printf("November");
			break;

		case 12:
			printf("December");
			break;

		default:
			main();
			break;
	}

	printf("\n");

	return 0;
}
