// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Feito pelo aluno: Douglas Alves Costa

    // Definição das variáveis para armazenar as propriedades das cidades
        
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


#include <stdio.h>

// Estrutura para representar uma carta
typedef struct{
    char estado[3];
    char codigo[10];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

// Função para calcular as propriedades derivadas de uma carta
void calcular_propriedades(Carta *carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / carta->populacao;
    carta->super_poder = carta->populacao + carta->area + carta->pib + carta->pib_per_capita + carta->densidade_populacional + carta->pontos_turisticos;
}

// Função para ler os dados de uma carta
void ler_carta(Carta *carta){
    printf("Digite o estado da cidade: ");
    scanf("%s", carta->estado);
    printf("Digite o código da carta: ");
    scanf("%s", carta->codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta->cidade);
    printf("Digite a população: ");
    scanf("%lu", &carta->populacao);
    printf("Digite a área em km²: ");
    scanf("%f", &carta->area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta->pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
    calcular_propriedades(carta);
}

// Função para comparar duas cartas e exibir os resultados
void comparar_cartas(Carta c1, Carta c2) {
    int pontos_c1 = 0, pontos_c2 = 0;
    printf("\n===Comparação das Cartas===\n");
    printf(" Carta 1 - Estado:%s Codigo:%s Cidade:%s População:%lu Area:%.2f PIB:%.2f Pontos Turisticos:%d Densidade:%.2f PIB per Capita:%.2f Poder:%.2f\n", c1.estado, c1.codigo, c1.cidade, c1.populacao, c1.area, c1.pib, c1.pontos_turisticos, c1.densidade_populacional, c1.pib_per_capita, c1.super_poder);
    printf(" Carta 2 - Estado:%s Codigo:%s Cidade:%s População:%lu Area:%.2f PIB:%.2f Pontos Turisticos:%d Densidade:%.2f PIB per Capita:%.2f Poder:%.2f\n", c2.estado, c2.codigo, c2.cidade, c2.populacao, c2.area, c2.pib, c2.pontos_turisticos, c2.densidade_populacional, c2.pib_per_capita, c2.super_poder);
    
    if (c1.populacao > c2.populacao) pontos_c1++; else pontos_c2++;
    if (c1.area > c2.area) pontos_c1++; else pontos_c2++;
    if (c1.pib > c2.pib) pontos_c1++; else pontos_c2++;
    if (c1.pontos_turisticos > c2.pontos_turisticos) pontos_c1++; else pontos_c2++;
    if (c1.densidade_populacional < c2.densidade_populacional) pontos_c1++; else pontos_c2++;
    if (c1.pib_per_capita > c2.pib_per_capita) pontos_c1++; else pontos_c2++;
    if (c1.super_poder > c2.super_poder) pontos_c1++; else pontos_c2++;
    
    printf("\n===Resultado Final===\n");
    if (pontos_c1 > pontos_c2)
        printf("A Carta 1 é a Vencedora!\n");
    else if (pontos_c2 > pontos_c1)
        printf("A Carta 2 é a Vencedora!\n");
    else
        printf("Empate!\n");
}

int main() {
    Carta carta1, carta2;
    printf("\nCadastro da primeira carta:\n");
    ler_carta(&carta1);
    printf("\nCadastro da segunda carta:\n");
    ler_carta(&carta2);
    
    comparar_cartas(carta1, carta2);
    return 0;
}