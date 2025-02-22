#include <stdio.h>

    int main(){

        char A1, A2;    
        char codigo1[20], codigo2[20];
        char cidade1[20], cidade2[20];
        int populacao1, populacao2;
        float pib1, pib2;
        int pontos1, pontos2; 


        printf("Digite a primeira letra do Estado da carta1\n");
        scanf(" %c", &A1); 

        printf("Ok, informação cadastrada!\n");
        printf("Agora digite o código da carta1\n");
        scanf("%s", codigo1);

        printf("Nome da cidade da carta1:\n");    
        scanf("%s", cidade1);
        printf("Ok, informação cadastrada!\n");

        printf("População da carta1:\n");
        scanf("%d", &populacao1);
        printf("Ok, informação cadastrada!\n");

        printf("Qual o PIB em bilhoes da carta 1?\n");
        scanf("%f", &pib1);  
        printf("Ok, informação cadastrada!\n");

        printf("Pontos turisticos da cidade da carta1:\n");
        scanf("%d", &pontos1);
        printf("Ok, informação cadastrada!\n");
        printf("Preparando para o cadastro da nova carta\n");
        printf("Aguarde mais um momento...\n");
        printf("Ok, vamos para o cadastro da carta2!\n");

        printf("Digite a primeira letra do Estado da carta 2\n");
        scanf(" %c", &A2); 

        printf("Ok, informação cadastrada!\n");
        printf("Agora digite o código da carta 2:\n");
        scanf("%s", codigo2);

        printf("Nome da cidade da carta 2:\n");    
        scanf("%s", &cidade2);
        printf("Ok, informação cadastrada!\n");

        printf("População da carta 2:\n");
        scanf("%d", &populacao2);
        printf("Ok, informação cadastrada!\n");

        printf("Qual o PIB em bilhoes da carta 2?\n");
        scanf("%f", &pib2);  
        printf("Ok, informação cadastrada!\n");

        printf("Pontos turisticos da cidade da carta 2:\n");
        scanf("%d", &pontos2);
        printf("Ok, informação cadastrada!\n");
        printf("Exibindo resultados das cartas cadastradas!\n");
        
        printf("\nCarta 1:\n");
        printf("Estado: %c\n", A1);
        printf("Codigo: %c\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("PIB: %f\n", pib1);
        printf("Pontos Turisticos: %d\n", pontos1);

        printf("\n=========================================\n");

        printf("\nCarta 2:\n");
        printf("Estado: %c\n", A2);
        printf("Codigo: %c\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("PIB: %f\n", pib2);
        printf("Pontos Turisticos: %d\n", pontos2);



        return 0;


        
    }
