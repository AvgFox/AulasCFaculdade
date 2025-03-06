#include <stdio.h>

int main()
{

   // Variáveis
   int carta1Populacao, carta1PontosTur;
   float carta1Pib, carta1Km2;
   char carta1PibEstado, carta1PibEstado2;
   char carta1CodigoCarta[10];
   char carta1NomeCidade[30];

   // Inicio do Jogo
   printf("SEJA BEM VINDO AO SUPER TRUNFO!! \n");
   printf("Vamos digitar os dados da CARTA 1: \n");

   // Carta 1, entradas do usuário salvando nas variáveis
   printf("Digite o estado: 'A' - 'H' \n");
   scanf("%c", &carta1PibEstado);

   printf("Digite o código da carta: \n");
   scanf("%s", &carta1CodigoCarta);

   printf("Digite a cidade: \n");
   scanf("%s", carta1NomeCidade);

   printf("Digite a populacao: \n");
   scanf("%d", &carta1Populacao);

   printf("Digite a àrea em k2: \n");
   scanf("%f", &carta1Km2);

   printf("Digite o PIB \n");
   scanf("%f", &carta1Pib);

   printf("Digite a quantidade de pontos turisticos \n");
   scanf("%d", &carta1PontosTur);

   // Imprime as informações que foram inseridas pelo usuário
   printf("############## CARTA 1:############# \n");
   printf("Estado: %c \n", carta1PibEstado);
   printf("Código: %s \n", carta1CodigoCarta);
   printf("Cidade: %s \n", carta1NomeCidade);
   printf("População: %d \n", carta1Populacao);
   printf("Área em km2: %f \n", carta1Km2);
   printf("PIB: %f \n", carta1Pib);
   printf("Número de pontos turisticos: %d \n", carta1PontosTur);

   // Deixo a variável sem valor para receber a nova entrada.

   // Informações da CARTA 2
   printf("Vamos digitar os dados da CARTA 2: \n");

   // Carta 1, entradas do usuário salvando nas variáveis
   printf("Digite o estado: 'A' - 'H' \n");
   scanf("%c", &carta1PibEstado2);

   printf("Digite o código da carta: \n");
   scanf("%s", &carta1CodigoCarta);

   printf("Digite a cidade: \n");
   scanf("%s", carta1NomeCidade);

   printf("Digite a populacao: \n");
   scanf("%d", &carta1Populacao);

   printf("Digite a àrea em k2: \n");
   scanf("%f", &carta1Km2);

   printf("Digite o PIB \n");
   scanf("%f", &carta1Pib);

   printf("Digite a quantidade de pontos turisticos \n");
   scanf("%d", &carta1PontosTur);

   // Imprime as informações que foram inseridas pelo usuário
   printf("############## CARTA 2:############# \n");
   printf("Estado: %c \n", carta1PibEstado2);
   printf("Código: %s \n", carta1CodigoCarta);
   printf("Cidade: %s \n", carta1NomeCidade);
   printf("População: %d \n", carta1Populacao);
   printf("Área em km2: %f \n", carta1Km2);
   printf("PIB: %f \n", carta1Pib);
   printf("Número de pontos turisticos: %d \n", carta1PontosTur);
}
