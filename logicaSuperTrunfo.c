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
    int pontos_c1 = 0, pontos_c2 = 0;

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

    // Função para exibir a comparação das cartas
    printf("\n=== Comparação entre as Cartas ===\n");        
    printf(" Carta 1 - Estado:%s Codigo:%s Cidade:%s População:%lu Area:%.2f PIB:%.2f Pontos Turisticos:%d Densidade:%.2f PIB per Capita:%.2f Poder:%.2f\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, pib_per_capita1, super_poder1);
    printf(" Carta 2 - Estado:%s Codigo:%s Cidade:%s População:%lu Area:%.2f PIB:%.2f Pontos Turisticos:%d Densidade:%.2f PIB per Capita:%.2f Poder:%.2f\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, pib_per_capita2, super_poder2);

    // Exibir os resultados e adiciona um ponto para o vencedor
    printf("\n=== Calculo das Cartas ===\n");
    if (populacao1 > populacao2){
        printf("Cidade 1 tem maior população.\n"); pontos_c1++;
    } else {
        printf("Cidade 2 tem maior população.\n"); pontos_c2++;
    }
    if (area1 > area2){
        printf("Cidade 1 tem maior area.\n"); pontos_c1++;
    } else {
        printf("Cidade 2 tem maior area.\n"); pontos_c2++;
    }
    if (pib1 > pib2){
        printf("Cidade 1 tem maior PIB.\n"); pontos_c1++;
    } else {
        printf("Cidade 2 tem maior PIB.\n"); pontos_c2++;
    }
    if (pontos_turisticos1 > pontos_turisticos2){
        printf("Cidade 1 tem maior numero de pontos turisticos.\n"); pontos_c1++;
    } else {
        printf("Cidade 2 tem maior numero de pontos turisticos.\n"); pontos_c2++;
    }
    if (densidade_populacional1 < densidade_populacional2){
        printf("Cidade 1 tem menor densidade.\n"); pontos_c1++;
    } else {
        printf("Cidade 2 tem menor densidade.\n"); pontos_c2++;
    }
    if (pib_per_capita1 > pib_per_capita2){
        printf("Cidade 1 tem maior PIB per capita.\n"); pontos_c1++;
    } else {
        printf("Cidade 2 tem maior PIB per capita.\n"); pontos_c2++;
    }
    if (super_poder1 > super_poder2){
        printf("Cidade 1 tem maior super poder.\n"); pontos_c1++;
    } else {
        printf("Cidade 2 tem maior super poder.\n"); pontos_c2++;
    }

    // Mostra quem foi o vencedor com maior numero de pontos
    printf("\n=== Resultado Final ===\n");
    if (pontos_c1 > pontos_c2)
        printf("A cidade vencedora é: %s\n", cidade1);
    else if (pontos_c2 > pontos_c1)
        printf("A cidade vencedora é: %s\n", cidade2);
    else
        printf("Empate!\n");
}