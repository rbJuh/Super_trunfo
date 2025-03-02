#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Sistema de cadastro de cartas de cidades.

int main() {

    // Variáveis para os dados da cidade da carta 1

    char estado1;   // Letra do estado (A, B, C, ..., H)
    char cidade1[50];
    int codigo1;
    int populacao1;
    float pib1;
    float area1;
    int pontos_turisticos1;
    int numcidade1; // Número da cidade (1, 2, 3, 4)



     // Variáveis para os dados da cidade da carta 2

     char estado2;   // Letra do estado (A, B, C, ..., H)
     char cidade2[50];
     int codigo2;
     int populacao2;
     float pib2;
     float area2;
     int pontos_turisticos2;
     int numcidade2; // Número da cidade (1, 2, 3, 4)




    

    printf("\nBem-vindo ao jogo Países!\n"); // Mensagem para o usuário

    // Cadastro das cartas :

    printf("\nCadastre sua primeira carta:\n"); // Mensagem para o usuário




    // Solicitar ao usuário informações sobre a carta 1
   
    printf("Digite a letra do estado (A, B, C, ..., H): ");
    scanf(" %c", &estado1);  // Captura a letra do estado

    printf("Digite o número da cidade (1, 2, 3, 4): ");
    scanf("%d", &numcidade1);  // Captura o número da cidade

    printf("Digite o nome da sua cidade: ");
    scanf(" %s", &cidade1);  // Captura o nome da cidade

    printf("Digite a população da sua cidade: ");
    scanf("%d", &populacao1);  // Captura a população da cidade

    printf("Digite a área da sua cidade (em km²): ");
    scanf("%f", &area1);  // Captura a área da cidade

    printf("Digite o PIB da sua cidade (em bilhões): ");
    scanf("%f", &pib1);  // Captura o PIB da cidade

    printf("Digite o número de pontos turísticos da sua cidade: ");
    scanf("%d", &pontos_turisticos1);  // Captura o número de pontos turísticos da cidade



    printf("\nCadastre sua segunda carta:\n"); // Mensagem para o usuário




    // Solicitar ao usuário informações sobre a carta 2
   
    printf("\nDigite a letra do estado (A, B, C, ..., H): ");
    scanf(" %c", &estado2);  // Captura a letra do estado

    printf("Digite o número da cidade (1, 2, 3, 4): ");
    scanf("%d", &numcidade2);  // Captura o número da cidade

    printf("Digite o nome da sua cidade: ");
    scanf(" %s", &cidade2);  // Captura o nome da cidade

    printf("Digite a população da sua cidade: ");
    scanf("%d", &populacao2);  // Captura a população da cidade

    printf("Digite a área da sua cidade (em km²): ");
    scanf("%f", &area2);  // Captura a área da cidade

    printf("Digite o PIB da sua cidade (em bilhões): ");
    scanf("%f", &pib2);  // Captura o PIB da cidade

    printf("Digite o número de pontos turísticos da sua cidade: ");
    scanf("%d", &pontos_turisticos2);  // Captura o número de pontos turísticos da cidade




    // Exibição dos Dados das Cartas:

    printf("\nCartas registradas com sucesso!\n"); // Mensagem para o usuário

    // Exibindo as informações cadastradas da carta 1

    printf("\nCarta 1:\n");  // carta
    printf("Estado: %c\n", estado1);  // Estado
    printf("\nCódigo: %c%02d\n", estado1, numcidade1);  // Exibe o código da carta
    printf("Nome da cidade: %s\n", cidade1);  // Nome da cidade
    printf("População: %d\n", populacao1);  // População
    printf("Área: %.2f km²\n", area1);  // Área
    printf("PIB: %.2f bilhões de reais\n", pib1);  // PIB
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);  // Pontos turísticos



    // Exibindo as informações cadastradas da carta 2
    

    printf("\nCarta 2:\n");  // carta 
    printf("Estado: %c\n", estado2);  // Estado
    printf("\nCódigo: %c%02d\n", estado2, numcidade2);  // Exibe o código da carta
    printf("Nome da cidade: %s\n", cidade2);  // Nome da cidade
    printf("População: %d\n", populacao2);  // População
    printf("Área: %.2f km²\n", area2);  // Área
    printf("PIB: %.2f bilhões de reais\n", pib2);  // PIB
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);  // Pontos turísticos
    

    return 0;
}
