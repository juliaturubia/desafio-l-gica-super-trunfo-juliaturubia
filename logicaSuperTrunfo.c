#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis da Primeira Carta
    char estadoA, codigoCartaA[10], nomeCidadeA[50];
    unsigned long int populacaoA;
    float areaA, pibA;
    int pontosTuristicosA;

    // Variáveis da Segunda Carta
    char estadoB, codigoCartaB[10], nomeCidadeB[50];
    unsigned long int populacaoB;
    float areaB, pibB;
    int pontosTuristicosB;

    // Entrada de dados da Primeira Carta
    printf("Digite os dados da Primeira Carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estadoA);
    while (getchar() != '\n');

    printf("Código da Carta (ex: A01): ");
    fgets(codigoCartaA, sizeof(codigoCartaA), stdin);
    codigoCartaA[strcspn(codigoCartaA, "\n")] = '\0';

    printf("Nome da Cidade: ");
    fgets(nomeCidadeA, sizeof(nomeCidadeA), stdin);
    nomeCidadeA[strcspn(nomeCidadeA, "\n")] = '\0';

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

    // Entrada de dados da Segunda Carta
    printf("\nDigite os dados da Segunda Carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estadoB);
    while (getchar() != '\n');

    printf("Código da Carta (ex: A01): ");
    fgets(codigoCartaB, sizeof(codigoCartaB), stdin);
    codigoCartaB[strcspn(codigoCartaB, "\n")] = '\0';

    printf("Nome da Cidade: ");
    fgets(nomeCidadeB, sizeof(nomeCidadeB), stdin);
    nomeCidadeB[strcspn(nomeCidadeB, "\n")] = '\0';

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

    int opcao1, opcao2;
    float valorA1 = 0, valorB1 = 0;
    float valorA2 = 0, valorB2 = 0;

    // Menu para escolher o primeiro atributo
    printf("\n  Escolha o PRIMEIRO atributo para comparar  \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao1);

    // Verificar escolha inválida
    if (opcao1 < 1 || opcao1 > 5) {
        printf("Opção inválida! Encerrando o programa.\n");
        return 1;
    }

    // Menu para escolher o segundo atributo (sem repetir o primeiro)
    printf("\n  Escolha o SEGUNDO atributo para comparar  \n");
    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("1. População\n"); break;
                case 2: printf("2. Área\n"); break;
                case 3: printf("3. PIB\n"); break;
                case 4: printf("4. Número de Pontos Turísticos\n"); break;
                case 5: printf("5. Densidade Demográfica\n"); break;
            }
        }
    }
    printf("Digite a opção: ");
    scanf("%d", &opcao2);

    // Verificar escolha inválida
    if (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1) {
        printf("Opção inválida! Encerrando o programa.\n");
        return 1;
    }

    printf("\nComparação entre %s e %s\n", nomeCidadeA, nomeCidadeB);

    // Função para comparar o primeiro atributo
    switch (opcao1) {
        case 1:
            printf("População: %lu vs %lu\n", populacaoA, populacaoB);
            valorA1 = populacaoA;
            valorB1 = populacaoB;
            break;
        case 2:
            printf("Área: %.2f km² vs %.2f km²\n", areaA, areaB);
            valorA1 = areaA;
            valorB1 = areaB;
            break;
        case 3:
            printf("PIB: %.2f bilhões vs %.2f bilhões\n", pibA, pibB);
            valorA1 = pibA;
            valorB1 = pibB;
            break;
        case 4:
            printf("Pontos Turísticos: %d vs %d\n", pontosTuristicosA, pontosTuristicosB);
            valorA1 = pontosTuristicosA;
            valorB1 = pontosTuristicosB;
            break;
        case 5:
            printf("Densidade Demográfica: %.2f hab/km² vs %.2f hab/km²\n", densidadePopA, densidadePopB);
            valorA1 = densidadePopA;
            valorB1 = densidadePopB;
            break;
    }

    // Função para comparar o segundo atributo
    switch (opcao2) {
        case 1:
            printf("População: %lu vs %lu\n", populacaoA, populacaoB);
            valorA2 = populacaoA;
            valorB2 = populacaoB;
            break;
        case 2:
            printf("Área: %.2f km² vs %.2f km²\n", areaA, areaB);
            valorA2 = areaA;
            valorB2 = areaB;
            break;
        case 3:
            printf("PIB: %.2f bilhões vs %.2f bilhões\n", pibA, pibB);
            valorA2 = pibA;
            valorB2 = pibB;
            break;
        case 4:
            printf("Pontos Turísticos: %d vs %d\n", pontosTuristicosA, pontosTuristicosB);
            valorA2 = pontosTuristicosA;
            valorB2 = pontosTuristicosB;
            break;
        case 5:
            printf("Densidade Demográfica: %.2f hab/km² vs %.2f hab/km²\n", densidadePopA, densidadePopB);
            valorA2 = densidadePopA;
            valorB2 = densidadePopB;
            break;
    }

    // Regras de quem vence em cada atributo
    float pontosCartaA = 0, pontosCartaB = 0;

    pontosCartaA += (opcao1 == 5) ? (valorA1 < valorB1 ? 1 : 0) : (valorA1 > valorB1 ? 1 : 0);
    pontosCartaB += (opcao1 == 5) ? (valorB1 < valorA1 ? 1 : 0) : (valorB1 > valorA1 ? 1 : 0);

    pontosCartaA += (opcao2 == 5) ? (valorA2 < valorB2 ? 1 : 0) : (valorA2 > valorB2 ? 1 : 0);
    pontosCartaB += (opcao2 == 5) ? (valorB2 < valorA2 ? 1 : 0) : (valorB2 > valorA2 ? 1 : 0);

    // Soma total dos atributos
    float somaA = valorA1 + valorA2;
    float somaB = valorB1 + valorB2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nomeCidadeA, somaA);
    printf("%s: %.2f\n", nomeCidadeB, somaB);

    // Resultado final
    if (somaA > somaB)
        printf("\nResultado final: %s venceu!\n", nomeCidadeA);
    else if (somaB > somaA)
        printf("\nResultado final: %s venceu!\n", nomeCidadeB);
    else
        printf("\nResultado final: Empate!\n");

    return 0;
}
