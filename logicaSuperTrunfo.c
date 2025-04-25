#include <stdio.h>

int main() {
    //Declarando as variáveis
    int opcao_de_comparacao1, opcao_de_comparacao2;
    const char *Carta1tributoescolhido1;
    const char *Carta1tributoescolhido2;
    float Carta1ValorTributoEscolhido1;
    float Carta1ValorTributoEscolhido2;
    int resultado1, resultado2;
    char estado1[3];
    char codigo1[4];
    char nome_cidade1[50];
    unsigned int populacao_cidade1;
    float area_km2_cidade1;                                    
    float pib_cidade1;
    int pontos_turisticos1;
    float densidade1;
    float pib_capita1;
    float superpoder1;

    const char *Carta2tributoescolhido1;
    const char *Carta2tributoescolhido2;
    float Carta2ValorTributoEscolhido1;
    float Carta2ValorTributoEscolhido2;
    char estado2[3];
    char codigo2[4];
    char nome_cidade2[50];
    unsigned int populacao_cidade2;
    float area_km2_cidade2;                                    
    float pib_cidade2;
    int pontos_turisticos2;
    float densidade2;
    float pib_capita2;
    float superpoder2;

    // Entrada de dados da primeira carta
    printf("Digite o estado da primeira carta:\n");
    scanf("%2s", estado1);

    printf("Digite o código da primeira carta:\n");            
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade da primeira carta:\n");
    scanf(" %[^\n]", nome_cidade1);

    printf("Informe a população da primeira carta:\n");
    scanf("%u", &populacao_cidade1);

    printf("Informe a área em Km² da primeira carta:\n");
    scanf("%f", &area_km2_cidade1);

    printf("Informe o PIB da primeira carta:\n");
    scanf("%f", &pib_cidade1);

    printf("Informe o número de pontos turísticos da primeira carta:\n");
    scanf("%d", &pontos_turisticos1);

    pib_capita1 = pib_cidade1 / populacao_cidade1;
    densidade1 = populacao_cidade1 / area_km2_cidade1;
    superpoder1 = populacao_cidade1 + area_km2_cidade1 + pib_cidade1 + pontos_turisticos1 + pib_capita1 - densidade1;

    // Exibição da carta 1
    printf("Carta 1:\nEstado: %s\nCodigo: %s\nNome da Cidade: %s\nPopulação: %u\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\nSuper: %.2f\n",
        estado1, codigo1, nome_cidade1, populacao_cidade1, area_km2_cidade1, pib_cidade1, pontos_turisticos1, densidade1, pib_capita1, superpoder1);

    // Entrada de dados da segunda carta
    printf("Digite o estado da segunda carta:\n");
    scanf("%2s", estado2);

    printf("Digite o código da segunda carta:\n");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade da segunda carta:\n");
    scanf(" %[^\n]", nome_cidade2);

    printf("Informe a população da segunda carta:\n");
    scanf("%u", &populacao_cidade2);

    printf("Informe a área em Km² da segunda carta:\n");
    scanf("%f", &area_km2_cidade2);

    printf("Informe o PIB da segunda carta:\n");
    scanf("%f", &pib_cidade2);

    printf("Informe o número de pontos turísticos da segunda carta:\n");
    scanf("%d", &pontos_turisticos2);

    pib_capita2 = pib_cidade2 / populacao_cidade2;
    densidade2 = populacao_cidade2 / area_km2_cidade2;
    superpoder2 = populacao_cidade2 + area_km2_cidade2 + pib_cidade2 + pontos_turisticos2 + pib_capita2 - densidade2;

    // Exibição da carta 2
    printf("Carta 2:\nEstado: %s\nCodigo: %s\nNome da Cidade: %s\nPopulação: %u\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\nSuper: %.2f\n",
        estado2, codigo2, nome_cidade2, populacao_cidade2, area_km2_cidade2, pib_cidade2, pontos_turisticos2, densidade2, pib_capita2, superpoder2);

    // Comparação 1
    printf("Escolha o primeiro atributo a comparar:\n1.População\n2.Área\n3.PIB\n4.Pontos turisticos\n5.Densidade Demografica\n");
    scanf("%d", &opcao_de_comparacao1);

    switch (opcao_de_comparacao1) {
        case 1:
            resultado1 = populacao_cidade1 > populacao_cidade2;
            Carta1tributoescolhido1 = "População";
            Carta1ValorTributoEscolhido1 = populacao_cidade1;
            Carta2tributoescolhido1 = "População";
            Carta2ValorTributoEscolhido1 = populacao_cidade2;
            break;
        case 2:
            resultado1 = area_km2_cidade1 > area_km2_cidade2;
            Carta1tributoescolhido1 = "Área";
            Carta1ValorTributoEscolhido1 = area_km2_cidade1;
            Carta2tributoescolhido1 = "Área";
            Carta2ValorTributoEscolhido1 = area_km2_cidade2;
            break;
        case 3:
            resultado1 = pib_cidade1 > pib_cidade2;
            Carta1tributoescolhido1 = "PIB";
            Carta1ValorTributoEscolhido1 = pib_cidade1;
            Carta2tributoescolhido1 = "PIB";
            Carta2ValorTributoEscolhido1 = pib_cidade2;
            break;
        case 4:
            resultado1 = pontos_turisticos1 > pontos_turisticos2;
            Carta1tributoescolhido1 = "Pontos Turísticos";
            Carta1ValorTributoEscolhido1 = pontos_turisticos1;
            Carta2tributoescolhido1 = "Pontos Turísticos";
            Carta2ValorTributoEscolhido1 = pontos_turisticos2;
            break;
        case 5:
            resultado1 = densidade1 < densidade2;
            Carta1tributoescolhido1 = "Densidade";
            Carta1ValorTributoEscolhido1 = densidade1;
            Carta2tributoescolhido1 = "Densidade";
            Carta2ValorTributoEscolhido1 = densidade2;
            break;
        default:
            printf("Opção inválida\n");
            return 1;
    }

    // Comparação 2
    printf("Escolha o segundo atributo a comparar, diferente do primeiro:\n1.População\n2.Área\n3.PIB\n4.Pontos turisticos\n5.Densidade Demografica\n");
    scanf("%d", &opcao_de_comparacao2);

    if (opcao_de_comparacao2 == opcao_de_comparacao1) {
        printf("Você escolheu o mesmo atributo!\n");
        return 1;
    }

    switch (opcao_de_comparacao2) {
        case 1:
            resultado2 = populacao_cidade1 > populacao_cidade2;
            Carta1tributoescolhido2 = "População";
            Carta1ValorTributoEscolhido2 = populacao_cidade1;
            Carta2tributoescolhido2 = "População";
            Carta2ValorTributoEscolhido2 = populacao_cidade2;
            break;
        case 2:
            resultado2 = area_km2_cidade1 > area_km2_cidade2;
            Carta1tributoescolhido2 = "Área";
            Carta1ValorTributoEscolhido2 = area_km2_cidade1;
            Carta2tributoescolhido2 = "Área";
            Carta2ValorTributoEscolhido2 = area_km2_cidade2;
            break;
        case 3:
            resultado2 = pib_cidade1 > pib_cidade2;
            Carta1tributoescolhido2 = "PIB";
            Carta1ValorTributoEscolhido2 = pib_cidade1;
            Carta2tributoescolhido2 = "PIB";
            Carta2ValorTributoEscolhido2 = pib_cidade2;
            break;
        case 4:
            resultado2 = pontos_turisticos1 > pontos_turisticos2;
            Carta1tributoescolhido2 = "Pontos Turísticos";
            Carta1ValorTributoEscolhido2 = pontos_turisticos1;
            Carta2tributoescolhido2 = "Pontos Turísticos";
            Carta2ValorTributoEscolhido2 = pontos_turisticos2;
            break;
        case 5:
            resultado2 = densidade1 < densidade2;
            Carta1tributoescolhido2 = "Densidade";
            Carta1ValorTributoEscolhido2 = densidade1;
            Carta2tributoescolhido2 = "Densidade";
            Carta2ValorTributoEscolhido2 = densidade2;
            break;
        default:
            printf("Opção inválida\n");
            return 1;
    }

    // Resultado final
    if (resultado1 && resultado2) {
        printf("A Carta 1 venceu com os atributos %s: %.2f e %s: %.2f\n", Carta1tributoescolhido1, Carta1ValorTributoEscolhido1, Carta1tributoescolhido2, Carta1ValorTributoEscolhido2);
    } else if (!resultado1 && !resultado2) {
        printf("A Carta 2 venceu com os atributos %s: %.2f e %s: %.2f\n", Carta2tributoescolhido1, Carta2ValorTributoEscolhido1, Carta2tributoescolhido2, Carta2ValorTributoEscolhido2);
    } else {
        printf("Houve um empate\n");
    }

    return 0;
}
