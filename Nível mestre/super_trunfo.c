#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Nível mestre.

// Variáveis globais para os dados da cidade da carta 1
char estado1;                // Letra do estado (A, B, C, ..., H)
char cidade1[50];            // Nome da cidade
int codigo1;                 // Código da cidade
int populacao1;              // População da cidade
float pib1;                  // PIB da cidade (em bilhões)
float area1;                 // Área da cidade (em km²)
int pontos_turisticos1;      // Número de pontos turísticos da cidade
int numcidade1;              // Número da cidade (1, 2, 3, 4)

// Variáveis globais para os dados da cidade da carta 2
char estado2;                // Letra do estado (A, B, C, ..., H)
char cidade2[50];            // Nome da cidade
int codigo2;                 // Código da cidade
int populacao2;              // População da cidade
float pib2;                  // PIB da cidade (em bilhões)
float area2;                 // Área da cidade (em km²)
int pontos_turisticos2;      // Número de pontos turísticos da cidade
int numcidade2;              // Número da cidade (1, 2, 3, 4)

// Variáveis globais para os cálculos
float densidade_populacional1, pib_per_capita1;  // Densidade populacional e PIB per capita para a carta 1
float densidade_populacional2, pib_per_capita2;  // Densidade populacional e PIB per capita para a carta 2

// Variáveis globais para o Super Poder
float super_poder1, super_poder2;

// Função para calcular a Densidade Populacional, PIB per Capita e o Super Poder
void calculos()
{
    // Calcular a densidade populacional e PIB per capita da carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;  // PIB em reais

    // Calcular a densidade populacional e PIB per capita da carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;  // PIB em reais

    // Calcular o Super Poder das cartas (quanto maior, mais poderoso)
    super_poder1 = (float)populacao1 + area1 + pib1 * 1000000000 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);
    super_poder2 = (float)populacao2 + area2 + pib2 * 1000000000 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);
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
    printf("Super Poder: %.2f\n", super_poder1);             // Super Poder

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
    printf("Super Poder: %.2f\n", super_poder2);             // Super Poder
}

// Função para comparar os atributos das duas cartas
void comparar()
{
    // Comparação da População
    printf("\nPopulação: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);

    // Comparação da Área
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);

    // Comparação do PIB
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);

    // Comparação do número de Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0);

    // Comparação da Densidade Populacional
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_populacional1 < densidade_populacional2) ? 1 : 2, (densidade_populacional1 < densidade_populacional2) ? 1 : 0);

    // Comparação do PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2) ? 1 : 0);

    // Comparação do Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2) ? 1 : 0);
}

int main()
{
    // Cadastro da primeira carta
    printf("\nCadastre sua primeira carta:\n");
    printf("Digite a letra do estado (A, B, C, ..., H): ");
    scanf(" %c", &estado1);                                  // Captura a letra do estado
    printf("Digite o número da cidade (1, 2, 3, 4): ");
    scanf("%d", &numcidade1);                                // Captura o número da cidade
    printf("Digite o nome da sua cidade: ");
    scanf(" %s", cidade1);                                   // Captura o nome da cidade
    printf("Digite a população da sua cidade: ");
    scanf("%d", &populacao1);                                // Captura a população da cidade
    printf("Digite a área da sua cidade (em km²): ");
    scanf("%f", &area1);                                     // Captura a área da cidade
    printf("Digite o PIB da sua cidade (em bilhões): ");
    scanf("%f", &pib1);                                      // Captura o PIB da cidade
    printf("Digite o número de pontos turísticos da sua cidade: ");
    scanf("%d", &pontos_turisticos1);                         // Captura o número de pontos turísticos

    // Cadastro da segunda carta
    printf("\nCadastre sua segunda carta:\n");
    printf("Digite a letra do estado (A, B, C, ..., H): ");
    scanf(" %c", &estado2);                                  // Captura a letra do estado
    printf("Digite o número da cidade (1, 2, 3, 4): ");
    scanf("%d", &numcidade2);                                // Captura o número da cidade
    printf("Digite o nome da sua cidade: ");
    scanf(" %s", cidade2);                                   // Captura o nome da cidade
    printf("Digite a população da sua cidade: ");
    scanf("%d", &populacao2);                                // Captura a população da cidade
    printf("Digite a área da sua cidade (em km²): ");
    scanf("%f", &area2);                                     // Captura a área da cidade
    printf("Digite o PIB da sua cidade (em bilhões): ");
    scanf("%f", &pib2);                                      // Captura o PIB da cidade
    printf("Digite o número de pontos turísticos da sua cidade: ");
    scanf("%d", &pontos_turisticos2);                         // Captura o número de pontos turísticos

    // Realizando os cálculos para as duas cartas
    calculos();

    // Exibindo as informações de ambas as cartas
    printf("\nCartas registradas com sucesso!\n");
    exibir();

    // Comparando os atributos das duas cartas
    printf("\nComparação de Cartas:\n");
    comparar();

    return 0;
}
