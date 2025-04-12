#include <stdio.h>


int main() {

    //Declarando as variáveis

    char estado1[2];
    char codigo1[3];
    char nome_cidade1[20];
    unsigned int populacao_cidade1;
    float area_km2_cidade1;                                    
    float pib_cidade1;
    int pontos_turisticos1;
    float densidade1;
    float pib_capita1;
    float superpoder1;

    char estado2[2];
    char codigo2[3];
    char nome_cidade2[20];
    unsigned int populacao_cidade2;
    float area_km2_cidade2;                                    
    float pib_cidade2;
    int pontos_turisticos2;
    float densidade2;
    float pib_capita2;
    float superpoder2;
    

    //Coletando as informações da 
    // primeira carta

    printf("Digite o estado da primeira carta:\n");
    scanf("%s", estado1);                                         //%3s e %20s para delimitar o buffer 
                                                                   
    printf("Digite o código da primeira carta: \n");            
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade da primeira carta: \n");
    scanf(" %[^\n]", &nome_cidade1);                               // %[^\n] Para ler nomes compostos ex: São Paulo

    printf("Informe a população da primeira carta: \n");
    scanf("%u", &populacao_cidade1);

    printf("Informe a área em Km² da primeira carta: \n");
    scanf("%f", &area_km2_cidade1);

    printf("Informe o PIB da primeira carta: \n");
    scanf("%f", &pib_cidade1);

    printf("Informe o número de pontos turísticos da primeira carta: \n");
    scanf("%d", &pontos_turisticos1);

    pib_capita1 = (float) pib_cidade1 / populacao_cidade1;  // CALCULO DO PIB PER CAPITA DA PRIMEIRA CARTA

    densidade1 = (float) populacao_cidade1 / area_km2_cidade1;      // CALCULO DA DENSIDADE DA PRIMEIRA CARTA

    superpoder1 = populacao_cidade1 + area_km2_cidade1 + pib_cidade1 + pontos_turisticos1 + pib_capita1 - densidade1; //Super poder carta 1



    //Exibindo as informações da primeira carta

    printf("Carta 1:\n ");
    printf("Estado: %s\n ",estado1);
    printf("Codigo: %3s\n ",codigo1);
    printf("Nome da Cidade: %s\n ",nome_cidade1);
    printf("População: %d\n ",populacao_cidade1);
    printf("Área: %.2f\n ",area_km2_cidade1);
    printf("PIB: %.2f\n ",pib_cidade1);
    printf("Pontos Turísticos: %d\n ",pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n",densidade1);
    printf("PIB per Capita: %.2f\n", pib_capita1);
    printf("Super: %.2f", superpoder1);


    //Coletando as informações da 
    // segunda carta
    
   printf("\nDigite o estado da segunda carta: \n");
    scanf("%s", estado2);                                          
                                                                   
    printf("Digite o código da segunda carta: \n");                   //%3s e %20s para delimitar o buffer
    scanf("%3s", &codigo2);
                                                                      
    printf("Digite o nome da cidade da segunda carta: \n");
    scanf(" %[^\n]", &nome_cidade2);                                   // %[^\n] Para ler nomes compostos ex: São Paulo

    printf("Informe a população da segunda carta: \n");
    scanf("%u", &populacao_cidade2);

    printf("Informe a área em Km² da segunda carta: \n");
    scanf("%f", &area_km2_cidade2);

    printf("Informe o PIB da segunda carta: \n");
    scanf("%f", &pib_cidade2);

    printf("Informe o número de pontos turísticos da segunda carta: \n");
    scanf("%d", &pontos_turisticos2);

    pib_capita2 = (float) pib_cidade2 / populacao_cidade2;  // CALCULO DO PIB PER CAPITA DA SEGUNDA CARTA

    densidade2 = populacao_cidade2 / area_km2_cidade2;      // CALCULO DA DENSIDADE DA SEGUNDA CARTA

    superpoder2 = populacao_cidade2 + area_km2_cidade2 + pib_cidade2 + pontos_turisticos2 + pib_capita2 - densidade2;//Super poder carta 2



    //Exibindo as informações da segunda carta

    printf("Carta 2:\n ");
    printf("Estado: %s\n ",estado2);
    printf("Codigo: %3s\n ",codigo2);
    printf("Nome da Cidade: %s\n ",nome_cidade2);
    printf("População: %d\n ",populacao_cidade2);
    printf("Área: %.2f\n ",area_km2_cidade2);
    printf("PIB: %.2f\n ",pib_cidade2);
    printf("Pontos Turísticos: %d\n ",pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n",densidade2);
    printf("PIB per Capita: %.2f\n", pib_capita2);
    printf("Super: %.2f\n", superpoder2);


   // Resultados

   printf("Comparacao de cartas: PIB PER CAPITA\n");

   printf("Carta 1 - %s: %.2f\n", nome_cidade1,pib_capita1);
   printf("Carta 2 - %s: %.2f\n", nome_cidade2,pib_capita2);

   if (pib_capita1 > pib_capita2)
   {
    printf("Resultado: Carta 1 - %s venceu!\n",nome_cidade1);        // Comparação do maior valor de PIB per Capita
   }else{
    printf("Resultado: Carta 2 - %s venceu!\n",nome_cidade2);
   }
   



   


    return 0;
}
