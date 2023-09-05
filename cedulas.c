/*
Disciplina: Algoritmo e Programação Estruturada
Execução: Douglas Souza de Lima
Data: 04/09/2023
Link da atividade: https://www.beecrowd.com.br/judge/en/problems/view/1018
*/

#include <stdio.h>

int main() {
 
    int N;
    
    scanf("%d",&N);

    printf("%d\n",N);

    printf("%d nota(s) de R$ 100,00\n",(N-N%100)/100);
    N = N%100;

    printf("%d nota(s) de R$ 50,00\n",(N-N%50)/50);
    N = N%50;

    printf("%d nota(s) de R$ 20,00\n",(N-N%20)/20);
    N = N%20;

    printf("%d nota(s) de R$ 10,00\n",(N-N%10)/10);
    N = N%10;

    printf("%d nota(s) de R$ 5,00\n",(N-N%5)/5);
    N = N%5;

    printf("%d nota(s) de R$ 2,00\n",(N-N%2)/2);
    N = N%2;
    
    printf("%d nota(s) de R$ 1,00\n",(N-N%1)/1);
    N = N%1;
 
    return 0;
}
