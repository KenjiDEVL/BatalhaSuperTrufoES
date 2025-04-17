#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[30], nome2[30];
    char codigo[3], codigo2[3];
    int populacao, populacao2;
    float areaEmKm, PIB, DensidadePopulacional, PIBcapita;
    float areaEmKm2, PIB2, DensidadePopulacional2, PIBcapita2;

    printf("Entre com o Nome da Cidade 1: ");
    scanf("%s", nome);

    printf("Entre com o Codigo da Cidade 1: ");
    scanf("%s", codigo);

    printf("Entre com a Populacao da Cidade 1: ");
    scanf("%d", &populacao);

    printf("Entre com a Area da Cidade 1 em Km²: ");
    scanf("%f", &areaEmKm);

    printf("Entre com o PIB da Cidade 1: ");
    scanf("%f", &PIB);

    // Cálculo automático da Densidade Populacional e do PIB per capita para a Cidade 1
    DensidadePopulacional = populacao / areaEmKm;
    PIBcapita = PIB / populacao;

    printf("Entre com o Nome da Cidade 2: ");
    scanf("%s", nome2);

    printf("Entre com o Codigo da Cidade 2: ");
    scanf("%s", codigo2);

    printf("Entre com a Populacao da Cidade 2: ");
    scanf("%d", &populacao2);

    printf("Entre com a Area da Cidade 2 em Km²: ");
    scanf("%f", &areaEmKm2);

    printf("Entre com o PIB da Cidade 2: ");
    scanf("%f", &PIB2);

    // Cálculo automático da Densidade Populacional e do PIB per capita para a Cidade 2
    DensidadePopulacional2 = populacao2 / areaEmKm2;
    PIBcapita2 = PIB2 / populacao2;

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area em Km²\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional (menor valor vence)\n");
    printf("5 - PIB per capita\n");

    int atributo1, atributo2;
    printf("Escolha o primeiro atributo (1-5): ");
    scanf("%d", &atributo1);

    printf("Escolha o segundo atributo (1-5): ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Você não pode escolher o mesmo atributo duas vezes.\n");
        return 0;
    }

    int resultado1 = 0, resultado2 = 0;
    float somaCidade1 = 0, somaCidade2 = 0;

    // Comparação do primeiro atributo
    switch (atributo1) {
        case 1:
            resultado1 = populacao > populacao2 ? 1 : 0;
            somaCidade1 += populacao;
            somaCidade2 += populacao2;
            break;
        case 2:
            resultado1 = areaEmKm > areaEmKm2 ? 1 : 0;
            somaCidade1 += areaEmKm;
            somaCidade2 += areaEmKm2;
            break;
        case 3:
            resultado1 = PIB > PIB2 ? 1 : 0;
            somaCidade1 += PIB;
            somaCidade2 += PIB2;
            break;
        case 4:
            resultado1 = DensidadePopulacional < DensidadePopulacional2 ? 1 : 0;
            somaCidade1 += DensidadePopulacional;
            somaCidade2 += DensidadePopulacional2;
            break;
        case 5:
            resultado1 = PIBcapita > PIBcapita2 ? 1 : 0;
            somaCidade1 += PIBcapita;
            somaCidade2 += PIBcapita2;
            break;
        default:
            printf("Atributo inválido.\n");
            return 0;
    }

    // Comparação do segundo atributo
    switch (atributo2) {
        case 1:
            resultado2 = populacao > populacao2 ? 1 : 0;
            somaCidade1 += populacao;
            somaCidade2 += populacao2;
            break;
        case 2:
            resultado2 = areaEmKm > areaEmKm2 ? 1 : 0;
            somaCidade1 += areaEmKm;
            somaCidade2 += areaEmKm2;
            break;
        case 3:
            resultado2 = PIB > PIB2 ? 1 : 0;
            somaCidade1 += PIB;
            somaCidade2 += PIB2;
            break;
        case 4:
            resultado2 = DensidadePopulacional < DensidadePopulacional2 ? 1 : 0;
            somaCidade1 += DensidadePopulacional;
            somaCidade2 += DensidadePopulacional2;
            break;
        case 5:
            resultado2 = PIBcapita > PIBcapita2 ? 1 : 0;
            somaCidade1 += PIBcapita;
            somaCidade2 += PIBcapita2;
            break;
        default:
            printf("Atributo inválido.\n");
            return 0;
    }

    // Exibição do resultado
    printf("\n*** Resultado da Comparação ***\n");
    printf("Cidade 1: %s\n", nome);
    printf("Cidade 2: %s\n", nome2);
    printf("\nAtributo 1: %d\n", atributo1);
    printf("Atributo 2: %d\n", atributo2);
    printf("\nValores dos Atributos:\n");
    printf("Cidade 1 - Soma dos Atributos: %.2f\n", somaCidade1);
    printf("Cidade 2 - Soma dos Atributos: %.2f\n", somaCidade2);

    if (somaCidade1 > somaCidade2) {
        printf("\n*** A Cidade 1 (%s) venceu com a maior soma de atributos! ***\n", nome);
    } else if (somaCidade1 < somaCidade2) {
        printf("\n*** A Cidade 2 (%s) venceu com a maior soma de atributos! ***\n", nome2);
    } else {
        printf("\n*** Empate! ***\n");
    }

    return 0;
}