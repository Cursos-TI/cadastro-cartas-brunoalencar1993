#include <stdio.h>

int main() {
    int populacao = 12325000, turismo = 50;
    float area = 1521.11, pib = 699.28;
    char estado = 'A', cidade[50] = "São Paulo", codigo[50] = "A01";
    int populacao2 = 6748000, turismo2 = 30;
    float area2 = 1200.25, pib2 = 300.50;
    char estado2 = 'B', cidade2[50] = "Rio de Janeiro", codigo2 [50] = "B02";

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km/²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos %d\n", turismo);

    printf ("\n");
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km/²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos %d\n", turismo2);

return 0;
} 
