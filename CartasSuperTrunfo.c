#include <stdio.h>
#include <string.h>
int main (){
 char estado;        // escolha uma letra de 'A' a 'H' 
 char codigo[5];       // a letra do estado seguida de um número de 01 a 04
 char nome[30];    // digite o nome da cidade
 int  populacao;   // digite a população da cidade que você escolheu
 float area;      // digite a árem em (km²)
 float PIB;       // digite o produto interno bruto da cidade que você escolheu 
 int   pontos;   // pontos turisticos da cidade 


    printf("Digite o estado da sua carta (A-H): \n");
    scanf(" %c", &estado);
      
    printf("Digite o código da sua carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade da sua carta: \n");
    getchar();  // Limpa o buffer antes de fgets
    fgets(nome, sizeof(nome), stdin);
      
    nome[strcspn(nome, "\n")] = 0; // Remove o Enter do final da string

    printf("Digite a população da cidade da sua carta: \n");
    scanf("%d", &populacao);
      
    printf("Digite a área da cidade da sua carta: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade da sua carta: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos da cidade da sua carta: \n");
    scanf("%d", &pontos);
    
    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Numero de Pontos Turísticos: %d\n", pontos);
    
 return 0;
}