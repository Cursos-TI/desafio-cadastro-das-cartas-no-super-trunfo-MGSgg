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

    
       printf("\nEntre com a inicial do estado: \n");
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

    

       char estado1;
       char codigo1;
       char cidade1[10];
       int  populacao1;
       float area1;
       float PIB1;
       int PT1;
       float DP1;
       float PPC1;

       printf("\nEntre com a inicial do estado 2 : \n");
       scanf(" %c", &estado1);
       
       printf("\nEntre com um número de 1 a 4: \n");
       scanf(" %c", &codigo1);

       printf("\nEntre com o estado 2 : \n");
       scanf(" %s", cidade1);

       printf("\nEntre com a populacao do estado 2 :\n");
       scanf("\n %i", &populacao1);

       printf("\nEntre com a area do estado 2 : \n");
       scanf(" %f", &area1);

       printf("\nEntre com o PIB do estado 2: \n");
       scanf(" %f", &PIB1);
       printf("\nEntre com os Pontos Turísticos do estado 2: \n");
       scanf(" %i", &PT1);


       DP1 = populacao1 / area1;
       PPC1 = PIB1 / populacao1;

     
   
       printf("\n        Informações da Carta 1 %c", estado);
       printf("0%c \n", codigo);
       printf("\nCidade:  %s \n", cidade);
       printf("\nPopulação: %i habitantes \n", populacao);
       printf("\nÁrea:  %f km² \n ", area);
       printf("\nPIB: R$ %f \n ", PIB);
       printf("\nPontos Turísticos:  %i \n ", PT);
       printf("\nDensidade Populacional:  %f \n", DP);
       printf("\nPIB per capita:  %f \n", PPC);

       printf("\n        Informações da Carta 2 %c", estado1);
       printf("0%c \n", codigo1);
       printf("\nCidade:  %s \n", cidade1);
       printf("\nPopulação:  %i habitantes \n", populacao1);
       printf("\nÁrea:  %f km² \n ", area1);
       printf("\nPIB: R$ %f \n ", PIB1);
       printf("\nPontos Turísticos:  %i \n ", PT1);
       printf("\nDensidade Populacional:  %f \n", DP1);
       printf("\nPIB per capita:  %f \n", PPC1);
       
       }