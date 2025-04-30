#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Shimon Soares


int main() {
    int populacao, num_turis;
    float area, pib,denpopu,pibpercap;
    char cod_carta[5];
    char cidade[30];
    char estado[30];

    int populacao2, num_turis2;
    float area2, pib2,denpopu2,pibpercap2;
    char cod_carta2[5];
    char cidade2[30];
    char estado2[30];

    float superpoder, superpoder2;

    printf("CADASTRO CARTA 1 \n");
    printf("Digite Estado: ");
    scanf("%s",&estado);
    printf("Digite Codigo: ");
    scanf("%s",&cod_carta);
    printf("Digite Cidade: ");
    scanf("%s",&cidade);
    printf("Digite Populacao: ");
    scanf("%d",&populacao);
    printf("Digite Area: ");
    scanf("%f",&area);
    printf("Digite PIB: ");
    scanf("%f",&pib);
    printf("Digite Numeros dos Pontos Turisticos: ");
    scanf("%d",&num_turis);
    system("cls");

    printf("CADASTRO CARTA 2 \n");
    printf("Digite Estado: ");
    scanf("%s",&estado2);
    printf("Digite Codigo: ");
    scanf("%s",&cod_carta2);
    printf("Digite Cidade: ");
    scanf("%s",&cidade2);
    printf("Digite Populacao: ");
    scanf("%d",&populacao2);
    printf("Digite Area: ");
    scanf("%f",&area2);
    printf("Digite PIB: ");
    scanf("%f",&pib2);
    printf("Digite Numeros dos Pontos Turisticos: ");
    scanf("%d",&num_turis2);
    system("cls");

//calculando
    denpopu=(populacao/area);
    pibpercap=(pib/populacao);
    denpopu2=(populacao2/area2);
    pibpercap2=(pib2/populacao2);
    superpoder =(populacao+area+pib+pibpercap+denpopu+num_turis);
    superpoder2 =(populacao2+area2+pib2+pibpercap2+denpopu2+num_turis2);
// exibindo os dados

    printf("CARTA 1 \n");
    printf("Estado: %s \n",estado);
    printf("Codigo: %s \n",cod_carta);
    printf("Cidade: %s \n",cidade);
    printf("Populacao: %d \n",populacao);
    printf("Area: %f Km2 \n",area);
    printf("PIB: %f \n",pib);
    printf("Numeros de Pontos Turisticos: %d \n",num_turis);
    printf("Dencidade Populacional: %f hab/km2 \n",denpopu);
    printf("PIB Per Capita: %f  Reais \n",pibpercap);
    printf("\n");
    printf("\n");
    printf("CARTA 2 \n");
    printf("Estado: %s \n",estado2);
    printf("Codigo: %s \n",cod_carta2);
    printf("Cidade: %s \n",cidade2);
    printf("Populacao: %d \n",populacao2);
    printf("Area: %f Km2 \n",area2);
    printf("PIB: %f \n",pib2);
    printf("Numeros de Pontos Turisticos: %d \n",num_turis2);
    printf("Dencidade Populacional: %f  hab/km2 \n",denpopu2);
    printf("PIB Per Capita: %f  Reais \n",pibpercap2);
    printf("\n");
    printf("\n");
    printf("===Comparação de Cartas===\n");
    printf("Populacao: %d \n",(populacao>populacao2));
    printf("Area: %d \n",(area>area2));
    printf("PIB: %d \n",(pib>pib2));
    printf("Pontos Turisticos: %d \n", (num_turis>num_turis2));
    printf("Densidade Populacional: %d \n",(denpopu>denpopu2));
    printf("PIB per Capita: %d \n",(pibpercap>pibpercap2));
    printf("Super Poder: %d \n",(superpoder>superpoder2));
 return 0;
}
