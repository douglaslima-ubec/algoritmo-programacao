/*
Disciplina: Algoritmo e Programação Estruturada
Execução: Douglas Souza de Lima
Data: 04/09/2023
Link da atividade: https://www.beecrowd.com.br/judge/en/problems/view/1014
*/

#include <stdio.h>

int main(){

        int X;
        float Y;
        float averageConsumption;

        scanf("%d",&X);
        scanf("%f",&Y);

        averageConsumption = X/Y;

        printf("%.3f km/l\n",averageConsumption);

        return 0;
}

