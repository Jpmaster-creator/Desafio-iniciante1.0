#include <stdio.h>


int main() {
    char estado1, estado2;
    char codigocarta1 [3], codigocarta2 [3];
    char nomecidade1 [15], nomecidade2 [15];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;


    printf("Por favor, digite a letra inicial do estado de sua escolha: ");
    scanf("%c", &estado1);

    printf("Por favor, insira a letra do estado seguida de um numero de 01 a 04 (exemplo: A01, B03): ");
    scanf("%s", &codigocarta1);

    printf("Por favor, digite o nome da cidade escolhida, sem espaços: ");
    scanf("%s", &nomecidade1);

    printf("Defina o numero de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Defina agora o tamanho da area da cidade: ");
    scanf("%f", &area1);
    
    printf("Escolha o PIB, referente a cidade: ");
    scanf("%f", &pib1);

    printf("Por ultimo defina uma quantidade de pontos turisticos presentes na cidade: ");
    scanf("%d", &turistico1);

    printf("Sua carta esta pronta!\n");
    printf("Carta1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigocarta1);
    printf("Cidade: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", turistico1);

    printf("Agora vamos criar a segunda carta!\n");

    printf("Por favor, digite a letra inicial do estado de sua escolha: ");
    scanf(" %c", &estado2);                                                             // Foi necessario colocar um espaço atrás da "%" por causa de uma anamolia da linguagem c que adiciona \n //

    printf("Por favor, insira a letra do estado seguida de um numero de 01 a 04 (exemplo: A01, B03): ");
    scanf("%s", &codigocarta2);

    printf("Por favor, digite o nome da cidade escolhida, sem espaços: ");
    scanf("%s", &nomecidade2);

    printf("Defina o numero de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Defina agora o tamanho da area da cidade: ");
    scanf("%f", &area2);

    printf("Escolha o PIB, referente a cidade: ");
    scanf("%f", &pib2);

    printf("Por ultimo defina uma quantidade de pontos turisticos presentes na cidade: ");
    scanf("%d", &turistico2);

    printf("Sua carta esta pronta!\n");
    printf("Carta2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigocarta2);
    printf("Cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", turistico2);


    
    return 0;
}
