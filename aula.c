int main(){

    float notas[4];
    
    for(int ind=0;ind<4;ind++){

        printf("Entre o valor da nota %d: ",ind+1);
        scanf("%f",&notas[ind]);

    }

    float soma = notas[0]+notas[1]+notas[2]+notas[3];
    float media = soma/4;

    printf("\n\nRESULTADO\n\n");

    for(int ind=0;ind<4;ind++){

        printf("\tNota %d: %.2f\n",ind+1,notas[ind]);

    }

    printf("\n\n");
    printf("Media: %.2f\n",media);

    if(media<7){
        printf("Conceito: REPROVADO");
    }else{
        printf("Conceito: APROVADO");
    }

    return 0;
}