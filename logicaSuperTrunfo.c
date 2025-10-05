#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

void anunciarResultado(int vencedor, char nomeCidade1[], char nomeCidade2[]) {
    if (vencedor == 1) {
        printf(">> Vitoria da Carta 1 (%s)!\n", nomeCidade1);
    } else if (vencedor == 2) {
        printf(">> Vitoria da Carta 2 (%s)!\n", nomeCidade2);
    } else {
        printf(">> Que disputa! Deu empate!\n");
    }
}


int main() {

    // Atributos da Carta 1 (Sampa)
    char cidade1_nome[50];
    int cidade1_pop;
    float cidade1_area;
    float cidade1_pib;
    int cidade1_pontosTuristicos;
    float cidade1_densidade;
    
    strcpy(cidade1_nome, "Sao Paulo");
    cidade1_pop = 12396372;
    cidade1_area = 1521.11;
    cidade1_pib = 763.8;
    cidade1_pontosTuristicos = 20;

    // Atributos da Carta 2 (Cidada Maravilhosa)
    char cidade2_nome[50];
    int cidade2_pop;
    float cidade2_area;
    float cidade2_pib;
    int cidade2_pontosTuristicos;
    float cidade2_densidade;

    strcpy(cidade2_nome, "Rio de Janeiro");
    cidade2_pop = 6775561;
    cidade2_area = 1200.329;
    cidade2_pib = 356.9;
    cidade2_pontosTuristicos = 25;

    cidade1_densidade = cidade1_pop / cidade1_area;
    cidade2_densidade = cidade2_pop / cidade2_area;
    
    printf("--- [CARTA 1]: %s ---\n", cidade1_nome);
    printf(" Populacao: %d\n", cidade1_pop);
    printf(" Area: %.2f km^2\n\n", cidade1_area);

    printf("--- [CARTA 2]: %s ---\n", cidade2_nome);
    printf(" Populacao: %d\n", cidade2_pop);
    printf(" Area: %.2f km^2\n\n", cidade2_area);
    
    int escolha;
    printf("======================================\n");
    printf("E ai, pronto pra batalha? Escolha sua jogada:\n\n");
    printf(" [1] Populacao\n");
    printf(" [2] Area\n");
    printf(" [3] PIB\n");
    printf(" [4] Pontos Turisticos\n");
    printf(" [5] Densidade Demografica (o MENOR vence!)\n\n");
    printf("Sua escolha: ");
    
    scanf("%d", &escolha);
    printf("\n");

    switch (escolha) {
        case 1:
            printf("--- Disputa de POPULACAO ---\n");
            printf("%s: %d\n", cidade1_nome, cidade1_pop);
            printf("%s: %d\n\n", cidade2_nome, cidade2_pop);
            
            if (cidade1_pop > cidade2_pop) anunciarResultado(1, cidade1_nome, cidade2_nome);
            else if (cidade2_pop > cidade1_pop) anunciarResultado(2, cidade1_nome, cidade2_nome);
            else anunciarResultado(0, cidade1_nome, cidade2_nome);
            break;

        case 2:
            printf("--- Disputa de AREA ---\n");
            printf("%s: %.2f km^2\n", cidade1_nome, cidade1_area);
            printf("%s: %.2f km^2\n\n", cidade2_nome, cidade2_area);
            
            if (cidade1_area > cidade2_area) anunciarResultado(1, cidade1_nome, cidade2_nome);
            else if (cidade2_area > cidade1_area) anunciarResultado(2, cidade1_nome, cidade2_nome);
            else anunciarResultado(0, cidade1_nome, cidade2_nome);
            break;

        case 3:
            printf("--- Disputa de PIB ---\n");
            printf("%s: R$ %.2f bilhoes\n", cidade1_nome, cidade1_pib);
            printf("%s: R$ %.2f bilhoes\n\n", cidade2_nome, cidade2_pib);

            if (cidade1_pib > cidade2_pib) anunciarResultado(1, cidade1_nome, cidade2_nome);
            else if (cidade2_pib > cidade1_pib) anunciarResultado(2, cidade1_nome, cidade2_nome);
            else anunciarResultado(0, cidade1_nome, cidade2_nome);
            break;
        
        case 4:
            printf("--- Disputa de PONTOS TURISTICOS ---\n");
            printf("%s: %d\n", cidade1_nome, cidade1_pontosTuristicos);
            printf("%s: %d\n\n", cidade2_nome, cidade2_pontosTuristicos);

            if (cidade1_pontosTuristicos > cidade2_pontosTuristicos) anunciarResultado(1, cidade1_nome, cidade2_nome);
            else if (cidade2_pontosTuristicos > cidade1_pontosTuristicos) anunciarResultado(2, cidade1_nome, cidade2_nome);
            else anunciarResultado(0, cidade1_nome, cidade2_nome);
            break;

        case 5:
            printf("--- Disputa de DENSIDADE DEMOGRAFICA ---\n");
            printf("%s: %.2f hab/km^2\n", cidade1_nome, cidade1_densidade);
            printf("%s: %.2f hab/km^2\n\n", cidade2_nome, cidade2_densidade);

            if (cidade1_densidade < cidade2_densidade) anunciarResultado(1, cidade1_nome, cidade2_nome);
            else if (cidade2_densidade < cidade1_densidade) anunciarResultado(2, cidade1_nome, cidade2_nome);
            else anunciarResultado(0, cidade1_nome, cidade2_nome);
            break;

        default:
            printf("Opa! Opcao invalida. Tente um numero de 1 a 5 da proxima vez.\n");
            break;
    }
    
    printf("\nJogo finalizado!\n");
    return 0; 
}