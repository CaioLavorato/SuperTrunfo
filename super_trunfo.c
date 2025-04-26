int main() {
    // Declaração das variáveis da Carta 1
    char nomePais1[100];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1;

    // Declaração das variáveis da Carta 2
    char nomePais2[100];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2;

    // Cadastro da carta 1
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

    // Calcula a densidade demográfica da carta 1
    densidade1 = populacao1 / area1;

    printf("\n");

    // Cadastro da carta 2
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

    // Calcula a densidade demográfica da carta 2
    densidade2 = populacao2 / area2;

    // Menu interativo para o jogador escolher o atributo a ser comparado
    printf("\n==== Menu de Atributos para Comparação ====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o atributo (1-5): ");

    int opcao;
    scanf("%d", &opcao);

    // Exibe os nomes dos países comparados
    printf("\nComparando: %s VS %s\n", nomePais1, nomePais2);

    // Switch para selecionar e comparar os atributos
    switch (opcao) {
        case 1: // Comparação por População
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", nomePais1, populacao1);
            printf("%s: %d habitantes\n", nomePais2, populacao2);
            if (populacao1 > populacao2){
                printf("Resultado: %s venceu!\n", nomePais1);
            }                
            else if (populacao2 > populacao1){
                printf("Resultado: %s venceu!\n", nomePais2);
            }
            else{
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Comparação por Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nomePais1, area1);
            printf("%s: %.2f km²\n", nomePais2, area2);
            if (area1 > area2){
                printf("Resultado: %s venceu!\n", nomePais1);
            }
            else if (area2 > area1){
                printf("Resultado: %s venceu!\n", nomePais2);
            }
            else{
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // Comparação por PIB
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f trilhões\n", nomePais1, pib1);
            printf("%s: R$ %.2f trilhões\n", nomePais2, pib2);
            if (pib1 > pib2){
                printf("Resultado: %s venceu!\n", nomePais1);
            }
            else if (pib2 > pib1){
                printf("Resultado: %s venceu!\n", nomePais2);
            }
            else{
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Comparação por Pontos Turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nomePais1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomePais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2){
                printf("Resultado: %s venceu!\n", nomePais1);
            }
            else if (pontosTuristicos2 > pontosTuristicos1){
                printf("Resultado: %s venceu!\n", nomePais2);
            }
            else{
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Comparação por Densidade Demográfica (regra invertida: menor vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nomePais1, densidade1);
            printf("%s: %.2f hab/km²\n", nomePais2, densidade2);
            if (densidade1 < densidade2){
                printf("Resultado: %s venceu!\n", nomePais1);
            }               
            else if (densidade2 < densidade1){
                printf("Resultado: %s venceu!\n", nomePais2);
            }
            else{
                printf("Resultado: Empate!\n");
            }
            break;

        default: // Caso o usuário digite uma opção inválida
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
