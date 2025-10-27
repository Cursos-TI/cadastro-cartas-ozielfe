#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[2];
  char codigo[3];
  char cidade[50];
  int populacao, pontos_turisticos;
  float area, pib;

  // Área para entrada de dados
  printf("ABAIXO INSIRA AS INFORMAÇÕES DA CARTA 1\n");
  printf("Digite uma letra para representar um Estado: \n");
  scanf("%s", &estado);

  printf("Digite um código, com uma letra escolhida para representar o estado, seguinda de um número 01 a 04 para o Estado: \n");
  scanf("%s", &codigo);

  printf("Digite um nome para representar uma Cidade: \n");
  scanf("%s", &cidade);

  printf("Digite o número da população da Cidade: \n");
  scanf("%d", &populacao);

  printf("Digite a área em metros quadrados da Cidade: \n");
  scanf("%f", &area);

  printf("Digite o valor do PIB da Cidade: \n");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos da Cidade: \n");
  scanf("%d", &pontos_turisticos);

  // Área para exibição dos dados da cidade
  printf("***********CARTA 1*************\n");
  printf("Estado: %s\n", estado);
  printf("O código do Estado é: %s\n", codigo);
  printf("O nome da Cidade é: %s\n", cidade);
  printf("O número da populção da Cidade é: %d\n", populacao);
  printf("A área em metros quadrado da Cidade é: %f\n", area);
  printf("O valor do PIB da Cidade é: %f\n", pib);
  printf("O número de pontos turísticos da Cidade é: %d\n", pontos_turisticos);

  // Área para entrada de dados
  printf("ABAIXO INSIRA AS INFORMAÇÕES DA CARTA 2\n");
  printf("Digite uma letra para representar um Estado: \n");
  scanf("%s", &estado);

  printf("Digite um código, com uma letra escolhida para representar o estado, seguinda de um número 01 a 04 para o Estado: \n");
  scanf("%s", &codigo);

  printf("Digite um nome para representar uma Cidade: \n");
  scanf("%s", &cidade);

  printf("Digite o número da população da Cidade: \n");
  scanf("%d", &populacao);

  printf("Digite a área em metros quadrados da Cidade: \n");
  scanf("%f", &area);

  printf("Digite o valor do PIB da Cidade: \n");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos da Cidade: \n");
  scanf("%d", &pontos_turisticos);

  // Área para exibição dos dados da cidade
  printf("***********CARTA 2*************\n");
  printf("Estado: %s\n", estado);
  printf("O código do Estado é: %s\n", codigo);
  printf("O nome da Cidade é: %s\n", cidade);
  printf("O número da populção da Cidade é: %d\n", populacao);
  printf("A área em metros quadrado da Cidade é: %f\n", area);
  printf("O valor do PIB da Cidade é: %f\n", pib);
  printf("O número de pontos turísticos da Cidade é: %d\n", pontos_turisticos);
  

return 0;
} 
