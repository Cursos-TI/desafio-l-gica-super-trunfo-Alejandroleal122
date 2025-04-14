#include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 
 int main() {
 
     //Carta 01
 
     char estado[50];
     char codigoestado[50];
     char cidade[50];
     int populacao, pontoturistico;
     float area, pib, densidadepopulacional, pibpercapita;
 
     printf("Carta 01 \n");
    
     float populacao, pontoturistico;
     float area, pib, densidadepopulacional;
     int carta_01, carta_02;
     char pais_01[50], pais_02[50];
 
     printf("Digite o nome do estado: ");
     scanf("%s ", &estado);
 
     printf("Digite o código do estado: ");
     scanf("%s ", &codigoestado);
     printf("Carta 01 \n");
 
     printf("Digite o nome da cidade: ");
     scanf("%s ", &cidade);
     printf("Qual o país: ");
     scanf("%s", &pais_01);
 
     printf("Digite a população: ");
     scanf("%d", &populacao);
     scanf("%f", &populacao);
 
     printf("Digite a área: ");
     scanf("%f", &area);
 @@ -31,34 +28,24 @@ int main() {
     scanf("%f", &pib);
 
     printf("Digite a quantidade de pontos turísticos: ");
     scanf("%d ", &pontoturistico);
     scanf("%f ", &pontoturistico);
 
     densidadepopulacional = populacao / area;
     pibpercapita = pib / populacao;
 
     //Carta 02
 
     printf("Carta 02 \n");
 
     char estado_2[50];
     char codigoestado_2[50];
     char cidade_2[50];
     int populacao_2, pontoturistico_2;
     float area_2, pib_2, densidadepopulacional_2, pibpercapita_2;
 
 
 
     printf("Digite o nome do estado: ");
     scanf("%s ", &estado_2);
 
     printf("Digite o código do estado: ");
     scanf("%s ", &codigoestado_2);
 
     printf("Digite o nome da cidade: ");
     scanf("%s ", &cidade_2);
     float populacao_2, pontoturistico_2;
     float area_2, pib_2, densidadepopulacional_2;
 
      
     printf("Qual o país: ");
     scanf("%s", &pais_02);
     
     printf("Digite a população: ");
     scanf("%d", &populacao_2);
     scanf("%f", &populacao_2);
 
     printf("Digite a área: ");
     scanf("%f", &area_2);
 @@ -67,17 +54,94 @@ int main() {
     scanf("%f", &pib_2);
 
     printf("Digite a quantidade de pontos turísticos: ");
     scanf("%d", &pontoturistico_2);
     scanf("%f", &pontoturistico_2);
 
     densidadepopulacional_2 = populacao_2 / area_2;
     pibpercapita_2 = pib_2 / populacao_2;
    
 if (populacao > populacao_2) {
     printf("a carta 01 tem a maior população ##Carta vencedora## \n")
 } else{
     printf("a carta 02 tem a maior população ##Carta vencedora##\n")    
 
 
 srand(time(0));
 
 printf(" ### Super trunfo ### \n");
 printf("carta 1 \n");
 printf("escolha a opção: \n");
 printf("1.População \n");
 printf("2.Área \n");
 printf("3.Pontos turísticos \n");
 printf("4.Densidade democrática \n");
 scanf("%d", &carta_01);
 
 printf(" ### Super trunfo ### \n");
 printf("carta 2 \n");
 printf("escolha a opção: \n");
 printf("1.População \n");
 printf("2.Área \n");
 printf("3.Pontos turísticos \n");
 printf("4.Densidade democrática \n");
 scanf("%d", &carta_02);
 
 
 
 switch (carta_01)
 {
 case 1:
     printf("O jogador 1: População - ", populacao);
     break;
 
 case 2:
     printf("O jogador 1: Área - ", area);
     break;    
 
 case 3:
     printf("O jogador 1: pontos turísticos - ", pontoturistico);
     break;
     
 case 4:
     printf("O jogador 1: Densidade democrática - ", densidadepopulacional);
     break;    
 
 
 default:
     printf("Opção inválida!");
     break;
 }
 
 switch (carta_02)
 {
 case 1:
     printf("O jogador 2: População", populacao_2);
     break;
 
 case 2:
     printf("O jogador 2: Área", area_2);
     break;    
 
 case 3:
     printf("O jogador 2: pontos turísticos", pontoturistico_2);
     break;
 
 case 4:
     printf("O jogador 2: Densidade democrática", densidadepopulacional_2);
     break;    
 
 
 default:
     printf("Opção inválida!");
     break;
 }
 
 if (carta_01 == carta_02){
     printf("### Jogo empatou ### \n");
 } else if ((carta_01 == 1 > carta_02 == 1) ||
           (carta_01 == 2 > carta_02 == 2) ||
           (carta_01 == 3 > carta_02 == 3) ||
           (carta_01 == 4 > carta_02 == 4)){
     printf("### A carta 01 venceu ### \n");
 }else{
     printf("### A carta 02 venceu ###");
 }