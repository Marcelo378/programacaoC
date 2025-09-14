#include <stdio.h>
 int main() {
    printf("Carta 2\n");
        char estado = 'B';
        char codigo[10] = "B02";
        char nome_da_cidade[20] = "Rio de Janeiro";
        double populacao = 6748000;
        double area = 1200.25;
        double pib = 300.50;
        int npt = 3;


        printf("Estado: %c \n", estado);
        printf("Código: %s \n", codigo);
        printf("Nome da Cidade: %s \n", nome_da_cidade);
        printf("População: %.0f habitantes \n", populacao);
        printf("Área: %.2f km² \n", area);
        printf("PIB: %.2f bilhões de reais \n", pib);
        printf("Número de Pontos Turísticos: %d \n", npt);
        

    return 0;
 }