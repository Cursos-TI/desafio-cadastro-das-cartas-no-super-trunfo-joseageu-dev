#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Super Trunfo em c: Fundamentos e Técnicas Avançadas
// Este é o código final do desenvolvimento do sistema do desafio Super Trunfo em C.
// Siga os comentários para implementar cada parte do desafio.
// Desafio do aluno José Ageu Layme Neto

int main() {
    
    // Definição das variáveis da Carta 1
    char estado1[50];
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    //Definição das variáveis da Carta 2
    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Definição das variáveis de comparação de atributos das cartas
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPontosTuristicos;
    int resultadoDensidadePopulacional;
    int resultadoPibPerCapita;
    int resultadoSuperPoder;

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
    scanf("%d", &pontosTuristicos1);

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
    scanf("%d", &pontosTuristicos2);

    //cálculo da Densidade Populacional das cartas
    densidadePopulacional1 = (float) populacao1 / area1;
    densidadePopulacional2 = (float) populacao2 / area2;

    //cálculo do PIB Per Capita das cartas    
    pibPerCapita1 = (float) (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (float) (pib2 * 1000000000) / populacao2;

    //cálculo do Super Poder das cartas
    superPoder1 = (float) (populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1));    
    superPoder2 = (float) (populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2));

    // Comparação dos atributos das cartas
    resultadoArea = area1 > area2;
    resultadoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
    resultadoPib = pib1 > pib2;
    resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    resultadoPopulacao = populacao1 > populacao2;
    resultadoSuperPoder = superPoder1 > superPoder2;
    
    // Exibição dos Dados das Cartas:
    printf("\n");
    printf("CARTAS CADASTRADAS: \n");

    // Exibição da Carta 1:
    printf("Carta 1 \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Túrísticos: %d \n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f Reais \n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição dos Dados da da Carta 2:
    printf("\n");
    printf("Carta 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Túrísticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f Reais \n", pibPerCapita2);    
    printf("Super Poder: %.2f\n", superPoder2);
    
    // Exibição dos resultados das comparações dos atributos das cartas
    printf("\n");
    printf("*** RESULTADOS DAS DISPUTAS POR ATRIBUTO ***\n");
    printf("Resultado = 1: Venceu a Carta 1\n");
    printf("Resultado = 0: Venceu a carta 2\n");
    printf("\n");
    printf("População_____________: %d\n", resultadoPopulacao);
    printf("Área__________________: %d\n", resultadoArea);
    printf("PIB___________________: %d\n", resultadoPib);
    printf("Pontos Turísticos_____: %d\n", resultadoPontosTuristicos);
    printf("Densidade Populacional: %d\n", resultadoDensidadePopulacional);
    printf("Pib Per Capita________: %d\n", resultadoPibPerCapita);
    printf("Super Poder___________: %d\n", resultadoSuperPoder);

    return 0;
}