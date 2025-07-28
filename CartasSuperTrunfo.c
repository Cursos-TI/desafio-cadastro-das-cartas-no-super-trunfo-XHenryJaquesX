#include <stdio.h>

int main(){
    char estado1, estado2; //variavel dos estados das 2 cartas
    char codigo1[4], codigo2[4]; //variavel dos codigos das 2 cartas
    char cidade1[60], cidade2[60]; //variavel das cidades das 2 cartas 
    int populacao1, populacao2; //variavel das populações das 2 cartas
    float area1, area2; //variavel das areas das 2 cartas
    float pib1, pib2; //variavel dos pibs das 2 cartas
    int pontosTuristicos1, pontosTuristicos2; //variavel dos pontos turísticos das 2 cartas

    printf("##############################################\n"
        "# Olá, seja bem vindo ao cadastro de cartas! #\n"   //título para dar uma identidade ao menu
        "##############################################\n");    
    
    printf("\nPor favor insira o ESTADO da carta 1: "); //printf para exibir na tela uma mensagem pedindo para o usuário preencher os dados das cartas
    scanf(" %c", &estado1); // lê oq o usuario escreveu e atribui para a variavel

    printf("Por favor insira o CÓDIGO da carta 1: "); //printf para exibir na tela uma mensagem pedindo para o usuário preencher os dados das cartas
    scanf("%s", codigo1); // lê oq o usuario escreveu e atribui para a variavel

    printf("Por favor insira a CIDADE da carta 1: "); //printf para exibir na tela uma mensagem pedindo para o usuário preencher os dados das cartas
    scanf("%s", cidade1); // lê oq o usuario escreveu e atribui para a variavel

    printf("Por favor insira a POPULAÇÃO da carta 1: "); //printf para exibir na tela uma mensagem pedindo para o usuário preencher os dados das cartas
    scanf("%d", &populacao1); // lê oq o usuario escreveu e atribui para a variavel

    printf("Por favor insira a AREA da carta 1: "); //printf para exibir na tela uma mensagem pedindo para o usuário preencher os dados das cartas
    scanf("%f", &area1); // lê oq o usuario escreveu e atribui para a variavel

    printf("Por favor insira o PIB da carta 1: "); //printf para exibir na tela uma mensagem pedindo para o usuário preencher os dados das cartas
    scanf("%f", &pib1); // lê oq o usuario escreveu e atribui para a variavel

    printf("Por favor insira a quantidade de pontos turísticos da carta 1: "); //printf para exibir na tela uma mensagem pedindo para o usuário preencher os dados das cartas
    scanf("%d", &pontosTuristicos1); // lê oq o usuario escreveu e atribui para a variavel

    printf("\n#########################################\n"
        "# Muito bem! Agora vamos para a carta 2 #\n"          // mais um pouco de estilo para o programa
        "#########################################\n");

    printf("\nPor favor insira o ESTADO da carta 2: "); //printf para exibir na tela uma mensagem pedindo para o usuário preencher os dados das cartas
    scanf(" %c", &estado2); // lê oq o usuario escreveu e atribui para a variavel

    printf("Por favor insira o CÓDIGO da carta 2: "); //printf para exibir na tela uma mensagem pedindo para o usuário preencher os dados das cartas
    scanf("%s", codigo2); // lê oq o usuario escreveu e atribui para a variavel

    printf("Por favor insira a CIDADE da carta 2: "); //printf para exibir na tela uma mensagem pedindo para o usuário preencher os dados das cartas
    scanf("%s", cidade2); // lê oq o usuario escreveu e atribui para a variavel

    printf("Por favor insira a POPULAÇÃO da carta 2: "); //printf para exibir na tela uma mensagem pedindo para o usuário preencher os dados das cartas
    scanf("%d", &populacao2); // lê oq o usuario escreveu e atribui para a variavel

    printf("Por favor insira a AREA da carta 2: "); //printf para exibir na tela uma mensagem pedindo para o usuário preencher os dados das cartas
    scanf("%f", &area2); // lê oq o usuario escreveu e atribui para a variavel

    printf("Por favor insira o PIB da carta 2: "); //printf para exibir na tela uma mensagem pedindo para o usuário preencher os dados das cartas
    scanf("%f", &pib2); // lê oq o usuario escreveu e atribui para a variavel

    printf("Por favor insira a quantidade de pontos turísticos da carta 2: "); //printf para exibir na tela uma mensagem pedindo para o usuário preencher os dados das cartas
    scanf("%d", &pontosTuristicos2); // lê oq o usuario escreveu e atribui para a variavel

    printf("\n#### Perfeito! Cadastro concluído, agora vamos conferir as informações: #### " // mensagem para deixar o programa com mais estilo
        
        "\n\nCarta 1:"
        "\nEstado: %c "
        "\nCódigo: %s "
        "\nNome da Cidade: %s "                                        // exibe cada caracteristica da carta 1 que foi adicionada pelo usuário
        "\nPopulação: %d habitantes"
        "\nÁrea: %.2f km²"
        "\nPIB: %.2f bilhões de reais"
        "\nPontos turísticos: %d "
        
        "\n\nCarta 2:"
        "\nEstado: %c "
        "\nCódigo: %s "
        "\nNome da Cidade: %s "                                         // exibe cada caracteristica da carta 1 que foi adicionada pelo usuário
        "\nPopulação: %d habitantes"
        "\nÁrea: %.2f km²"
        "\nPIB: %.2f bilhões de reais"
        "\nPontos turísticos: %d \n ",
         estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1,
         estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2);

    return 0;

}