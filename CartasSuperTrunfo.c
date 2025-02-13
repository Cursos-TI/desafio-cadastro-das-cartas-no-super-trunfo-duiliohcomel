#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int populacao;
    int numero_de_pontos_turisticos;
    float area;
    float pib;
    char estado;
    char codigo_da_cidade[3];
    char cidade[50];


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("digite o estado: \n");
    scanf("%s", &estado);

    printf("digite o codigo_da_cidade: \n");
    scanf("%s", &codigo_da_cidade);

    printf("digite a cidade; \n");
    scanf("%s", &cidade);

    printf("digite a populacao: \n");
    scanf("%d", &populacao);

    printf("digite o pib: \n");
    scanf("%f",&pib);

    printf("digite a area: \n");
    scanf("%f", &area);

    printf("digite o numero_de_pontos_turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf( "estado: %s\n", estado);
   
    printf( "codigo da cidade: %s\n", codigo_da_cidade);
   
    printf( "cidade: %s\n", cidade);
  
    printf( "populaçao: %d\n", populacao);
   
    printf( "pib: %f\n", pib);
   
    printf( "area: %f\n", area);
   
    printf( "numero de pontos turisticos: %d\n", numero_de_pontos_turisticos);


    return 0;
}
