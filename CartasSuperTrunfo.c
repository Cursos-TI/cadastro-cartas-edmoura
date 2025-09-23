#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível aventureiro

int main()
{
    // Card One
    char state_card_one;
    char card_code_card_one[4];
    char city_name_card_one[50];
    int population_card_one;
    float area_card_one;
    float gdp_card_one;
    int number_of_touristic_points_card_one;
    float population_density_card_one;
    float gdp_per_capita_card_one;

    // Card Two
    char state_card_two;
    char card_code_card_two[4];
    char city_name_card_two[50];
    int population_card_two;
    float area_card_two;
    float gdp_card_two;
    int number_of_touristic_points_card_two;
    float population_density_card_two;
    float gdp_per_capita_card_two;

    // Leitura dos dados da carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &state_card_one);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", card_code_card_one);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", city_name_card_one);
    printf("População: ");
    scanf("%d", &population_card_one);
    printf("Área (km²): ");
    scanf("%f", &area_card_one);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &gdp_card_one);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &number_of_touristic_points_card_one);

    printf("\n");

    // Leitura dos dados da carta 2
    printf("Digite os dados da Carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &state_card_two);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", card_code_card_two);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", city_name_card_two);
    printf("População: ");
    scanf("%d", &population_card_two);
    printf("Área (km²): ");
    scanf("%f", &area_card_two);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &gdp_card_two);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &number_of_touristic_points_card_two);

    printf("\n");

    // Cálculos para carta 1
    population_density_card_one = (float)population_card_one / area_card_one;
    gdp_per_capita_card_one = (gdp_card_one * 1000000000.0) / population_card_one;

    // Cálculos para carta 2
    population_density_card_two = (float)population_card_two / area_card_two;
    gdp_per_capita_card_two = (gdp_card_two * 1000000000.0) / population_card_two;

    // Área para exibição dos dados da cidade
    printf("Carta 1:\n");
    printf("Estado: %c\n", state_card_one);
    printf("Código: %s\n", card_code_card_one);
    printf("Nome da Cidade: %s\n", city_name_card_one);
    printf("População: %d\n", population_card_one);
    printf("Área: %.2f km²\n", area_card_one);
    printf("PIB: %.2f bilhões de reais\n", gdp_card_one);
    printf("Número de Pontos Turísticos: %d\n", number_of_touristic_points_card_one);
    printf("Densidade Populacional: %.2f hab/km²\n", population_density_card_one);
    printf("PIB per Capita: %.2f reais\n", gdp_per_capita_card_one);

    printf("\n");

    // Exibição dos dados da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", state_card_two);
    printf("Código: %s\n", card_code_card_two);
    printf("Nome da Cidade: %s\n", city_name_card_two);
    printf("População: %d\n", population_card_two);
    printf("Área: %.2f km²\n", area_card_two);
    printf("PIB: %.2f bilhões de reais\n", gdp_card_two);
    printf("Número de Pontos Turísticos: %d\n", number_of_touristic_points_card_two);
    printf("Densidade Populacional: %.2f hab/km²\n", population_density_card_two);
    printf("PIB per Capita: %.2f reais\n", gdp_per_capita_card_two);
    
    return 0;
}