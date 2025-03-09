#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Sistema de cadastro de cartas de cidades.

// Variáveis da carta 1
char estado1;                // Letra do estado (A, B, C, ..., H)
char cidade1[50];            // Nome da cidade
int codigo1;                 // Código da cidade
int populacao1;              // População da cidade
float pib1;                  // PIB da cidade (em bilhões)
float area1;                 // Área da cidade (em km²)
int pontos_turisticos1;      // Número de pontos turísticos da cidade
int numcidade1;              // Número da cidade (1, 2, 3, 4)
float densidade_populacional1; // Densidade populacional
float pib_per_capita1; // PIB per capita

// Variáveis da carta 2
char estado2;                // Letra do estado (A, B, C, ..., H)
char cidade2[50];            // Nome da cidade
int codigo2;                 // Código da cidade
int populacao2;              // População da cidade
float pib2;                  // PIB da cidade (em bilhões)
float area2;                 // Área da cidade (em km²)
int pontos_turisticos2;      // Número de pontos turísticos da cidade
int numcidade2;              // Número da cidade (1, 2, 3, 4)
float densidade_populacional2; // Densidade populacional
float pib_per_capita2; // PIB per capita

// Função para calcular a Densidade Populacional e o PIB per Capita
void calculos()
{
    // Calcular a densidade populacional e PIB per capita da carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;  // PIB em reais

    // Calcular a densidade populacional e PIB per capita da carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;  // PIB em reais
}

// Função para exibir as informações das cartas
void exibir()
{
    // Exibindo as informações da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);                         // Estado
    printf("Código: %c%02d\n", estado1, numcidade1);         // Exibe o código da carta
    printf("Nome da cidade: %s\n", cidade1);                 // Nome da cidade
    printf("População: %d\n", populacao1);                   // População
    printf("Área: %.2f km²\n", area1);                       // Área
    printf("PIB: %.2f bilhões de reais\n", pib1);            // PIB
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1); // Pontos turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1); // Densidade populacional
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1); // PIB per Capita

    // Exibindo as informações da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);                         // Estado
    printf("Código: %c%02d\n", estado2, numcidade2);         // Exibe o código da carta
    printf("Nome da cidade: %s\n", cidade2);                 // Nome da cidade
    printf("População: %d\n", populacao2);                   // População
    printf("Área: %.2f km²\n", area2);                       // Área
    printf("PIB: %.2f bilhões de reais\n", pib2);            // PIB
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2); // Pontos turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2); // Densidade populacional
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2); // PIB per Capita
}

int main()
{
    // Cadastro da primeira carta
    printf("\nCadastre sua primeira carta:\n");
    printf("Digite a letra do estado (A, B, C, ..., H): ");
    scanf(" %c", &estado1);                                  // letra do estado
    printf("Digite o número da cidade (1, 2, 3, 4): ");
    scanf("%d", &numcidade1);                                // número da cidade
    printf("Digite o nome da sua cidade: ");
    scanf(" %s", cidade1);                                   // nome da cidade
    printf("Digite a população da sua cidade: ");
    scanf("%d", &populacao1);                                // população da cidade
    printf("Digite a área da sua cidade (em km²): ");
    scanf("%f", &area1);                                     // área da cidade
    printf("Digite o PIB da sua cidade (em bilhões): ");
    scanf("%f", &pib1);                                      // PIB da cidade
    printf("Digite o número de pontos turísticos da sua cidade: ");
    scanf("%d", &pontos_turisticos1);                         // número de pontos turísticos

    // Cadastro da segunda carta
    printf("\nCadastre sua segunda carta:\n");
    printf("Digite a letra do estado (A, B, C, ..., H): ");
    scanf(" %c", &estado2);                                  // letra do estado
    printf("Digite o número da cidade (1, 2, 3, 4): ");
    scanf("%d", &numcidade2);                                // número da cidade
    printf("Digite o nome da sua cidade: ");
    scanf(" %s", cidade2);                                   // nome da cidade
    printf("Digite a população da sua cidade: ");
    scanf("%d", &populacao2);                                // população da cidade
    printf("Digite a área da sua cidade (em km²): ");
    scanf("%f", &area2);                                     // área da cidade
    printf("Digite o PIB da sua cidade (em bilhões): ");
    scanf("%f", &pib2);                                      // PIB da cidade
    printf("Digite o número de pontos turísticos da sua cidade: ");
    scanf("%d", &pontos_turisticos2);                         // número de pontos turísticos

    // Realizando os cálculos para as duas cartas
    calculos();

    // Exibindo as informações de ambas as cartas
    printf("\nCartas registradas com sucesso!\n");
    exibir();

    return 0;
}
