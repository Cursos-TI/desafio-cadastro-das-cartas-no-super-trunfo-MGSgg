#include <stdio.h>

int main(){
    int codigo = 0;
    char estado[50] = "";
    char populacao[50] = "";
    float area = 0;
    
    printf("Entre com seu codigo de estado:\n");
    scanf("%d", &codigo);
    
    printf("Entre com seu estado:\n");
    scanf("%s", &estado);

    printf("Entre com a População do estado:\n");
    scanf("%s", &populacao);

    printf("Entre com a área em km do estado:\n");
    scanf("%f", &area);
    


    printf("Dados Cadastrados:\n");
    printf("Codigo: %d. \n", codigo);
    printf("Estado: %s. \n", estado);
    printf("Populacao: %s. \n", populacao);
    printf("Area: %f. \n", populacao);

}