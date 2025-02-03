#include <stdio.h>

// Desafio Super Trunfo - Países 
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() { // Desafio Super Trunfo - Países
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    char  estado;
    char  nome_cidade[30];
    char  codigo_carta[30];
    int   populacao, pontos_turisticos;
    float area_km2;
    float pib;
 
     // Cadastro das Cartas:Atenção!Cada país será dividido em oito estados, identificados pelas letras de A a H.
    printf("Digite o Estado:\n");
    scanf("%c", &estado);

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
    scanf("%d", &pontos_turisticos);

    printf("Estado: %c\n", estado);
    printf("Cidade:%s\nCódigo da Carta:%s\n", nome_cidade,codigo_carta);
    printf("População:%d\nPontos turísticos:%d\n",populacao, pontos_turisticos);
    printf("Área em Km²:%.2f\nPIB:%.2f\n",area_km2,pib);
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
