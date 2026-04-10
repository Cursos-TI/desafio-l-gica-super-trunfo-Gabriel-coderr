#include <stdio.h>

int main() {

    // =========================
    // Carta 1
    // =========================
    char estado1[20] = "SP";
    char codigo1[4] = "A01";
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 11904961;
    float area1 = 1521.11;
    float pib1 = 344.48;
    int pontos1 = 50;

    float densidade1, pibPerCapita1;

    // =========================
    // Carta 2
    // =========================
    char estado2[20] = "RJ";
    char codigo2[4] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6730729;
    float area2 = 1200.25;
    float pib2 = 117.28;
    int pontos2 = 30;

    float densidade2, pibPerCapita2;

    // =========================
    // Cálculos
    // =========================
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // =========================
    // Exibição Carta 1
    // =========================
    printf("=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    // =========================
    // Exibição Carta 2
    // =========================
    printf("=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);

    // =========================
    // Comparação (POPULAÇÃO)
    // =========================
    printf("=== Comparacao de Cartas (Atributo: Populacao) ===\n\n");

    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}