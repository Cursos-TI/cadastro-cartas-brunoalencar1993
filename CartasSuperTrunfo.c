#include <stdio.h>

int main() {
    int populacao = 785368, turismo = 23;
    float area = 167.401, pib = 23.8, densidade = 4691.53;
    char estado = 'A', cidade[50] = "Natal", codigo[50] = "A01";
    int populacao2 = 2570000, turismo2 = 15;
    float area2 = 693.442, pib2 = 62.954;
    char estado2 = 'B', cidade2[50] = "Salvador", codigo2 [50] = "B02";

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km/²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos %d\n", turismo);
    printf("Densidade Populacional %.2f", densidade);

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
