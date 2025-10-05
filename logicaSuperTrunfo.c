
#include <stdio.h>
#include <string.h>

int main() {

    //Carta 1
    char estado1[3];
    char codigoCarta1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Variáveis para a Carta 2
    char estado2[3];
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;


    //CADASTRO DAS CARTAS (PRÉ-DEFINIDAS)
    // Inicializando dados da Carta 1
    strcpy(estado1, "SP");
    strcpy(codigoCarta1, "A1");
    strcpy(nomeCidade1, "Sao Paulo");
    populacao1 = 12396372;
    area1 = 1521.11;
    pib1 = 763.8;
    pontosTuristicos1 = 20;

    // Inicializando dados da Carta 2
    strcpy(estado2, "RJ");
    strcpy(codigoCarta2, "A2");
    strcpy(nomeCidade2, "Rio de Janeiro");
    populacao2 = 6775561;
    area2 = 1200.329;
    pib2 = 356.9;
    pontosTuristicos2 = 25;

    // Cálculos para a Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Cálculos para a Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    printf("--- Carta 1 ---\n");
    printf("Cidade: %s (%s)\n", nomeCidade1, estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: R$ %.2f bilhoes\n", pib1);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidadePopulacional1);
    printf("PIB per capita: R$ %.2f\n\n", pibPerCapita1);

    printf("--- Carta 2 ---\n");
    printf("Cidade: %s (%s)\n", nomeCidade2, estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: R$ %.2f bilhoes\n", pib2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidadePopulacional2);
    printf("PIB per capita: R$ %.2f\n\n", pibPerCapita2);


    // Estrutura para determinar o vencedor
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}