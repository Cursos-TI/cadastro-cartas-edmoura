#include <stdio.h>

#define MAX_CITY_NAME 50
#define CODE_SIZE 4

typedef struct {
    char state;
    char code[CODE_SIZE];
    char cityName[MAX_CITY_NAME];
    unsigned long int population;
    float area;
    float gdp;
    int touristSpots;
    float populationDensity;
    float gdpPerCapita;
    float superPower;
} Card;

void calculateAttributes(Card *c) {
    c->populationDensity = (float)c->population / c->area;
    c->gdpPerCapita = (c->gdp * 1000000000.0f) / c->population;
    c->superPower = (float)c->population 
                  + c->area 
                  + c->gdp 
                  + c->touristSpots 
                  + c->gdpPerCapita 
                  + (1.0f / c->populationDensity); 
}

void readCardData(Card *c, int number) {
    printf("Digite os dados da Carta %d:\n", number);
    printf("Estado (A-H): ");
    scanf(" %c", &c->state);
    printf("Código (ex: A01): ");
    scanf("%s", c->code);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", c->cityName);
    printf("População: ");
    scanf("%lu", &c->population);
    printf("Área (km²): ");
    scanf("%f", &c->area);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &c->gdp);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &c->touristSpots);
    printf("\n");
}

void showCard(Card c, int number) {
    printf("Carta %d:\n", number);
    printf("Estado: %c\n", c.state);
    printf("Código: %s\n", c.code);
    printf("Nome da Cidade: %s\n", c.cityName);
    printf("População: %lu\n", c.population);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões de reais\n", c.gdp);
    printf("Número de Pontos Turísticos: %d\n", c.touristSpots);
    printf("Densidade Populacional: %.2f hab/km²\n", c.populationDensity);
    printf("PIB per Capita: %.2f reais\n", c.gdpPerCapita);
    printf("Super Poder: %.2f\n", c.superPower);
    printf("\n");
}

void printCardField(const char *fieldName, int cardWins) {
    if (cardWins) {
        printf("%s: Carta 1 venceu (%d)\n", fieldName, cardWins);
    } else {
        printf("%s: Carta 2 venceu (%d)\n", fieldName, cardWins);
    }
}

void compareCards(Card c1, Card c2) {
    printf("Comparação de Cartas:\n");
    printCardField("População", c1.population > c2.population);
    printCardField("Área", c1.area > c2.area);
    printCardField("PIB", c1.gdp > c2.gdp);
    printCardField("Pontos Turísticos", c1.touristSpots > c2.touristSpots);
    printCardField("Densidade Populacional", c1.populationDensity < c2.populationDensity);
    printCardField("PIB per Capita", c1.gdpPerCapita > c2.gdpPerCapita);
    printCardField("Super Poder", c1.superPower > c2.superPower);
}

int main() {
    Card c1, c2;

    readCardData(&c1, 1);
    readCardData(&c2, 2);

    calculateAttributes(&c1);
    calculateAttributes(&c2);

    showCard(c1, 1);
    showCard(c2, 2);

    compareCards(c1, c2);

    return 0;
}