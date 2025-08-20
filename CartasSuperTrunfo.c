#include <stdio.h>

int main(){
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[60], cidade2[60]; 
    int pontosTuristicos1, pontosTuristicos2, vitorias1 = 0, vitorias2 = 0;
    unsigned long int populacao1, populacao2;
    float area1, area2, densidadePopulacional1, densidadePopulacional2, pib1, pib2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2, bilhao = 1000000000.0f;

    printf("##############################################\n"
        "# Olá, seja bem vindo ao cadastro de cartas! #\n"   
        "##############################################\n");    
    
    printf("\nPor favor insira o ESTADO da carta 1: "); 
    scanf(" %c", &estado1); 

    printf("Por favor insira o CÓDIGO da carta 1: "); 
    scanf("%s", codigo1); 

    printf("Por favor insira a CIDADE da carta 1: "); 
    scanf(" %s", cidade1); 

    printf("Por favor insira a POPULAÇÃO da carta 1: "); 
    scanf("%lu", &populacao1); 

    printf("Por favor insira a AREA da carta 1 em km²: "); 
    scanf("%f", &area1); 

    printf("Por favor insira o PIB da carta 1 em bilhões de reais: "); 
    scanf("%f", &pib1); 

    printf("Por favor insira a quantidade de pontos turísticos da carta 1: "); 
    scanf("%d", &pontosTuristicos1); 

    printf("\n#########################################\n"
        "# Muito bem! Agora vamos para a carta 2 #\n"         
        "#########################################\n");

    printf("\nPor favor insira o ESTADO da carta 2: "); 
    scanf(" %c", &estado2); 

    printf("Por favor insira o CÓDIGO da carta 2: "); 
    scanf("%s", codigo2); 

    printf("Por favor insira a CIDADE da carta 2: "); 
    scanf("%s", cidade2); 

    printf("Por favor insira a POPULAÇÃO da carta 2: "); 
    scanf("%lu", &populacao2); 

    printf("Por favor insira a AREA da carta 2: "); 
    scanf("%f", &area2); 

    printf("Por favor insira o PIB da carta 2 em bilhões de reais: "); 
    scanf("%f", &pib2); 

    printf("Por favor insira a quantidade de pontos turísticos da carta 2: "); 
    scanf("%d", &pontosTuristicos2); 

    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita1 = pib1 * bilhao / populacao1;
    pibPerCapita2 = pib2 * bilhao / populacao2;
    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibPerCapita1 / bilhao + (1.0 / densidadePopulacional1); //divisão do pibPerCapita1 e 2 por bilhao para o valor de superPoder ficar melhor na hora de apresentar. ex.: sem a divisão o valor fica 150000000 com a divisão fica 50.2
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibPerCapita2 / bilhao + (1.0 / densidadePopulacional2);

    printf("\n#### Perfeito! Cadastro concluído, agora vamos conferir as informações: #### \n\n"
        
        "Carta 1:\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"                                       
        "População: %lu habitantes\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Pontos turísticos: %d\n"
        "Densidade populacional: %.2f\n"
        "PIB per Capita: %.2f reais\n"
        "Super poder: %.2f\n\n"

        
        "Carta 2:\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"                                        
        "População: %lu habitantes\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Pontos turísticos: %d\n"
        "Densidade populacional: %.2f hab/km²\n"
        "PIB per Capita: %.2f reais\n"
        "Super poder: %.2f\n\n",
         estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1, superPoder1,
         estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2, superPoder2);

    printf("Comparação de cartas (Atributo: População):\n\n"
        "Carta 1 - %s (%c): %lu habitantes\n"
        "Carta 2 - %s (%c): %lu habitantes\n", cidade1, estado1, populacao1, cidade2, estado2, populacao2);
    if (populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
} else {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
}

    printf("Comparação de cartas (Atributo: Área):\n\n"
        "Carta 1 - %s (%c): %.2f km²\n"
        "Carta 2 - %s (%c): %.2f km²\n", cidade1, estado1, area1, cidade2, estado2, area2);
    if( area1 > area2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);    
    }

    printf("Comparação de cartas (Atributo: PIB):\n\n"
        "Carta 1 - %s (%c): %.2f bilhões de reais\n"
        "Carta 2 - %s (%c): %.2f bilhões de reais\n", cidade1, estado1, pib1, cidade2, estado2, pib2);
    if( pib1 > pib2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);    
    }

    printf("Comparação de cartas (Atributo: Densidade Populacional):\n\n"
        "Carta 1 - %s (%c): %.2f hab/km²\n"
        "Carta 2 - %s (%c): %.2f hab/km²\n", cidade1, estado1, densidadePopulacional1, cidade2, estado2, densidadePopulacional2);
    if( densidadePopulacional1 < densidadePopulacional2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);    
    }

    printf("Comparação de cartas (Atributo: PIB per Capita):\n\n"
        "Carta 1 - %s (%c): %.2f reais\n"
        "Carta 2 - %s (%c): %.2f reais\n", cidade1, estado1, pibPerCapita1, cidade2, estado2, pibPerCapita2);
    if( pibPerCapita1 > pibPerCapita2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);    
    }

    return 0;

}