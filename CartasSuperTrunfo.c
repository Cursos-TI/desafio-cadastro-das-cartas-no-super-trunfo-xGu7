#include <stdio.h>

int main() {
    //carta numero 1
    char estado1[50], cidade1[50], codigo1[10];
    int turismo1;
    float area1, pib1, densidade1, pibpc1, poder1, densidadeinv1;
    unsigned long int populacao1;

    //carta numero 2
    char estado2[50], cidade2[50], codigo2[10];
    int turismo2;
    float area2, pib2, densidade2, pibpc2, poder2, densidadeinv2;
    unsigned long int populacao2;
    
    //dados carta numero 1
    printf("CARTA NUMERO 1 \n\nEscreva qual o nome do seu estado: \n");
    scanf("%s", estado1);

    printf("Qual o nome da sua cidade? \n");
    scanf("%s", cidade1);

    printf("Digite o seu codigo formado pela inicial do seu estado seguindo de 01 numero: \n");
    scanf("%s", codigo1);

    printf("Qual o valor da população da sua cidade? \n");
    scanf("%ld", &populacao1);

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
    scanf("%ld", &populacao2);

    printf("Quantos pontos turisticos exitem na sua cidade? \n");
    scanf("%d", &turismo2);

    printf("Qual o tamanho da area da sua cidade em kilometros quadrados? \n");
    scanf("%f", &area2);

    printf("Qual o valor do PIB da sua cidade? \n");
    scanf("%f", &pib2);

    //calculos carta 1 
    densidade1 = (float)populacao1 / area1;
    pibpc1 = (float)pib1 / populacao1;

    //calculos carta 2 
    densidade2 = (float)populacao2 / area2;
    pibpc2 = (float)pib2 / populacao2;

    //super poder carta 1
    densidadeinv1 = 1 / densidade1;
    poder1 = (populacao1 + area1 + pib1 + turismo1 + pibpc2 + densidadeinv1);

    //superpoder
    densidadeinv2 = 1 / densidade2;
    poder2 = (populacao2 + area2 + pib2 + turismo2 + pibpc2 + densidadeinv2);

    //imprimir dados da carta 1
    printf("[CARTA NUMERO 1]\n\n");
    printf("Estado: %s \n", estado1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("Codigo: %s \n", codigo1);
    printf("População: %d habitantes \n", populacao1);
    printf("Numero de pontos turisticos: %d \n", turismo1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", pibpc1);
    printf("Super Poder: %.2f\n\n",poder1);

    //imprimir dados da carta 2
    printf("[CARTA NUMERO 2]\n\n");
    printf("Estado: %s \n", estado2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("Codigo: %s \n", codigo2);
    printf("População: %u habitantes\n", populacao2);
    printf("Numero de pontos turisticos: %d \n", turismo2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pibpc2);
    printf("Super Poder: %.2f\n\n",poder2);

    //imprimir a comparaçao das cartas
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turismo1 > turismo2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpc1 > pibpc2);
    printf("Super Poder: Carta 1 venceu (%d)\n\n", poder1 > poder2);

    
    
    return 0;
}
