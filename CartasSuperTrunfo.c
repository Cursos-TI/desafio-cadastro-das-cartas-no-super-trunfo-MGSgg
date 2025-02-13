#include <stdio.h>

   int main(){
       char estado;
       char codigo;
       char cidade[10];
       int  populacao;
       float area;
       float PIB;
       int PT;
       float DP;
       float PPC;


       printf("Entre com a inicial do estado: \n");
       scanf(" %c", &estado);
       
       printf("\nEntre com um número de 1 a 4: \n");
       scanf(" %c", &codigo);

       printf("\nEntre com a cidade: \n");
       scanf(" %s", cidade);

       printf("\nEntre com a populacao:\n");
       scanf("\n %i", &populacao);

       printf("\nEntre com a area: \n");
       scanf(" %f", &area);

       printf("\nEntre com o PIB: \n");
       scanf(" %f", &PIB);

       printf("\nEntre com os Pontos Turísticos: \n");
       scanf(" %i", &PT);
       
       DP = populacao / area;
       PPC = PIB / populacao;



       printf("\n        Informações da Carta %c", estado);
       printf("0%c\n", codigo);
       printf("\nCidade: %s \n", cidade);
       printf("\nPopulação: %i habitantes \n", populacao);
       printf("\nÁrea: %f km² \n ", area);
       printf("\nPIB: R$ %f \n ", PIB);
       printf("\nPontos Turísticos: %i \n ", PT);
       printf("\nDensidade Populacional: %f \n", DP);
       printf("\nPIB per capita: %f \n", PPC);



   }