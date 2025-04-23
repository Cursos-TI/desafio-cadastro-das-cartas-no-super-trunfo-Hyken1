#include <stdio.h>

int main() {
    char estado1[3], cidade1[50], codigo1[5], estado2[3], cidade2[50], codigo2[5];
    float area1, PIB1, densidadePopulacional1, PIBperCapita1;
    float area2, PIB2, densidadePopulacional2, PIBperCapita2;
    int pontosTuristicos1, pontosTuristicos2;
    unsigned long int populacao1, populacao2;
    float superPoder1, superPoder2;

    // Entrada de dados da PRIMEIRA CARTA
    printf("* Insira os dados da primeira carta *\n");

    printf("Digite o estado da cidade: ");
    scanf("%2s", estado1);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calculo da densidade populacional e PIB per capita
    densidadePopulacional1 = populacao1 / area1;
    PIBperCapita1 = PIB1 / populacao1;

    // Calcular o Super Poder
    superPoder1 = (float)(populacao1 + area1 + PIB1 + pontosTuristicos1 + PIBperCapita1 + (1.0 / densidadePopulacional1));

    printf("\n\n"); // Linhas em branco para melhorar a visualização

    // Entrada de dados da SEGUNDA CARTA
    printf("* Insira os dados da segunda carta *\n");

    printf("Digite o estado da cidade: ");
    scanf("%2s", estado2);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculo da densidade populacional e PIB per capita
    densidadePopulacional2 = populacao2 / area2;
    PIBperCapita2 = PIB2 / populacao2;

    // Calcular o Super Poder
    superPoder2 = (float)(populacao2 + area2 + PIB2 + pontosTuristicos2 + PIBperCapita2 + (1.0 / densidadePopulacional2));

    printf("\nCARTA 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área da cidade: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais\n", PIBperCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCARTA 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área da cidade: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n", PIBperCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação dos atributos
    printf("\nComparação de Cartas:\n");

    // Comparação de População
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2 ? 1 : 0);

    // Comparação de Área
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2 ? 1 : 0);

    // Comparação de PIB
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2 ? 1 : 0);

    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);

    // Comparação de Densidade Populacional (quanto menor, melhor)
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2 ? 1 : 0);

    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBperCapita1 > PIBperCapita2 ? 1 : 0);

    // Comparação de Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}
