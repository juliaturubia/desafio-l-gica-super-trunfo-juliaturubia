#include <stdio.h>

int main() {
    // Variáveis da Primeira Carta
    char estadoA;
    char codigoCartaA[10];
    char nomeCidadeA[50];
    unsigned long int populacaoA;
    float areaA;
    float pibA;
    int pontosTuristicosA;

    // Variáveis da Segunda Carta
    char estadoB;
    char codigoCartaB[10];
    char nomeCidadeB[50];
    unsigned long int populacaoB;
    float areaB;
    float pibB;
    int pontosTuristicosB;

    // Entrada de dados da Primeira Carta
    printf("Digite os dados da Primeira Carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estadoA);
    getchar(); // Limpar buffer

    printf("Código da Carta (ex: A01): ");
    fgets(codigoCartaA, sizeof(codigoCartaA), stdin);

    printf("Nome da Cidade: ");
    fgets(nomeCidadeA, sizeof(nomeCidadeA), stdin);

    printf("População: ");
    scanf("%lu", &populacaoA);

    printf("Área (em km²): ");
    scanf("%f", &areaA);

    printf("PIB (em bilhões): ");
    scanf("%f", &pibA);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosA);

    // Cálculos da Primeira Carta
    float densidadePopA = populacaoA / areaA;
    float pibPerCapitaA = (pibA * 1000000000) / populacaoA;

    // Exibição dos cálculos
    printf("\nDensidade Populacional: %.2f hab/km²\n", densidadePopA);
    printf("PIB per capita: %.2f reais\n", pibPerCapitaA);

    // Entrada de dados da Segunda Carta
    printf("\nDigite os dados da Segunda Carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estadoB);
    getchar();

    printf("Código da Carta (ex: A01): ");
    fgets(codigoCartaB, sizeof(codigoCartaB), stdin);

    printf("Nome da Cidade: ");
    fgets(nomeCidadeB, sizeof(nomeCidadeB), stdin);

    printf("População: ");
    scanf("%lu", &populacaoB);

    printf("Área (em km²): ");
    scanf("%f", &areaB);

    printf("PIB (em bilhões): ");
    scanf("%f", &pibB);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosB);

    // Cálculos da Segunda Carta
    float densidadePopB = populacaoB / areaB;
    float pibPerCapitaB = (pibB * 1000000000) / populacaoB;

    // Exibição dos cálculos
    printf("\nDensidade Populacional: %.2f hab/km²\n", densidadePopB);
    printf("PIB per capita: %.2f reais\n", pibPerCapitaB);

    // Comparação pelo PIB per capita
    printf("\nComparação de Cartas (Atributo: PIB per capita):\n");
    printf("Carta 1 - %.2f reais\n", pibPerCapitaA);
    printf("Carta 2 - %.2f reais\n", pibPerCapitaB);

    if (pibPerCapitaA > pibPerCapitaB) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (pibPerCapitaA < pibPerCapitaB) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
