#include <stdio.h>

int main() {

    // Variáveis
    int popu1, popu2, pontosT1, pontosT2;
    char estado1, estado2, cidade1[50], cidade2[50], cod1[4], cod2[4];
    float area1, area2, pib1, pib2;

    printf("\n=== Cadastro de Cartas ===\n");

    // Entrada dos dados

    // Carta 1
    printf("\n=== Carta 1 ===\n");

    printf("Digite o Estado: \n");
    scanf(" %c", &estado1); // %c e espaço antes
    getchar();

    printf("Digite o Codigo da Carta: \n");
    scanf("%s", cod1);

    printf("Digite o nome da Cidade: \n");
    scanf(" %[^\n]", cidade1); // Para ler com espaços

    printf("Digite o número de habitantes da Cidade: \n");
    scanf("%d", &popu1);

    printf("Digite a área da Cidade em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosT1);

    // Carta 2
    printf("\n=== Carta 2 ===\n");

    printf("Digite o Estado: \n");
    scanf(" %c", &estado2); // %c e espaço antes

    printf("Digite o Codigo da Carta: \n");
    scanf("%s", cod2);

    printf("Digite o nome da Cidade: \n");
    scanf(" %[^\n]", cidade2); // Para ler com espaços

    printf("Digite o número de habitantes da Cidade: \n");
    scanf("%d", &popu2);

    printf("Digite a área da Cidade em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosT2);

    
    // Saída Carta 1
    printf("\nCarta 1: \n");
    printf("Estado: %c \nCódigo: %s \nNome da Cidade: %s\n", estado1, cod1, cidade1);
    printf("Área: %.2f km²\n", area1);
    printf("População: %d \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d\n", popu1, pib1, pontosT1);

    // Saída Carta 2
    printf("\nCarta 2: \n");
    printf("Estado: %c \nCódigo: %s \nNome da Cidade: %s\n", estado2, cod2, cidade2);
    printf("Área: %.2f km²\n", area2);
    printf("População: %d \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d\n", popu2, pib2, pontosT2);

return 0;
}