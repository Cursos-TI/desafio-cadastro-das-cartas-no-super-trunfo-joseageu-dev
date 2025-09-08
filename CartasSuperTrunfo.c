#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Desafio do aluno José Ageu Layme Neto

int main() {
    
    // Definição das variáveis da Carta 1
    char estado1[50];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;

    //Definição das variáveis da Carta 2
    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;

    // Título da aplicação
    printf("*** Desafio Cadastro das Cartas no Super Trunfo *** \n\n");

    // Cadastro da Carta 1
    printf("CADASTRE AS INFORMAÇOES DA CARTA 1 \n");
        
    printf("Digite o nome do estado: ");
    scanf("%s", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);
        
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);
        
    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf("%f", &pib1);
        
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosturisticos1);

    //cálculo da Densidade Populacional e do PIB Per Capita da carta 1
    densidadepopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = (float) (pib1 * 1000000000) / populacao1;

    // Cadastro da Carta 2
    printf("\n");
    printf("CADASTRE AS INFORMAÇOES DA CARTA 2 \n");
        
    printf("Digite o nome do estado: ");
    scanf("%s", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);
        
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);
        
    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf("%f", &pib2);
        
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosturisticos2);
    
    //cálculo da Densidade Populacional e do PIB Per Capita da carta 2
    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = (float) (pib2 * 1000000000) / populacao2;

    // Exibição dos Dados das Cartas:
    printf("\n");
    printf("CARTAS CADASTRADAS: \n");

    // Exibição da Carta 1:
    printf("\n");
    printf("Carta 1 \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Túrísticos: %d \n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional1);
    printf("PIB per Capita: %.2f Reais", pibpercapita1);

    // Exibição dos Dados da da Carta 2:
    printf("\n");
    printf("Carta 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Túrísticos: %d \n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional2);
    printf("PIB per Capita: %.2f Reais", pibpercapita2);    

    return 0;
}
