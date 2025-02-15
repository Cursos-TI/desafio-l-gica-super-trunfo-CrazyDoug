// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Feito pelo aluno: Douglas Alves Costa

#include <stdio.h>

int main (){
    char estado1[3], estado2[3];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    int opcao;

    // Função para digitar as variaveis das cartas
    printf("\n=== Cadastro da primeira carta ===\n");
    printf("Digite o estado: ");
    scanf("%s", &estado1);
    printf("Digite o código da carta: ");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n=== Cadastro da segunda carta ===\n");
    printf("Digite o estado: ");
    scanf("%s", &estado2);
    printf("Digite o código da carta: ");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Função para calcular variaveis das cartas
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pib_per_capita1 + densidade_populacional1 + pontos_turisticos1;
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pib_per_capita2 + densidade_populacional2 + pontos_turisticos2;

    // Menu interativo do jogo
    printf("\n=== Escolha um atributo para comparar ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("\nEscolha:");
    scanf("%d", &opcao);

    // Função para exibir a comparação das cartas e exibir o resultado
    printf("\n=== Comparação entre as Cartas ===\n");
    switch (opcao) {
        case 1:
            if (populacao1 > populacao2) {
                printf("A cidade vencedora é: %s\n", cidade1);
                printf("Venceu pela População!\n");
            } else if (populacao2 > populacao1) {
                printf("A cidade vencedora é: %s\n", cidade2);
                printf("Venceu pela População!\n");
            } else { 
                printf("Empate!\n");
            }
            break;
        
        case 2:
            if (area1 > area2) {
                printf("A cidade vencedora é: %s\n", cidade1);
                printf("Venceu pela Área!\n");
            } else if (area2 > area1) {
                printf("A cidade vencedora é: %s\n", cidade2);
                printf("Venceu pela Área!\n");
            } else { 
                printf("Empate!\n");
            }
            break;

        case 3:
            if (pib1 > pib2) {
                printf("A cidade vencedora é: %s\n", cidade1);
                printf("Venceu pelo PIB!\n");
            } else if (pib2 > pib1) {
                printf("A cidade vencedora é: %s\n", cidade2);
                printf("Venceu pelo PIB!\n");
            } else {     
                printf("Empate!\n");                
            }
            break;

        case 4: // Pontos Turísticos
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("A cidade vencedora é: %s\n", cidade1);
                printf("Venceu pelos Pontos Turísticos!\n");
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("A cidade vencedora é: %s\n", cidade2);
                printf("Venceu pelos Pontos Turísticos!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade Populacional
            if (densidade_populacional1 < densidade_populacional2) {
                printf("A cidade vencedora é: %s\n", cidade1);
                printf("Cidade 1 venceu pela menor Densidade Populacional!\n");
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("A cidade vencedora é: %s\n", cidade2);
                printf("Cidade 2 venceu pela menor Densidade Populacional!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 6: // PIB per Capita
            if (pib_per_capita1 > pib_per_capita2) {
                printf("A cidade vencedora é: %s\n", cidade1);
                printf("Cidade 1 venceu pelo PIB per Capita!\n");
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("A cidade vencedora é: %s\n", cidade2);
                printf("Cidade 2 venceu pelo PIB per Capita!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 7: // Super Poder
            if (super_poder1 > super_poder2) {
                printf("A cidade vencedora é: %s\n", cidade1);
                printf("Cidade 1 venceu pelo Super Poder!\n");
            } else if (super_poder2 > super_poder1) {
                printf("A cidade vencedora é: %s\n", cidade2);
                printf("Cidade 2 venceu pelo Super Poder!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}