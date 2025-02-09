#include <stdio.h>

// Definindo o número de cartas a serem cadastradas: 8 estados x 4 cidades = 32 cartas.
#define NUM_CARTAS 32

// Estrutura para representar uma carta (cidade)
typedef struct {
    char estado;           // Ex.: 'A' (estado)
    char codigo[4];        // Ex.: "A01" (código da carta)
    char nomeCidade[50];   // Nome da cidade (ex.: "São Paulo")
    int populacao;         // População da cidade
    float area;            // Área em km²
    float pib;             // PIB da cidade
    int pontosTuristicos;  // Número de pontos turísticos
} Carta;

int main() {
    // Declaração de um vetor para armazenar todas as cartas.
    Carta cartas[NUM_CARTAS];
    int i; // Variável para controle do laço de repetição

    printf("=== Cadastro das Cartas do Super Trunfo - Países ===\n");
    printf("Serão cadastradas %d cartas.\n", NUM_CARTAS);

    // Laço para cadastro de cada carta
    for (i = 0; i < NUM_CARTAS; i++) {
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);

        // Leitura do Estado (letra entre A e H)
        printf("Digite o estado (A a H): ");
        // O espaço antes de %c descarta qualquer caractere em branco residual
        scanf(" %c", &cartas[i].estado);

        // Leitura do Código da carta (ex.: A01)
        printf("Digite o código da carta (ex: A01): ");
        scanf("%s", cartas[i].codigo);

        // Leitura do Nome da cidade (permitindo espaços)
        printf("Digite o nome da cidade: ");
        // O formato " %[^\n]" lê até o fim da linha (incluindo espaços)
        scanf(" %[^\n]", cartas[i].nomeCidade);

        // Leitura da População
        printf("Digite a população: ");
        scanf("%d", &cartas[i].populacao);

        // Leitura da Área (em km²)
        printf("Digite a área (em km²): ");
        scanf("%f", &cartas[i].area);

        // Leitura do PIB
        printf("Digite o PIB: ");
        scanf("%f", &cartas[i].pib);

        // Leitura do Número de pontos turísticos
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);
    }

    // Exibição dos dados cadastrados
    printf("\n=== Cartas Cadastradas ===\n");
    for (i = 0; i < NUM_CARTAS; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Código da Carta: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("Número de Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
    }

    return 0;
}
