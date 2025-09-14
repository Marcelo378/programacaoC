#include <stdio.h>
 int main() {
    printf("Carta 1\n");
        char estado = 'A';
        char codigo[10] = "A01";
        char nome_da_cidade[20] = "São Paulo";
        double populacao = 12325000;
        double area = 1521.11;
        double pib = 699.28;
        int npt = 50;


        printf("Estado: %c \n", estado);
        printf("Código: %s \n", codigo);
        printf("Nome da Cidade: %s \n", nome_da_cidade);
        printf("População: %.0f habitantes \n", populacao);
        printf("Área: %.2f km² \n", area);
        printf("PIB: %.2f bilhões de reais \n", pib);
        printf("Número de Pontos Turísticos: %d \n", npt);


    return 0;
 }