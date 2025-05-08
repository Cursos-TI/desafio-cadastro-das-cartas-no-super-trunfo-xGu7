#include <stdio.h>

int main() {
    //carta numero 1
    char estado1[50], cidade1[50], codigo1[10];
    int populacao1, turismo1;
    float area1, pib1;

    //carta numero 2
    char estado2[50], cidade2[50], codigo2[10];
    int populacao2, turismo2;
    float area2, pib2;
    
    //dados carta numero 1
    printf("CARTA NUMERO 1 \n\nEscreva qual o nome do seu estado: \n");
    scanf("%s", estado1);

    printf("Qual o nome da sua cidade? \n");
    scanf("%s", cidade1);

    printf("Digite o seu codigo formado pela inicial do seu estado seguindo de 01 numero: \n");
    scanf("%s", codigo1);

    printf("Qual o valor da população da sua cidade? \n");
    scanf("%d", &populacao1);

    printf("Quantos pontos turisticos exitem na sua cidade? \n");
    scanf("%d", &turismo1);

    printf("Qual o tamanho da area da sua cidade em kilometros quadrados? \n");
    scanf("%f", &area1);

    printf("Qual o valor do PIB da sua cidade? \n");
    scanf("%f", &pib1);
    
    //dados carta numero 2
    printf("CARTA NUMERO 2 \n\nEscreva qual o nome do seu estado: \n");
    scanf("%s", estado2);

    printf("Qual o nome da sua cidade? \n");
    scanf("%s", cidade2);

    printf("Digite o seu codigo formado pela inicial do seu estado seguindo de 01 numero: \n");
    scanf("%s", codigo2);

    printf("Qual o valor da população da sua cidade? \n");
    scanf("%d", &populacao2);

    printf("Quantos pontos turisticos exitem na sua cidade? \n");
    scanf("%d", &turismo2);

    printf("Qual o tamanho da area da sua cidade em kilometros quadrados? \n");
    scanf("%f", &area2);

    printf("Qual o valor do PIB da sua cidade? \n");
    scanf("%f", &pib2);

    //imprimir dados da carta 1
    printf("[CARTA NUMERO 1]\n\n");
    printf("Estado: %s \n", estado1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("Codigo: %s \n", codigo1);
    printf("População: %d habitantes \n", populacao1);
    printf("Numero de pontos turisticos: %d \n", turismo1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n\n", pib1);

    //imprimir dados da carta 2
    printf("[CARTA NUMERO 2]\n\n");
    printf("Estado: %s \n", estado2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("Codigo: %s \n", codigo2);
    printf("População: %d habitantes\n", populacao2);
    printf("Numero de pontos turisticos: %d \n", turismo2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais", pib2);
    
    return 0;
}
