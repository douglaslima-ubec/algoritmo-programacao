/*
Disciplina: Algoritmo e Programação Estruturada
Execução: Douglas Souza de Lima
Data: 04/09/2023
Link da atividade: https://www.beecrowd.com.br/judge/en/problems/view/1007
*/

#include <stdio.h>

int main(){
    
    int A,B,C,D;
    
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);
    
    int DIFERENCA = A*B - C*D;
    
    printf("DIFERENCA = %d",DIFERENCA);
    printf("\n");
    
    return 0;
}
