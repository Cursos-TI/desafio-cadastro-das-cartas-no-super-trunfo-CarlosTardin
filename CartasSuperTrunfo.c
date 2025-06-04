#include <stdio.h>

int main() {

    int populacao1;
    float area1;
    float pib1;
    int pontostur1;

    int populacao2;
    float area2;
    float pib2;
    int pontostur2;

    // Entrada dos dados da carta1
    printf("Cadastro da Carta 1:\n");
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontostur1);

    // Entrada dos dados da carta2
    printf("\nCadastro da Carta 2:\n");
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontostur2);

    printf("\n Dados da Carta 1 \n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontostur1);

    printf("\n Dados da Carta 2 \n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontostur2);

    return 0;
}
