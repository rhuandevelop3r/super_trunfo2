#include <stdio.h>

int main(){

    // INFORMACOES DA CARTA 01
    char estado1[5] = "RJ";
    char codigo_carta1[4] = "A01";
    char nome_cidade1[50] = "RIO DE JANEIRO";
    int populacao1 = 3000000;
    float area_cidade1 = 6000000;
    float pib1 = 1000000;
    int quantidade_pontos_turisticos1 = 100;

    // INFORMACOES DA CARTA 02
    char estado2[5] = "SP";
    char codigo_carta2[4] = "A02";
    char nome_cidade2[50] = "SAO PAULO";
    int populacao2 = 9000000;
    float area_cidade2 = 7000000;
    float pib2 = 20000000;
    int quantidade_pontos_turisticos2 = 1;

    // CALCULO DA DENSIDADE POPULACIONAL
    double densidade_populacional_01 =  area_cidade1 / (float)populacao1;
    double densidade_populacional_02 = area_cidade2 / (float)populacao2;


    // CALCULO DO PIB PER CAPITA
    double pib_per_capita1 = pib1 / (float)populacao1;
    double pib_per_capita2 = pib2 / (float)populacao2;

    // verifica se a densidade é igual, maior ou menor entre a cidade 1 e 2;
    if(densidade_populacional_01 == densidade_populacional_02)
    {
        printf("Carta 1 - %s - %s: %.2lf\n", nome_cidade1, estado1, densidade_populacional_01);
        printf("Carta 2 - %s - %s: %.2lf\n", nome_cidade2, estado2, densidade_populacional_02);
        printf("Resultado: Carta 1: %s == Carta 2: %s -> EMPATE.", nome_cidade1, nome_cidade2);
    }
    else if(densidade_populacional_01 > densidade_populacional_02)
    {
        printf("Carta 1 - %s - %s: %.2lf\n", nome_cidade1, estado1, densidade_populacional_01);
        printf("Carta 2 - %s - %s: %.2lf\n", nome_cidade2, estado2, densidade_populacional_02);
        printf("Resultado: Carta 2: %s -> VENCEU, POIS TEM MENOR DENSIDADE.", nome_cidade2);
    }
    else
    {
        printf("Carta 1 - %s - %s: %.2lf\n", nome_cidade1, estado1, densidade_populacional_01);
        printf("Carta 2 - %s - %s: %.2lf\n", nome_cidade2, estado2, densidade_populacional_02);
        printf("Resultado: Carta 1: %s -> VENCEU, POIS TEM MENOR DENSIDADE.", nome_cidade1);
    }


    // impede a janela do programa fechar ao ser executado no windows;
    getchar();
    getchar();

    // retorna 0 caso o programa seja executado com sucesso;
    return 0;
}
