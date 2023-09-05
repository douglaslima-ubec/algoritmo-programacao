/*
Disciplina: Algoritmo e Programação Estruturada
Execução: Douglas Souza de Lima
Data: 04/09/2023
Link da atividade: https://www.beecrowd.com.br/judge/en/problems/view/1020
*/

#include <stdio.h>

int main(){

    int ano;
    int mes;
    int dia;

    scanf("%d",&dia);

    if(dia >= 365){
        ano = (dia - dia%365)/365;
    }

    dia = dia%365;

    if(dia >= 30){
        mes = (dia - dia%30)/30;
    }

    dia = dia%30;

    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",dia);

    return 0;
}
