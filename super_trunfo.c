#include <stdio.h>

int main() {
    // Declaração das variáveis para Carta 1
    char nomePais1[100];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1;

    // Declaração das variáveis para Carta 2
    char nomePais2[100];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", nomePais1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em trilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calcula a densidade demográfica da Carta 1
    densidade1 = populacao1 / area1;

    printf("\n");

    // Cadastro da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", nomePais2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em trilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calcula a densidade demográfica da Carta 2
    densidade2 = populacao2 / area2;

    // Escolha do primeiro atributo
    int atributo1, atributo2;

    printf("\nEscolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Demográfica\n");
    scanf("%d", &atributo1);

    // Escolha do segundo atributo
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");

    switch (atributo1) {
        case 1:
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Densidade Demográfica\n");
            break;
        case 2:
            printf("1. População\n");
            printf("3. PIB\n");
            printf("4. Densidade Demográfica\n");
            break;
        case 3:
            printf("1. População\n");
            printf("2. Área\n");
            printf("4. Densidade Demográfica\n");
            break;
        case 4:
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            break;
        default:
            printf("Atributo inválido!\n");
            return 1;
    }

    scanf("%d", &atributo2);

    // Validação para garantir que não sejam iguais
    if (atributo1 == atributo2) {
        printf("Erro: você não pode escolher o mesmo atributo duas vezes!\n");
        return 1;
    }

    // Comparação dos atributos
    float valor1_1 = 0, valor2_1 = 0;
    float valor1_2 = 0, valor2_2 = 0;

    // Primeiro Atributo
    switch (atributo1) {
        case 1:
            valor1_1 = populacao1;
            valor2_1 = populacao2;
            break;
        case 2:
            valor1_1 = area1;
            valor2_1 = area2;
            break;
        case 3:
            valor1_1 = pib1;
            valor2_1 = pib2;
            break;
        case 4:
            valor1_1 = densidade1;
            valor2_1 = densidade2;
            break;
    }

    // Segundo Atributo
    switch (atributo2) {
        case 1:
            valor1_2 = populacao1;
            valor2_2 = populacao2;
            break;
        case 2:
            valor1_2 = area1;
            valor2_2 = area2;
            break;
        case 3:
            valor1_2 = pib1;
            valor2_2 = pib2;
            break;
        case 4:
            valor1_2 = densidade1;
            valor2_2 = densidade2;
            break;
    }

    // Mostrar o resultado da comparação de cada atributo
    printf("\nComparando: %s VS %s\n", nomePais1, nomePais2);
    printf("Atributo 1 escolhido:\n");
    switch (atributo1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Densidade Demográfica\n"); break;
    }
    printf("%s: %.2f\n", nomePais1, valor1_1);
    printf("%s: %.2f\n", nomePais2, valor2_1);

    printf("\nAtributo 2 escolhido:\n");
    switch (atributo2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Densidade Demográfica\n"); break;
    }
    printf("%s: %.2f\n", nomePais1, valor1_2);
    printf("%s: %.2f\n", nomePais2, valor2_2);

    // Comparação de cada atributo e soma
    float soma1 = valor1_1 + valor1_2;
    float soma2 = valor2_1 + valor2_2;

    printf("\nSoma dos Atributos:\n");
    printf("%s: %.2f\n", nomePais1, soma1);
    printf("%s: %.2f\n", nomePais2, soma2);

    // Lógica para determinar o vencedor ou empate
    if (soma1 > soma2) {
        printf("Resultado: %s venceu!\n", nomePais1);
    } else if (soma2 > soma1) {
        printf("Resultado: %s venceu!\n", nomePais2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
