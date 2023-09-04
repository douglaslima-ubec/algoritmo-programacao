/*
Disciplina: Algoritmo e Programação Estruturada
Execução: Douglas Souza de Lima
Data: 04/09/2023
Link da atividade: https://www.beecrowd.com.br/judge/en/problems/view/1002
*/

#include <stdio.h>
#include <math.h>
int main(){
    
    double R;
    double n = 3.14159;
    
    printf("R = ");
    scanf("%lf",&R);
    
    double A = n * pow(R,2);
    
    printf("A = %.4lf",A);
    
    return 0;
}
