#include<stdio.h>
    int main() {
        char nome_da_cidade[50];
        int populacao;
        float area;
        float pib;
        int npt;    

        printf("Digite o nome da cidade: \n");
        scanf("%s", nome_da_cidade);            

        printf("Digite a população: \n");
        scanf("%d", &populacao);

        printf("Digite a área: \n");
        scanf("%f", &area);                 

        printf("Digite o PIB: \n");
        scanf("%f", &pib);  

        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &npt);      
        
        printf("Nome da cidade: %s \n", nome_da_cidade);
        printf("População: %d \n", populacao);
        printf("Área: %f \n", area);
        printf("PIB: %f \n", pib);
        printf("Número de Pontos Turísticos: %d \n", npt); 
        
    return 0;      

        }