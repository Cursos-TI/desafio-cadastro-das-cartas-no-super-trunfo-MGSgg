#include <stdio.h>

#define NUM_CARTAS 4

typedef struct {
    char estado;
    char codigo;
    char cidade[10];
    int populacao;
    float area;
    float PIB;
    int PT;
    float DP;
    float PPC;
} Carta;

int main() {
    Carta cartas[NUM_CARTAS];

    for(int i = 0; i < NUM_CARTAS; i++) {
        printf("\nCadastro da carta %d\n", i + 1);
        printf("Entre com a inicial do estado: \n");
        scanf(" %c", &cartas[i].estado);
        
        printf("\nEntre com um número de 1 a 4: \n");
        scanf(" %c", &cartas[i].codigo);

        printf("\nEntre com a cidade: \n");
        scanf(" %s", cartas[i].cidade);

        printf("\nEntre com a populacao:\n");
        scanf(" %d", &cartas[i].populacao);

        printf("\nEntre com a area: \n");
        scanf(" %f", &cartas[i].area);

        printf("\nEntre com o PIB: \n");
        scanf(" %f", &cartas[i].PIB);

        printf("\nEntre com os Pontos Turísticos: \n");
        scanf(" %d", &cartas[i].PT);
        
        cartas[i].DP = (float)cartas[i].populacao / cartas[i].area;
        cartas[i].PPC = cartas[i].PIB / cartas[i].populacao;
    }

    for(int i = 0; i < NUM_CARTAS; i++) {
        printf("\n          Informações da Carta %c", cartas[i].estado);
        printf("0%c\n", cartas[i].codigo);
        printf("\nCidade: %s \n", cartas[i].cidade);
        printf("\nPopulação: %d habitantes \n", cartas[i].populacao);
        printf("\nÁrea: %.2f km² \n", cartas[i].area);
        printf("\nPIB: R$ %.2f \n", cartas[i].PIB);
        printf("\nPontos Turísticos: %d \n", cartas[i].PT);
        printf("\nDensidade Populacional: %.2f \n", cartas[i].DP);
        printf("\nPIB per capita: %.2f \n", cartas[i].PPC);
    }

    return 0;
}

