#include <stdio.h>

int main () {

    // Variaveis da carta 1
    int populacao1; //numero de habitantes
    int pontos1; //pontos turisticos
    float area1; //area em km2
    float pib1; //produto interno bruto
    char estado1; //uma letra de A a H representado o estado
    char codigo1; //letra do estado seguido de um numero de 1 a 4
    char cidade1[40]; //nome da cidade

    // Variaveis da carta 2
    int populacao2; //numero de habitantes
    int pontos2; //pontos turisticos
    float area2; //area em km2
    float pib2; //produto interno bruto
    char estado2; //uma letra de A a Z representado o estado
    char codigo2[5]; //letra do estado seguido de um numero de 1 a 4
    char cidade2[40]; //nome da cidade

    printf ("=>CARTAS SUPER TRUNFO<=\n");

    //Dados da carta 1

    printf ("Carta 1 \n");

    printf ("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade1);

    printf ("Digite a letra do estado (A-H): \n");
    scanf (" %c", &estado1);

    printf ("Digite o codigo da carta (A1-A4): \n");
    scanf (" %s", &codigo1);

    printf ("Digite a populacao da cidade: \n");
    scanf (" %d", &populacao1);

    printf ("Digite a area da cidade (em km2): \n");
    scanf ("%f", &area1);

    printf ("Digite o PIB da cidade: \n");
    scanf ("%f", &pib1);

    printf ("Digite o numero de pontos turisticos da cidade: \n");
    scanf ("%d", &pontos1);

    //Dados da carta 2

    printf ("Carta 2 \n");

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &cidade2);

    printf ("Digite a letra do estado (A-H): \n");
    scanf (" %c", &estado2);

    printf ("Digite o codigo da carta (A1-A4): \n");
    scanf ("%s", &codigo2);

    printf ("Digite a populacao da cidade: \n");
    scanf ("%d", &populacao2);

    printf ("Digite a area da cidade (em km2): \n");
    scanf ("%f", &area2);

    printf ("Digite o PIB da cidade: \n");
    scanf ("%f", &pib2);

    printf ("Digite o numero de pontos turisticos da cidade: \n");
    scanf ("%d", &pontos2);
    
    return 0;

}
