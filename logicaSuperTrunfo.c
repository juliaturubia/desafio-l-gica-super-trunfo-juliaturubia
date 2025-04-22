#include <stdio.h>

int main() {
    char estadoa;
    char codigodacartaa[10];
    char nomedacidadea[50];
    int populacaoa;  
    float areaa;
    float piba; 
    int pontosturisticosa;


    char estadob;
    char codigodacartab[10];
    char nomedacidadeb[50];
    int populacaob;  
    float areab;
    float pibb; 
    int pontosturisticosb;

    printf("\nDigite os dados da Primeira Carta:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estadoa);
    getchar(); // limpa o Enter

    printf("Código da Carta (ex: A01): ");
    fgets(codigodacartaa, sizeof(codigodacartaa), stdin);

    printf("Nome da Cidade: ");
    fgets(nomedacidadea, sizeof(nomedacidadea), stdin);

    printf("População: ");
    scanf("%d", &populacaoa);

    getchar();
    printf("Área (em km²): ");
    scanf("%f", &areaa);

    getchar();
    printf("PIB (em bilhões): ");
    scanf("%f", &piba);

    getchar();
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticosa);


    printf("\nDigite os dados da Segunda Carta:\n");

    getchar(); // limpa o Enter
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estadob);

    getchar(); // limpa o Enter
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigodacartab);

    printf("Nome da Cidade: ");
    fgets(nomedacidadeb, sizeof(nomedacidadeb), stdin);

    getchar();
    printf("População: ");
    scanf("%d", &populacaob);

    getchar();
    printf("Área (em km²): ");
    scanf("%f", &areab);

    getchar();
    printf("PIB (em bilhões): ");
    scanf("%f", &pibb);

    getchar();
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticosb);

    return 0;
}
