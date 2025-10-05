// ============================================================================
// Desafio: Super Trunfo em C - Nível Aventureiro
// Arquivo: super_trunfo_interativo.c
//
// Descrição: Este programa implementa a lógica do jogo Super Trunfo com
//            um menu interativo. O jogador escolhe qual atributo
//            usar para comparar duas cartas pré-definidas. A estrutura
//            'switch' gerencia a escolha e o 'if-else' determina o
//            vencedor, aplicando regras específicas para cada atributo.
// ============================================================================

#include <stdio.h>
#include <string.h>

int main() {

    // Variáveis para a Carta 1 (São Paulo)
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadeDemografica1;
    
    strcpy(nomeCidade1, "Sao Paulo");
    populacao1 = 12396372;
    area1 = 1521.11;
    pib1 = 763.8;
    pontosTuristicos1 = 20;

    // Variáveis para a Carta 2 (Rio de Janeiro)
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadeDemografica2;

    strcpy(nomeCidade2, "Rio de Janeiro");
    populacao2 = 6775561;
    area2 = 1200.329;
    pib2 = 356.9;
    pontosTuristicos2 = 25;

    densidadeDemografica1 = populacao1 / area1;
    densidadeDemografica2 = populacao2 / area2;

    //CARTAS
    printf("--- Carta 1: %s ---\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: R$ %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Demografica: %.2f hab/km^2\n\n", densidadeDemografica1);

    printf("--- Carta 2: %s ---\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: R$ %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Demografica: %.2f hab/km^2\n\n", densidadeDemografica2);
    
    //MENU INTERATIVO
    int escolha;
    printf("Escolha o atributo para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica (menor vence)\n");
    printf("Digite sua escolha: ");
    
    scanf("%d", &escolha);
    printf("\n");

    //Escolha do jogador.
    switch (escolha) {
        //CASO 1: POPULAÇÃO
        case 1:
            printf("--- Comparando: Populacao ---\n");
            printf("Carta 1 (%s): %d\n", nomeCidade1, populacao1);
            printf("Carta 2 (%s): %d\n\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break; // Finaliza o case

        //CASO 2: ÁREA
        case 2:
            printf("--- Comparando: Area ---\n");
            printf("Carta 1 (%s): %.2f km^2\n", nomeCidade1, area1);
            printf("Carta 2 (%s): %.2f km^2\n\n", nomeCidade2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        //CASO 3: PIB
        case 3:
            printf("--- Comparando: PIB ---\n");
            printf("Carta 1 (%s): R$ %.2f bilhoes\n", nomeCidade1, pib1);
            printf("Carta 2 (%s): R$ %.2f bilhoes\n\n", nomeCidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        //CASO 4: PONTOS TURISTICOS
        case 4:
            printf("--- Comparando: Pontos Turisticos ---\n");
            printf("Carta 1 (%s): %d\n", nomeCidade1, pontosTuristicos1);
            printf("Carta 2 (%s): %d\n\n", nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        //CASO 5: DENSIDADE DEMOGRÁFICA (REGRA ESPECIAL)
        case 5:
            printf("--- Comparando: Densidade Demografica ---\n");
            printf("Carta 1 (%s): %.2f hab/km^2\n", nomeCidade1, densidadeDemografica1);
            printf("Carta 2 (%s): %.2f hab/km^2\n\n", nomeCidade2, densidadeDemografica2);
            if (densidadeDemografica1 < densidadeDemografica2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (densidadeDemografica2 < densidadeDemografica1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        //CASO PADRÃO: ENTRADA INVÁLIDA
        default:
            printf("Opcao invalida! Por favor, execute o programa novamente e escolha um numero de 1 a 5.\n");
            break;
    }

    return 0;
}