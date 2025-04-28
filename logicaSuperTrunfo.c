#include <stdio.h>
#include <string.h>

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
    while (getchar() != '\n'); // Limpar buffer

    printf("Código da Carta (ex: A01): ");
    fgets(codigoCartaA, sizeof(codigoCartaA), stdin);
    codigoCartaA[strcspn(codigoCartaA, "\n")] = '\0'; // Remove \n

    printf("Nome da Cidade: ");
    fgets(nomeCidadeA, sizeof(nomeCidadeA), stdin);
    nomeCidadeA[strcspn(nomeCidadeA, "\n")] = '\0'; // Remove \n

    printf("População: ");
    scanf("%lu", &populacaoA);
    while (getchar() != '\n');

    printf("Área (em km²): ");
    scanf("%f", &areaA);
    while (getchar() != '\n');

    printf("PIB (em bilhões): ");
    scanf("%f", &pibA);
    while (getchar() != '\n');

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosA);
    while (getchar() != '\n');

    // Cálculos da Primeira Carta
    float densidadePopA = populacaoA / areaA;
    float pibPerCapitaA = (pibA * 1000000000) / populacaoA;

    // Entrada de dados da Segunda Carta
    printf("\nDigite os dados da Segunda Carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estadoB);
    while (getchar() != '\n'); // Limpar buffer

    printf("Código da Carta (ex: A01): ");
    fgets(codigoCartaB, sizeof(codigoCartaB), stdin);
    codigoCartaB[strcspn(codigoCartaB, "\n")] = '\0'; // Remove \n

    printf("Nome da Cidade: ");
    fgets(nomeCidadeB, sizeof(nomeCidadeB), stdin);
    nomeCidadeB[strcspn(nomeCidadeB, "\n")] = '\0'; // Remove \n

    printf("População: ");
    scanf("%lu", &populacaoB);
    while (getchar() != '\n');

    printf("Área (em km²): ");
    scanf("%f", &areaB);
    while (getchar() != '\n');

    printf("PIB (em bilhões): ");
    scanf("%f", &pibB);
    while (getchar() != '\n');

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosB);
    while (getchar() != '\n');

    // Cálculos da Segunda Carta
    float densidadePopB = populacaoB / areaB;
    float pibPerCapitaB = (pibB * 1000000000) / populacaoB;

    int opcao;

    // Menu interativo
    printf("\n=== Escolha o atributo para comparar ===\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s\n", nomeCidadeA, nomeCidadeB);

    switch (opcao) {
        case 1: // População
            printf("População: %lu vs %lu\n", populacaoA, populacaoB);
            if (populacaoA > populacaoB) {
                printf("Resultado: %s venceu!\n", nomeCidadeA);
            } else if (populacaoA < populacaoB) {
                printf("Resultado: %s venceu!\n", nomeCidadeB);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Área: %.2f km² vs %.2f km²\n", areaA, areaB);
            if (areaA > areaB) {
                printf("Resultado: %s venceu!\n", nomeCidadeA);
            } else if (areaA < areaB) {
                printf("Resultado: %s venceu!\n", nomeCidadeB);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("PIB: %.2f bilhões vs %.2f bilhões\n", pibA, pibB);
            if (pibA > pibB) {
                printf("Resultado: %s venceu!\n", nomeCidadeA);
            } else if (pibA < pibB) {
                printf("Resultado: %s venceu!\n", nomeCidadeB);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Pontos Turísticos: %d vs %d\n", pontosTuristicosA, pontosTuristicosB);
            if (pontosTuristicosA > pontosTuristicosB) {
                printf("Resultado: %s venceu!\n", nomeCidadeA);
            } else if (pontosTuristicosA < pontosTuristicosB) {
                printf("Resultado: %s venceu!\n", nomeCidadeB);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica
            printf("Densidade Demográfica: %.2f hab/km² vs %.2f hab/km²\n", densidadePopA, densidadePopB);
            if (densidadePopA < densidadePopB) {
                printf("Resultado: %s venceu!\n", nomeCidadeA);
            } else if (densidadePopA > densidadePopB) {
                printf("Resultado: %s venceu!\n", nomeCidadeB);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
