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
    int opcao1, opcao2;
    int pontuacao1 = 0, pontuacao2 = 0;

    // Cadastro da primeira carta
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

    // Cadastro da segunda carta
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

    // Cálculo de variáveis derivadas
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pib_per_capita1 + densidade_populacional1 + pontos_turisticos1;
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pib_per_capita2 + densidade_populacional2 + pontos_turisticos2;

    // Menu interativo do jogo
    printf("\n=== Escolha dois atributos para comparar ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Primeira Escolha:");
    scanf("%d", &opcao1);
    printf("Segunda Escolha:");
    scanf("%d", &opcao2);

    // Estruturas de decisão 
    printf("\n=== Comparação entre as Cartas ===\n");
    switch (opcao1) {
        case 1:
            printf("Voce escolheu População como a primeira opção.\n");
            if (populacao1 > populacao2) {
                printf("A maior população é da cidade: %s\ncom: %lu de habitantes\n", cidade1, populacao1);
                pontuacao1++;
            } else if (area2 > area1) {
                printf("A maior população é da cidade: %s\ncom: %lu de habitantes\n", cidade2, populacao2);
                pontuacao2++;
            } else { 
                if (opcao1 == 1){
                    printf("Houve um empate na primeira escolha entre as populações!\n");    
                } else {
                    printf("Houve um empate na segunda escolha entre as populações!\n");
                }
            }
            break;
        
        case 2:
            printf("Voce escolheu Area como a primeira opção.\n");
            if (area1 > area2) {
                printf("A maior area é da cidade: %s\ncom: %.2f km²\n", cidade1, area1);
                pontuacao1++;
            } else if (area2 > area1) {
                printf("A maior area é da cidade: %s\ncom: %.2f km²\n", cidade2, area2);
                pontuacao2++;
            } else { 
                if (opcao1 == 2){
                    printf("Houve um empate na primeira escolha entre as Areas!\n");    
                } else {
                    printf("Houve um empate na segunda escolha entre as Areas!\n");
                }
            }
            break;

        case 3:
            printf("Voce escolheu PIB como a primeira opção.\n");
            if (pib1 > pib2) {
                printf("O maior PIB é da cidade: %s\ncom: %.2f\n", cidade1, pib1);
                pontuacao1++;
            } else if (pib2 > pib1) {
                printf("O maior PIB é da cidade: %s\ncom: %.2f\n", cidade2, pib2);
                pontuacao2++;
            } else {     
                printf("Houve um empate!\n");       
            }
            break;

        case 4:
            printf("Voce escolheu Pontos Turisticos como a primeira opção.\n");
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("O maior numero pontos turisticos é da cidade: %s\ncom: %d\n", cidade1, pontos_turisticos1);
                pontuacao1++;
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("O maior numero pontos turisticos é da cidade: %s\ncom: %d\n", cidade2, pontos_turisticos2);
                pontuacao2++;
            } else {
                printf("Houve um empate!\n");
            }
            break;

        case 5:
            printf("Voce escolheu Densidade como a primeira opção.\n");
            if (densidade_populacional1 < densidade_populacional2) {
                printf("A menor densidade é da cidade: %s\ncom: %.2f\n", cidade1, densidade_populacional1);
                pontuacao1++;
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("A menor densidade é da cidade: %s\ncom: %.2f\n", cidade2, densidade_populacional2);
                pontuacao2++;
            } else {
                printf("Houve um empate!\n");
            }
            break;

        case 6:
            printf("Voce escolheu PIB per capita como a primeira opção.\n");
            if (pib_per_capita1 > pib_per_capita2) {
                printf("O maior PIB per capita é da cidade: %s\ncom: %.2f\n", cidade1, pib_per_capita1);
                pontuacao1++;
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("O maior PIB per capita é da cidade: %s\ncom: %.2f\n", cidade2, pib_per_capita2);
                pontuacao2++;
            } else {
                printf("Houve um empate!\n");
            }
            break;

        case 7:
            printf("Voce escolheu Super Poder como a primeira opção.\n");
            if (super_poder1 > super_poder2) {
                printf("O maior Super Poder é da cidade: %s\ncom: %.2f de poder\n", cidade1, super_poder1);
            } else if (super_poder2 > super_poder1) {
                printf("O maior Super Poder é da cidade: %s\ncom: %.2f de poder\n", cidade2, super_poder2);
            } else {
                printf("Houve um empate!\n");
            }
            break;

        default:
            printf("Primeira opção que escolheu é inválida!\n");
    }

    switch (opcao2) {
        case 1:
            printf("Voce escolheu População como a segunda opção.\n");
            if (populacao1 > populacao2) {
                printf("A maior população é da cidade: %s\ncom: %lu de habitantes\n", cidade1, populacao1);
                pontuacao1++;
            } else if (area2 > area1) {
                printf("A maior população é da cidade: %s\ncom: %lu de habitantes\n", cidade2, populacao2);
                pontuacao2++;
            } else { 
                printf("Houve um empate!\n");
            }
            break;
        
            case 2:
            printf("Voce escolheu Area como a segunda opção.\n");
            if (area1 > area2) {
                printf("A maior area é da cidade: %s\ncom: %.2f km²\n", cidade1, area1);
                pontuacao1++;
            } else if (area2 > area1) {
                printf("A maior area é da cidade: %s\ncom: %.2f km²\n", cidade2, area2);
                pontuacao2++;
            } else { 
                printf("Houve um empate!\n");
            }
            break;

        case 3:
            printf("Voce escolheu PIB como a segunda opção.\n");
            if (pib1 > pib2) {
                printf("O maior PIB é da cidade: %s\ncom: %.2f\n", cidade1, pib1);
                pontuacao1++;
            } else if (pib2 > pib1) {
                printf("O maior PIB é da cidade: %s\ncom: %.2f\n", cidade2, pib2);
                pontuacao2++;
            } else {     
                printf("Houve um empate!\n");       
            }
            break;

        case 4:
            printf("Voce escolheu Pontos Turisticos como a segunda opção.\n");
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("O maior numero pontos turisticos é da cidade: %s\ncom: %d\n", cidade1, pontos_turisticos1);
                pontuacao1++;
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("O maior numero pontos turisticos é da cidade: %s\ncom: %d\n", cidade2, pontos_turisticos2);
                pontuacao2++;
            } else {
                printf("Houve um empate!\n");
            }
            break;

        case 5:
            printf("Voce escolheu Densidade como a segunda opção.\n");
            if (densidade_populacional1 < densidade_populacional2) {
                printf("A menor densidade é da cidade: %s\ncom: %.2f\n", cidade1, densidade_populacional1);
                pontuacao1++;
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("A menor densidade é da cidade: %s\ncom: %.2f\n", cidade2, densidade_populacional2);
                pontuacao2++;
            } else {
                printf("Houve um empate!\n");
            }
            break;

        case 6:
            printf("Voce escolheu PIB per capita como a segunda opção.\n");
            if (pib_per_capita1 > pib_per_capita2) {
                printf("O maior PIB per capita é da cidade: %s\ncom: %.2f\n", cidade1, pib_per_capita1);
                pontuacao1++;
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("O maior PIB per capita é da cidade: %s\ncom: %.2f\n", cidade2, pib_per_capita2);
                pontuacao2++;
            } else {
                printf("Houve um empate!\n");
            }
            break;

        case 7:
            printf("Voce escolheu Super Poder como a segunda opção.\n");
            if (super_poder1 > super_poder2) {
                printf("O maior Super Poder é da cidade: %s\ncom: %.2f de poder\n", cidade1, super_poder1);
            } else if (super_poder2 > super_poder1) {
                printf("O maior Super Poder é da cidade: %s\ncom: %.2f de poder\n", cidade2, super_poder2);
            } else {
                printf("Houve um empate!\n");
            }
            break;

        default:
            printf("Segunda opção é inválida!\n");
    }

    printf("\n=== Resultado Final ===\n");
    pontuacao1 > pontuacao2 ? printf("A cidade vencedora é: %s\n", cidade1) : printf("A cidade vencedora é: %s\n", cidade2);
    pontuacao1 = pontuacao2 ? printf("Voce empatou! Tente novamente.\n=== Obrigado por jogar! ===\n") : printf("=== Obrigado por jogar! ===\n");

    return 0;
}