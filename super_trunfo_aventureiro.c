#include <stdio.h>

int main(){

    // VARIÁVEIS DA CARTA 1
    int populacao_1, numero_ponto_turistas_1;
    char estado_1, codigo_1[4], cidade_1[30];
    float area_1, pib_1;
    float densidade_populacional_1, pib_per_capita_1; // Novas variáveis

    // VARIÁVEIS DA CARTA 2
    int populacao_2, numero_ponto_turistas_2;
    char estado_2, codigo_2[4], cidade_2[30];
    float area_2, pib_2;
    float densidade_populacional_2, pib_per_capita_2; // Novas variáveis


    // ================= ENTRADA DE DADOS - CARTA 1 =================

    printf("Digite a letra do estado 1 (A-H):\n");
    scanf(" %c", &estado_1);

    printf("Digite o codigo da carta 1 (ex: A01):\n");
    scanf("%s", codigo_1);

    printf("Digite o nome da cidade 1 (Use _ para espacos):\n");
    scanf("%s", cidade_1);

    printf("Digite a populacao da cidade 1:\n");
    scanf("%d", &populacao_1);

    printf("Digite a area da cidade 1 (em km²):\n");
    scanf("%f", &area_1);

    printf("Digite o PIB da cidade 1 (em bilhões):\n");
    scanf("%f", &pib_1);

    printf("Digite o numero de pontos turisticos da cidade 1:\n");
    scanf("%d", &numero_ponto_turistas_1);

    printf("\n");

    // CÁLCULOS DA CARTA 1
    // Densidade = população dividida pela área
    densidade_populacional_1 = populacao_1 / area_1;
    
    // PIB per Capita = PIB total dividido pela população
    // Multiplicamos o PIB por 1.000.000.000 (1 bilhão) para o resultado ficar em reais correntes, como no exemplo
    pib_per_capita_1 = (pib_1 * 1000000000) / populacao_1;


    // ================= ENTRADA DE DADOS - CARTA 2 =================

    printf("Digite a letra do estado 2 (A-H):\n");
    scanf(" %c", &estado_2);

    printf("Digite o codigo da carta 2 (ex: B02):\n");
    scanf("%s", codigo_2);

    printf("Digite o nome da cidade 2 (Use _ para espacos):\n");
    scanf("%s", cidade_2);

    printf("Digite a populacao da cidade 2:\n");
    scanf("%d", &populacao_2);

    printf("Digite a area da cidade 2 (em km²):\n");
    scanf("%f", &area_2);

    printf("Digite o PIB da cidade 2 (em bilhões):\n");
    scanf("%f", &pib_2);

    printf("Digite o numero de pontos turisticos da cidade 2:\n");
    scanf("%d", &numero_ponto_turistas_2);

    printf("\n");

    // CÁLCULOS DA CARTA 2
    densidade_populacional_2 = populacao_2 / area_2;
    pib_per_capita_2 = (pib_2 * 1000000000) / populacao_2;


    // ================= EXIBIÇÃO DOS DADOS =================

    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", numero_ponto_turistas_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
    printf("PIB per Capita: %.2f reais\n\n", pib_per_capita_1);

    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", numero_ponto_turistas_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);

    return 0;
}