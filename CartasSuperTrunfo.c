#include <stdio.h>

 int main (){
 
       char estado;
       char codigo[3];
       char cidade[10];
       int  populacao;
       float area;
       float PIB;
       int PontoTour;
       
    
       printf("\nEntre com a inicial do estado: \n"); // Imprime ao usuário a solicitação de inserir a inicial do estado
       scanf(" %c", &estado); // Lê os dados inseridos pelo usuário e os atribui a variável estado
       
       printf("\nEntre com um número de 01 a 04: \n"); // Imprime ao usuário a solicitação de inserir um número de 1 a 4
       scanf(" %s", codigo); // Lê os dados inseridos pelo usuário e os atribui a variável codigo

       printf("\nEntre com a cidade: \n"); // Imprime ao usuário a solicitação de inserir a cidade
       scanf(" %s", cidade);// Lê os dados inseridos pelo usuário e os atribui a variável cidade

       printf("\nEntre com a população:\n"); // Imprime ao usuário a solicitação de inserir a população 
       scanf("\n %i", &populacao); // // Lê os dados inseridos pelo usuário e os atribui a variável população

       printf("\nEntre com a área: \n"); // Imprime ao usuário a solicitação de inserir a área
       scanf(" %f", &area); // Lê os dados inseridos pelo usuário e os atribui a variável área

       printf("\nEntre com o PIB: \n"); // // Imprime ao usuário a solicitação de inserir o PIB
       scanf(" %f", &PIB); // Lê os dados inseridos pelo usuário e os atribui a variável PIB

       printf("\nEntre com os Pontos Turísticos: \n"); // Imprime ao usuário a solicitação de inserir a quantidade de pontos turísticos
       scanf(" %i", &PontoTour); // Lê os dados inseridos pelo usuário e os atribui a variável Pontos Turísticos

       printf("\n        Informações da Carta 1 %c", estado);
       printf("%s \n", codigo);
       printf("\nCidade:  %s \n", cidade);
       printf("\nPopulação: %i habitantes \n", populacao);
       printf("\nÁrea:  %f km² \n ", area);
       printf("\nPIB: R$ %f \n ", PIB);
       printf("\nPontos Turísticos:  %i \n ", PontoTour);
    

       char estado1;
       char codigo1[3];
       char cidade1[10];
       int  populacao1;
       float area1;
       float PIB1;
       int PontoTour1;

       printf("\nEntre com a inicial do estado 2 : \n");
       scanf(" %c", &estado1);
       
       printf("\nEntre com um número de 01 a 04: \n");
       scanf(" %s", &codigo1);

       printf("\nEntre com o estado 2 : \n");
       scanf(" %s", cidade1);

       printf("\nEntre com a populacao do estado 2 :\n");
       scanf("\n %i", &populacao1);

       printf("\nEntre com a area do estado 2 : \n");
       scanf(" %f", &area1);

       printf("\nEntre com o PIB do estado 2: \n");
       scanf(" %f", &PIB1);
       printf("\nEntre com os Pontos Turísticos do estado 2: \n");
       scanf(" %i", &PontoTour1);


       printf("\n        Informações da Carta 1 %c", estado);
       printf("%s \n", codigo);
       printf("\nCidade:  %s \n", cidade);
       printf("\nPopulação: %i habitantes \n", populacao);
       printf("\nÁrea:  %f km² \n ", area);
       printf("\nPIB: R$ %f \n ", PIB);
       printf("\nPontos Turísticos:  %i \n ", PontoTour);


       printf("\n        Informações da Carta 2 %c", estado1);
       printf("%s \n", codigo1);
       printf("\nCidade:  %s \n", cidade1);
       printf("\nPopulação:  %i habitantes \n", populacao1);
       printf("\nÁrea:  %f km² \n ", area1);
       printf("\nPIB: R$ %f \n ", PIB1);
       printf("\nPontos Turísticos:  %i \n ", PontoTour1);
}