#include <stdio.h>

int main(){
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[60], cidade2[60]; 
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2; 
    float area1, area2, densidadePopulacional1, densidadePopulacional2, pib1, pib2, pibPerCapita1, pibPerCapita2, bilhao = 1000000000.0f;

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
    scanf("%d", &populacao1); 

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
    scanf("%d", &populacao2); 

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

    printf("\n#### Perfeito! Cadastro concluído, agora vamos conferir as informações: #### \n\n"
        
        "Carta 1:\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"                                       
        "População: %d habitantes\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Pontos turísticos: %d\n"
        "Densidade populacional: %.2f\n"
        "Pib per Capita: %.2f\n\n"

        
        "Carta 2:\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"                                        
        "População: %d habitantes\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Pontos turísticos: %d\n"
        "Densidade populacional: %.2f hab/km²\n"
        "Pib per Capita: %.2f\n\n",
         estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1,
         estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2);

    return 0;

}