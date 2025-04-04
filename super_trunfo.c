#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // VARIÁVEIS P/CARTA-1 E CARTA-2
    char estado1[30], estado2[30];
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade_populacional1,densidade_populacional2; // variaveis,densidade_populacional1 e 2 e 
    float pib_percapta1,pib_percapta2;             //pib_percapta1 e 2 inseridas para o desafio:nivel aventureiro.
    float inverso_densidade1,inverso_densidade2;
    float super_poder1,super_poder2;
    int comparacao;
    // Entrada da primeira carta

    printf("\n***SUPER TRUNFO CARTA -1*** ");
    printf("\nInforme os dados da primeira carta:\n");

    printf("Estado (A-H): ");
    scanf(" %29s", estado1);

    
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    getchar();
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // %[^\n]: Lê a linha inteira até encontrar Enter.
    
    getchar();  // Limpa o \n deixado pelo scanf anterior(CASO CONTRARIO , O PROXIMO scanf ira ler o \n e nao o valor)

    printf("População: ");
    scanf("%lu", &populacao1);
    if (populacao1 == 0) {
        printf("A população da cidade 1 não pode ser zero!\n");
        return 1; // encerra o programa com erro
    }
    

    printf("Área (km²): ");
    scanf("%f", &area1);
    if (area1 == 0) {
        printf("Área da cidade 1 não pode ser zero!\n");
        return 1; // encerra o programa com erro
    }
    

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    densidade_populacional1 = populacao1/area1;//calculo da densidade populacional1
    pib_percapta1 = (pib1 * 1000000000) / populacao1; // calculo do pib por capita1
    inverso_densidade1 = 1/densidade_populacional1;
    super_poder1 = populacao1+area1+pib1+pontosTuristicos1+pib_percapta1+inverso_densidade1;
    // "Super Poder" somando todos os atributos numéricos 
    //(população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional.

    // Entrada da segunda carta
    printf("\n***SUPER TRUNFO CARTA -2*** ");
    printf("\nInforme os dados da segunda carta:\n");

    printf("Estado (A-H): ");
    scanf(" %29s", estado2);

    
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    getchar();
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); // %[^\n]: Lê a linha inteira até encontrar Enter.

    getchar();  // Limpa o \n deixado pelo scanf anterior(CASO CONTRÁRIO , O PROGRAMA NÃO LÊ O PRÓXIMO VALOR CORRETAMENTE)

    printf("População: ");
    scanf("%lu", &populacao2);
    if (populacao2 == 0) {
        printf("A populaçaõ da cidade 2 não pode ser zero!\n");
        return 1; // encerra o programa com erro
    }
    

    printf("Área (km²): ");
    scanf("%f", &area2);
    if (area2 == 0) {
        printf("Área da cidade 2 não pode ser zero!\n");
        return 1; // encerra o programa com erro
    }
    

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    densidade_populacional2 = populacao2/area2;//calculo da densidade populacional2
    pib_percapta2 = (pib2 * 1000000000) / populacao2; // calculo do pib por capita2
    inverso_densidade2 = 1/ densidade_populacional2;
    super_poder2 = populacao2+area2+pib2+pontosTuristicos2+pib_percapta2+inverso_densidade2;
    // "Super Poder" somando todos os atributos numéricos 
    //(população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional.)
    
    // Exibir os dados cadastrados
    printf("\n---**CARTAS CADASTRADAS** ---\n");


    // CARTA -1
    printf("\n***CARTA 1***:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_percapta1);
    printf("Inverso da Densidade Populacional: %.2f\n", inverso_densidade1);
    printf("Super Poder: %.2f\n", super_poder1);


    // CARTA -2
    printf("\n***CARTA 2***:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_percapta2);
    printf("Inverso da Densidade Populacional: %.2f\n", inverso_densidade2);
    printf("Super Poder: %.2f\n", super_poder2);


    // COMPARAR CARTAS
    printf("**ESCOLHA O ATRIBUTO PARA COMPARAÇÃO**\n");
    printf("*************************************\n");
    printf("1 - POPULAÇÃO :\n");
    printf("2 - ÁREA \n");
    printf("3 - PIB \n");
    printf("4 - NÚMERO DE PONTOS TURÍSTICOS\n");
    printf("5 - DENSIDADE POPULACIONAL \n");
    printf("6 - PIB PERCAPTA \n");
    printf("7 - INVERSO DA DENSIDADE POPULACIONAL \n");
    printf("8 - SUPER PODER \n");
   // Super Poder é a soma dos atributos da carta, incluindo:
   // População, Área, PIB, Pontos Turísticos, PIB per capita e o Inverso da Densidade Populacional.
   // A ideia é representar o "potencial geral" da cidade em uma métrica única.

    scanf("%d" , &comparacao);
   switch (comparacao)
   {
    case 1:
        if (populacao1 > populacao2){
            printf("CARTA 1 VENCEU COM A POPULAÇÃO %lu E A CARTA  2 COM A POPULAÇÃO %lu\n", populacao1, populacao2);
        }
            else if (populacao2 > populacao1){
                printf("CARTA 2 VENCEU COM A POPULAÇÃO %lu E A  CARTA 1 COM A POPULAÇÃO %lu\n", populacao2, populacao1);
            }
                else {
                    printf("EMPATE! Ambos têm o mesmo valor.\n");
                }
             
    break;

    case 2:
        if (area1 > area2){
            printf("CARTA 1 VENCEU COM A ÁREA %.2f E A CARTA 2 COM A ÁREA %.2f\n", area1, area2);
        }
            else if (area2 > area1){
                printf("CARTA 2 VENCEU COM A ÁREA %.2f E A CARTA 1 COM A ÁREA %.2f\n", area2, area1);
            }
            else {
                printf("EMPATE! Ambos têm o mesmo valor.\n");
             }
             
    break;

    case 3:
        if (pib1 > pib2){
            printf("CARTA 1 VENCEU COM O PIB %.2f E A CARTA 2 COM O PIB %.2f\n", pib1, pib2);
        }
            else if (pib2 > pib1){
                printf("CARTA 2 VENCEU COM O PIB %.2f E A CARTA 1 COM O PIB %.2f\n", pib2, pib1);
            }
                else {
                    printf("EMPATE! Ambos têm o mesmo valor.\n");
                }
             
    break;

    case 4:
    if (pontosTuristicos1 > pontosTuristicos2){
        printf("CARTA 1 VENCEU COM O NÚMERO DE PONTOS TURISTICOS %d E A CARTA 2 COM O NÚMERO DE PONTOS TURISTICOS %d\n", pontosTuristicos1, pontosTuristicos2);
    }
        else if (pontosTuristicos2 > pontosTuristicos1){
            printf("CARTA 2 VENCEU COM O NÚMERO DE PONTOS TURISTICOS %d E A CARTA 1 COM O NÚMERO DE PONTOS TURISTICOS %d\n", pontosTuristicos2, pontosTuristicos1);
        }
            else {
                printf("EMPATE! Ambos têm o mesmo valor.\n");
            }
         
    break;

    case 5:
    if (densidade_populacional1 > densidade_populacional2){
        printf("CARTA 1 VENCEU COM A DENSIDADE POPULACIONAL %.2f E A CARTA 2 COM A DENSIDADE POPULACIONAL %.2f\n", densidade_populacional1, densidade_populacional2);
    }
        else if (densidade_populacional2 > densidade_populacional1){
            printf("CARTA 2 VENCEU COM A DENSIDADE POPULACIONAL %.2f E A CARTA 1 COM A DENSIDADE POPULACIONAL %.2f\n", densidade_populacional2, densidade_populacional1);
        }
            else {
             printf("EMPATE! Ambos têm o mesmo valor.\n");
            }
         
    break;
    case 6:
    if (pib_percapta1 > pib_percapta2){
        printf("CARTA 1 VENCEU COM O PIB PER CAPITA %.2f E A CARTA 2 COM O PIB PER CAPITA %.2f\n", pib_percapta1, pib_percapta2);
    }
        else if (pib_percapta2 > pib_percapta1){
            printf("CARTA 2 VENCEU COM O PIB PER CAPITA %.2f E A CARTA 1 COM O PIB PER CAPITA %.2f\n", pib_percapta2, pib_percapta1);
        }
            else {
                printf("EMPATE! Ambos têm o mesmo valor.\n");
            }
         
    break;

    case 7:
    if (inverso_densidade1 > inverso_densidade2){
        printf("CARTA 1 VENCEU COM INVERSO DA DENSIDADE %.2f E A CARTA 2 COM O INVERSO DA DENSIDADE %.2f\n", inverso_densidade1, inverso_densidade2);
    }
        else if (inverso_densidade2 > inverso_densidade1){
            printf("CARTA 2 VENCEU COM INVERSO DA DENSIDADE %.2f E A CARTA 1 COM INVERSO DA DENSIDADE %.2f\n", inverso_densidade2, inverso_densidade1);
        }
            else {
                printf("EMPATE! Ambos têm o mesmo valor.\n");
            }
             
    break;

    case 8:
    if (super_poder1 > super_poder2){
        printf("CARTA 1 VENCEU COM O SUPER PODER %.2f E A CARTA 2 COM O SUPER PODER %.2f\n", super_poder1, super_poder2);
    }
        else if (super_poder2 > super_poder1){
            printf("CARTA 2 VENCEU COM O SUPER PODER %.2f E A CARTA 1 COM O SUPER PODER %.2f\n", super_poder2, super_poder1);
        }
            else {
            printf("EMPATE! Ambos têm o mesmo valor.\n");
            }
         
    break;
  
    default:
    printf("OPÇÃO INVÁLIDA\n");
    break;
   }



    return 0;
}
