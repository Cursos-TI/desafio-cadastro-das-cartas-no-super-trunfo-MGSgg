#include <stdio.h>

   int main(){
       char estado;
       char codigo;
       char cidade[10];
       int  populacao;


       printf("Entre com a inicial do estado: \n");
       scanf(" %c", &estado);
       
       printf("Entre com o codigo do estado (número de 1 a 4): \n");
       scanf(" %c", &codigo);

       printf("Entre com a cidade: \n");
       scanf(" %s", cidade);

    
       printf("Entre com a populacao:\n");
       scanf("\n %i", &populacao);
       



       
       printf("\n     Codigo Da Carta: %c", estado);
       printf("0%c\n", codigo);
       printf("cidade: %s \n", cidade);
       printf("populacao: %i", populacao);

return 0;
   }