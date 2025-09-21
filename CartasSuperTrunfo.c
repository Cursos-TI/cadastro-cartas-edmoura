#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
    // Área para definição das variáveis para armazenar as propriedades das cidades
    // Card One
    char stateCardOne;
    char cardCodeCardOne[4];
    char cityNameCardOne[50];
    int populationCardOne;
    float areaCardOne;
    float gdpCardOne;
    int numberOfTouristicPointsCardOne;

    // Card Two
    char stateCardTwo;
    char cardCodeCardTwo[4];
    char cityNameCardTwo[50];
    int populationCardTwo;
    float areaCardTwo;
    float gdpCardTwo;
    int numberOfTouristicPointsCardTwo;

    // Área para entrada de dados
    // Leitura dos dados da carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &stateCardOne);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", cardCodeCardOne);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cityNameCardOne);
    printf("População: ");
    scanf("%d", &populationCardOne);
    printf("Área (km²): ");
    scanf("%f", &areaCardOne);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &gdpCardOne);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numberOfTouristicPointsCardOne);

    printf("\n");

    // Leitura dos dados da carta 2
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &stateCardTwo);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", cardCodeCardTwo);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cityNameCardTwo);
    printf("População: ");
    scanf("%d", &populationCardTwo);
    printf("Área (km²): ");
    scanf("%f", &areaCardTwo);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &gdpCardTwo);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numberOfTouristicPointsCardTwo);

    printf("\n");

    // Área para exibição dos dados da cidade
    printf("Carta 1:\n");
    printf("Estado: %c\n", stateCardOne);
    printf("Código: %s\n", cardCodeCardOne);
    printf("Nome da Cidade: %s\n", cityNameCardOne);
    printf("População: %d\n", populationCardOne);
    printf("Área: %.2f km²\n", areaCardOne);
    printf("PIB: %.2f bilhões de reais\n", gdpCardOne);
    printf("Número de Pontos Turísticos: %d\n", numberOfTouristicPointsCardOne);

    printf("\n");

    // Exibição dos dados da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", stateCardTwo);
    printf("Código: %s\n", cardCodeCardTwo);
    printf("Nome da Cidade: %s\n", cityNameCardTwo);
    printf("População: %d\n", populationCardTwo);
    printf("Área: %.2f km²\n", areaCardTwo);
    printf("PIB: %.2f bilhões de reais\n", gdpCardTwo);
    printf("Número de Pontos Turísticos: %d\n", numberOfTouristicPointsCardTwo);
    
    return 0;
}
