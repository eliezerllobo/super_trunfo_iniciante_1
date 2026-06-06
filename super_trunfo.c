#include<stdio.h>

int main(){

    int 
        populacao_1, populacao_2,
        numero_ponto_turistas_1, numero_ponto_turistas_2;

    char 
         estado_1, estado_2,
         codigo_1[4], codigo_2[4],
         cidade_1[30], cidade_2[30];

    float 
        area_1, area_2,
        pib_1, pib_2;



    // ENTRADA DE DADOS - CARTA 1

    printf("Digite a letra do estado 1 (A-H):\n");
    scanf(" %c", &estado_1);

    printf("Digite o codigo da carta 1 (ex: A01):\n");
    scanf("%s", codigo_1);

    printf("Digite o nome da cidade 1 (Use _ para espacos, ex: Sao_Paulo):\n");
    scanf("%s", cidade_1);

    printf("Digite a populacao da cidade 1:\n");
    scanf("%d", &populacao_1);

    printf("Digite a area da cidade 1 (em km²):\n");
    scanf("%f", &area_1);

    printf("Digite o PIB da cidade 1:\n");
    scanf("%f", &pib_1);

    printf("Digite o numero de pontos turisticos da cidade 1:\n");
    scanf("%d", &numero_ponto_turistas_1);

    printf("\n");


    // ENTRADA DE DADOS - CARTA 2

    printf("Digite a letra do estado 2 (A-H):\n");
    scanf(" %c", &estado_2);

    printf("Digite o codigo da carta 2 (ex: B02):\n");
    scanf("%s", codigo_2);

    printf("Digite o nome da cidade 2 (Use _ para espacos, ex: Rio_de_Janeiro):\n");
    scanf("%s", cidade_2);

    printf("Digite a populacao da cidade 2:\n");
    scanf("%d", &populacao_2);

    printf("Digite a area da cidade 2 (em km²):\n");
    scanf("%f", &area_2);

    printf("Digite o PIB da cidade 2:\n");
    scanf("%f", &pib_2);

    printf("Digite o numero de pontos turisticos da cidade 2:\n");
    scanf("%d", &numero_ponto_turistas_2);

    printf("\n");


    // EXIBIÇÃO DOS DADOS

    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n\n", numero_ponto_turistas_1);

    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", numero_ponto_turistas_2);

    return 0;
}