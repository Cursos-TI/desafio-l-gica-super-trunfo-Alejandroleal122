#include <stdio.h>
    int main(){
    // Variavéis para armazenar os nomes das cidades 
    char estado [3];
    char codigo[50]; // Ex. A01,A02...
    char cidade[50];
    int populacao;
    int populacaoB;
    float area;
    float areaB;
    float pib;
    float pibB;
    int pontos_turisticos;
    int pontos_turisticosB;
    float densidade;
    float densidadeB;
    float pib_percapita;
    float pib_percapitaB; 
    double SuperPoder;
    double SuperPoderB;
    int resultado;

    printf("CADASTRE SUAS CARTAS\n");
    printf("Digite o seu estado: \n");
    scanf("%c", &estado);
    
    printf("Digite o codigo da sua cidade \n");
    scanf("%s", &codigo);
    
    printf("Digite a sua cidade \n");
    scanf("%s", &cidade);
    
    printf("Populacao  \n");
    scanf("%d", &populacao);
    
    printf("Area em km2 \n");
    scanf("%f", &area);
    
    printf("PIB da sua cidade \n");
    scanf("%f", &pib);
    
    printf("Número de pontos turisticos \n");
    scanf("%d", &pontos_turisticos);
    
    printf("Carta cadastrada com sucesso \n");
    
    printf("O seu Estado é: %c,\n", estado);
    
    printf("Codigo: %s \n" , codigo);
    
    printf("Cidade: %s \n", cidade );
    
    printf("Populacão: %d \n", populacao);
    
    printf("Area: %f \n", area);
    
    printf("PIB: %f \n", pib);
    
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos);
    
  //calcula densidade populacional, pib per capita, densidade invertida e súper poder da primeira carta
    densidade = (populacao / area);
    pib_percapita = (pib / populacao);
    SuperPoder= (populacao + area + pib + pib_percapita / densidade);
    
    
    printf("Densidade: %f \n", densidade);
    
    printf("PIB per capita: %f \n", pib_percapita);
    
    printf("Super Poder: %f \n", SuperPoder);
    
    printf("CADASTRE SUA SEGUNDA CARTA \n");
    printf("Digite o seu estado: \n ");
    scanf( "%c",  &estado);
    
    printf("Digite o codigo da sua cidade \n");
    scanf("%s", &codigo);
    
    printf("Digite a sua cidade \n");
    scanf("%s", &cidade);
    
    printf("Populacão  \n");
    scanf("%d", &populacaoB);
    
    printf("Area em km2 \n");
    scanf("%f", &areaB);
    
    printf("PIB da sua cidade \n");
    scanf("%f", &pibB);
    
    printf("Número de pontos turisticos \n");
    scanf("%d", &pontos_turisticosB);

      //calcula densidade populacional, pib per capita, densidade invertida e súper poder da segunda carta

    densidadeB = (populacaoB / areaB);
    pib_percapitaB = (pibB / populacaoB);
    SuperPoderB = (populacaoB + areaB + pibB + pib_percapitaB / densidadeB);
    
    
    printf("Densidade: %f \n", densidadeB);
    
    printf("PIB per capita: %f \n", pib_percapitaB);
    
    printf("Super Poder: %f \n", SuperPoderB);
    
    printf("Carta cadastrada com sucesso \n");
    
    printf("O seu Estado é: %c ,\n", estado);
    
    printf("Codigo: %s \n" , codigo);
    
    printf("Cidade: %s \n", cidade );
    
    printf("Populacão: %d \n", populacaoB);
    
    printf("Area: %f \n", areaB);
    
    printf("PIB: %f \n", pibB);
    
    printf("Numero de pontos turisticos %d \n", pontos_turisticosB);
    
    printf("Densidade: %f \n", densidadeB);
    
    printf("PIB per capita: %f \n", pib_percapitaB);
    
    printf("Super Poder: %f \n", SuperPoderB);

    //Comparações dos atributos das cartas 
    
    printf("COMPARAÇÃO ENTRE CARTAS\N");
    if ( populacao > populacaoB){
        printf("População: Carta 1 venceu \n");
    } else {
        printf("População: Carta 2 venceu \n");

    }
      
    if (area > areaB) {
        printf("Área: Carta 1 venceu \n");
    } else {
        printf("Área: Carta 2 venceu \n");
    }
    
    if (pib > pibB) {
        printf("PIB: Carta 1 venceu \n");
    } else {
        printf("PIB: Carta 2 venceu \n");
    }
   
    if (pontos_turisticos > pontos_turisticosB) {
        printf("Pontos Turísticos: Carta 1 venceu \n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu \n");
    }
    
    if (densidade < densidadeB) {
        printf("Densidade Populacional: Carta 1 venceu \n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu \n");
    }
    
    if (pib_percapita > pib_percapitaB) {
        printf("PIB per Capita: Carta 1 venceu \n");
    } else {
        printf("PIB per Capita: Carta 2 venceu \n");
    }
    
    if (SuperPoder > SuperPoderB) {
        printf("Super Poder: Carta 1 venceu \n");
    } else {
        printf("Super Poder: Carta 2 venceu \n");
    }


        return 0;
     }