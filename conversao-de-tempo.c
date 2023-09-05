/*
Disciplina: Algoritmo e Programação Estruturada
Execução: Douglas Souza de Lima
Data: 04/09/2023
Link da atividade: https://www.beecrowd.com.br/judge/en/problems/view/1019
*/

#include <stdio.h>

int main(){

    int N;

    scanf("%d",&N);

    int h = 0;
    int min = 0;
    int s;

    if(N >= 60){
        min = (N - N%60)/60;
        N = N%60;
    }

    if(min >= 60){
        h = (min - min%60)/60;
        min = min%60;
    }

    s = N;

    printf("%d:%d:%d\n",h,min,s);

    return 0;
}
