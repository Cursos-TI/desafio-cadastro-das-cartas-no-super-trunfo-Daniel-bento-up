#include <stdio.h>

// Desafio Super Trunfo - Países 
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() { // Desafio Super Trunfo - Países
    printf("SUPER TRUNFO: PAÍSES\n\n");
    printf("REGRAS DO JOGO\n\n");
    printf("O Super Trunfo é um jogo no qual os jogadores comparam as propriedades de suas cartas para determinar quem tem a mais forte.\n");
    printf("Cada carta representa um objeto com várias propriedades. Nesse desafio, o tema do jogo será Países, e as cartas serão divididas\n");
    printf("por estados, com cada estado tendo quatro cartas que representam diferentes cidades.\n\n");
    printf("Cada país será dividido em oito estados, identificados pelas letras de A a H. Cada estado terá quatro cidades, numeradas de 1 a 4.\n");
    printf("A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).\n");
    printf("Você é livre para personalizar a carta como quiser.\n\n");
    printf("VAMOS COMEÇAR!\n\n");

    char  estado;
    char  nome_cidade[30];
    char  codigo_carta[30];
    int   populacao, pontos_turisticos;
    float area_km2;
    float pib;
 
     // Cadastro das Cartas:Atenção!Cada país será dividido em oito estados, identificados pelas letras de A a H.
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

    

    printf("Estado: %c\n\n", estado);
    printf("Cidade:%s\n\nCódigo da Carta:%s\n\n", nome_cidade,codigo_carta);
    printf("População:%d\n\nPontos turísticos:%d\n\n",populacao, pontos_turisticos);
    printf("Área em Km²:%.2f\n\nPIB:%.2f\n\n",area_km2,pib);


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

    printf("Estado: %c\n\n", estado);
    printf("Cidade:%s\n\nCódigo da Carta:%s\n\n", nome_cidade,codigo_carta);
    printf("População:%d\n\nPontos turísticos:%d\n\n",populacao, pontos_turisticos);
    printf("Área em Km²:%.2f\n\nPIB:%.2f\n\n",area_km2,pib);
    
    
   
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
