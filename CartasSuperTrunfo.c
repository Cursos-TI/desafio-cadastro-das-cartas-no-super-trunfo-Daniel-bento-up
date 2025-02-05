//Inclusão de biblioteca.
#include <stdio.h>

// Função principal onde o programa começa a ser escrito e executado.
int main() { 
    
    // Na linha 6 a 14 temos o tema do super trunfo e as regras do jogo, para que o usuário entenda como funciona o jogo.
    printf("SUPER TRUNFO: PAÍSES\n\n");
    printf("REGRAS DO JOGO\n\n");
    printf("O Super Trunfo é um jogo no qual os jogadores comparam as propriedades de suas cartas para determinar quem tem a mais forte.\n");
    printf("Cada carta representa um objeto com várias propriedades. Nesse desafio, o tema do jogo será Países, e as cartas serão divididas\n");
    printf("por estados, com cada estado tendo quatro cartas que representam diferentes cidades.\n\n");
    printf("Cada país será dividido em oito estados, identificados pelas letras de A a H. Cada estado terá quatro cidades, numeradas de 1 a 4.\n");
    printf("A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).\n");
    printf("Você é livre para personalizar a carta como quiser.\n\n");
    printf("VAMOS COMEÇAR!\n\n");

    // Declarando as variáveis
    char  estado;
    char  nome_cidade[30];
    char  codigo_carta[30];
    int   populacao, pontos_turisticos;
    float area_km2;
    float pib;
 
    //linha 26 a 46 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 01\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);
   
    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 58 a 78 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 02\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 90 a 110 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 03\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 122 a 142 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 04\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 154 a 174 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 05\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");
    
    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 186 a 206 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 06\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 218 a 238 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 07\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 250 a 270 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 08\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 282 a 302 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 09\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);
    
    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 314 a 334 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 10\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);
    
    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");
    
    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 346 a 366 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 11\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);
    
    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 378 a 398 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 12\n");
    printf("Digite o Estado:\n");                              
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);
    
    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");
    
    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 410 a 430 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 13\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);
    
    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 442 a 462 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 14\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 474 a 494 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 15\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");
    
    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 506 a 526 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 16\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);


    //linha 539 a 559 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 17\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");      
    
    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 571 a 591 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 18\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");
    
    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 603 a 623 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 19\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 635 a 655 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 20\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 667 a 687 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 21\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 699 a 719 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 22\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 731 a 751 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 23\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 763 a 783 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 24\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 795 a 815 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 25\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);
    
    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 827 a 847 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 26\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);
    
    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 859 a 879 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 27\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");
    
    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 891 a 911 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 28\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 923 a 943 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 29\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 955 a 975 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 30\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);
    
    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 987 a 1007 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 31\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);
    
    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    //linha 1019 a 1039 temos o processo de cadastro da carta feita pelo usuário. Com funções de entrada(scanf) e de saída(printf).
    printf("Carta 32\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite o Código da carta:\n");
    scanf("%s", &codigo_carta);

    printf("Digite o número da População:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_km2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);
    
    //adiciona uma nova linha ao final da mensagem. Utilizei para a exibição do código ficar organizada e fácil de ler.
    printf("\n");

    //Impressão dos resultados finais da carta que foi cadastrada pelo usuário.
    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área:%.2f Km²\nPIB:%.2f bilhões de reais\n\n",area_km2,pib);

    // Indica que o programa terminou com sucesso.
    return 0;
}
