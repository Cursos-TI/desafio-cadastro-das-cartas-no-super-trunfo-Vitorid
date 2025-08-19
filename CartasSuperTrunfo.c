
#include <stdio.h>
#include <string.h>

int main (){
 char estado1, estado2;        // escolha uma letra de 'A' a 'H' 
 char codigo1[5], codigo2[5];    // a letra do estado seguida de um número de 01 a 04
 char nome1[30], nome2[30];    // digite o nome da cidade
 unsigned long int  populacao1, populacao2;   // digite a população da cidade que você escolheu
 float area1, area2;      // digite a árem em (km²)
 float PIB1, PIB2;       // digite o produto interno bruto da cidade que você escolheu 
 int   pontos1, pontos2;   // pontos turisticos da cidade 
 float densidade1, densidade2; // densidade populacional
 float PIBpc1, PIBpc2;     //PIB per capita
 float superpoder1, superpoder2;
 unsigned int carta1, carta2;


    printf("Carta 1\n");
    printf("Digite o estado da primeria carta (A-H): \n");
    scanf(" %c", &estado1);
      
    printf("Digite o código da primeira carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da primeira carta: \n");
    getchar();  // Limpa o buffer antes de fgets
    fgets(nome1, sizeof(nome1), stdin);
      
    nome1[strcspn(nome1, "\n")] = 0; // Remove o Enter do final da string

    printf("Digite a população da cidade da primeria carta: \n");
    scanf("%lu", &populacao1);
      
    printf("Digite a área da cidade da primeira carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da segunda carta: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da cidade da primeria carta: \n");
    scanf("%d", &pontos1);

    printf("Carta 2\n");
    printf("Digite o estado da segunda carta (A-H): \n");
    scanf(" %c", &estado2);
      
    printf("Digite o código da segunda carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da segunda carta: \n");
    getchar();  // Limpa o buffer antes de fgets
    fgets(nome2, sizeof(nome2), stdin);
      
    nome2[strcspn(nome2, "\n")] = 0; // Remove o Enter do final da string

    printf("Digite a população da cidade da segunda carta: \n");
    scanf("%lu", &populacao2);
      
    printf("Digite a área da cidade da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da segunda  carta: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade da segunda carta: \n");
    scanf("%d", &pontos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    PIBpc1 = PIB1 / populacao1;
    PIBpc2 = PIB2 / populacao2;

    superpoder1 = populacao1 + area1 + pontos1 + PIBpc1 + ( 1 / densidade1);
    superpoder2 = populacao2 + area2 + pontos2 + PIBpc2 + ( 1/ densidade2);
   
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Numero de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIBpc: %.2f reais\n", PIBpc1);
    printf("Superpoder: %f\n", superpoder1);

   printf("Carta 2\n");
   printf("Estado: %c\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Cidade: %s\n", nome2);
   printf("População: %lu\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f bilhões de reais\n", PIB2);
   printf("Numero de Pontos Turísticos: %d\n", pontos2);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
   printf("PIBpc: %.2f reais\n", PIBpc2);
   printf("Superpoder: %f\n", superpoder2);
   
   printf("Comparação\n");
   printf("População: carta 1 venceu %d\n", populacao1 > populacao2);
   printf("Área: carta 1 venceu %d\n", area1 > area2);
   printf("PIB: carta 1 venceu %d\n", PIB1 > PIB2);
   printf("Numero de Pontos Turísticos: carta 1 venceu %d\n", pontos1 > pontos2);
   printf("Densidade Populacional: carta 1 venceu %d\n", densidade1 < densidade2);
   printf("PIBpc: carta 1 venceu %d\n", PIBpc1 > PIBpc2);
   printf("Superpoder: carta 1 venceu %d\n", superpoder1 > superpoder2);
   

 return 0;

}
