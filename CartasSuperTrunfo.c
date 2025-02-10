#include <stdio.h>

int main(){
    char Estado [50]= "";
    char Codigo[50] = "";
    char Cidade [50] = "";
    int Populacao = 0;
    float Area = 0;
    float PIB = 0;
    int PT = 0;
    
    printf("Entre com o Nome do estado:\n");
    scanf("%s", &Estado);
    
    printf("Entre com o Código da Carta:\n");
    scanf("%s", &Codigo);

    printf("Entre com o Nome da Cidade:\n");
    scanf("%s", &Cidade);

    printf("Entre com a População da Cidade:\n");
    scanf("%i", &Populacao);

    printf("Entre com o PIB :\n");
    scanf("%f", &PIB);

    printf("Entre com a Quantidade de Pontos Turísticos:\n");
    scanf("%i", &PT);


    

    printf("Dados Cadastrados:\n");
    printf("Estado: %s. \n", Estado);   
    printf("Código: %s. \n", Codigo);
    printf("Cidade: %s. \n", Cidade);
    printf("População: %i. \n", Populacao);
    printf("PIB: %f. \n", PIB);
    printf("Pontos Turísticos: %i. \n", PT);

}