#include <stdio.h>

int main() {

    // Variáveis
    int popu1, popu2, pontosT1, pontosT2;
    float area1, area2, pib1, pib2, densip1, densip2;
    double pibpc1, pibpc2;
    char estado1, estado2, cidade1[20], cidade2[20], cod1[4], cod2[4];

    
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


    //Calculando a Densidade Populacional
    
    //Carta 1
    densip1 = (float) popu1 / area1;
    //Carta 2
    densip2 = (float)  popu2 / area2;

    //Calculando o PIB per Capita

    //Carta 1
    pibpc1 = (float) (pib1  / popu1) * 1000000000; // PIB em bilhões de reais
    //Carta 2
    pibpc2 = (float) (pib2  / popu2) * 1000000000; // PIB em bilhões de reais

    // Saída Carta 1
    printf("\n=== Informações da Carta 1 ===\n");
    printf("Estado: %c \nCódigo: %s \nNome da Cidade: %s\n", estado1, cod1, cidade1);
    printf("Área: %.2f km²\n", area1);
    printf("População: %d \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d\n", popu1, pib1, pontosT1);
    printf("Densidade Populacional: %.2f hab/km²\n", densip1);
    printf("PIB per Capita: %.2f Reais\n", pibpc1);
    
    // Saída Carta 2
    printf("\n=== Informações da Carta 2 ===\n");
    printf("Estado: %c \nCódigo: %s \nNome da Cidade: %s\n", estado2, cod2, cidade2);
    printf("Área: %.2f km²\n", area2);
    printf("População: %d \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d\n", popu2, pib2, pontosT2);
    printf("Densidade Populacional: %.2f hab/km²\n", densip2);
    printf("PIB per Capita: %.2f Reais\n", pibpc2);
    

return 0;
}