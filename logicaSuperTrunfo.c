#include <stdio.h>

int main(){
     //Variaveis 1
    char estado1;
 
    char numerodacarta1[2];
 
    char nomedacidade1[30];
 
    int População1;
     
    float area1;
 
    float pib1;
 
    int numerodept1;

    float densidadepopulacional1;

    float pibpercapita1;

    //variaveis carta 2

    char estado2;
 
    char numerodacarta2[2];
 
    char nomedacidade2[30];
 
    int População2;
     
    float area2;
 
    float pib2;
 
    int numerodept2;

    float densidadepopulacional2;

    float pibpercapita2;

    int menuprincipal;
///////////////////////////////////////////////////////////////////////////////////////////

    printf("********************SUPER TRUNFO*************************\n");

    printf("1. Iniciar Jogo\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
scanf("%d", &menuprincipal);

    switch (menuprincipal)
    {
    case 1:
    // perguntas 1
    printf("coloque o seu estado com 1 siglas:\n");
    scanf(" %c", &estado1);

    printf("coloque o numero da carta. ex:03\n");
    scanf("%s", numerodacarta1);

    printf("coloque o nome da cidade:\n");
    scanf("%s", nomedacidade1);

    printf("coloque a População:\n");
    scanf("%d", &População1);

    printf("coloque a Area:\n");
    scanf("%f", &area1);

    printf("coloque o pib:\n");
    scanf("%f", &pib1);

    printf("coloque o Numero de pontos Turisticos:\n");
    scanf("%d", &numerodept1);

    densidadepopulacional1 = População1 / area1;

    pibpercapita1 = pib1 / População1;

//perguntas 2

printf("****AGORA VAMOS PARA A CARTA 2****\n");

printf("coloque o seu estado com 1 siglas:\n");
scanf(" %c", &estado2);

printf("coloque o numero da carta. ex:03\n");
scanf("%s", &numerodacarta2);

printf("coloque o nome da cidade:\n");
scanf("%s", &nomedacidade2);

printf("coloque a População:\n");
scanf("%d", &População2);

printf("coloque a Area:\n");
scanf("%f", &area2);

printf("coloque o pib:\n");
scanf("%f", &pib2);

printf("coloque o Numero de pontos Turisticos:\n");
scanf("%d", &numerodept2);

densidadepopulacional2 = População2 / area2;

pibpercapita1 = pib2 / População2;
/////////////////////////

int menucomparacaocarta1;
int menucomparacaocarta2;

printf("***VOCE CONCLUIU AS INFORMACOES*** \n");
printf("Qual atributo voce Deseja comparar da carta 1? \n");
printf("1. Populacao: \n");
printf("2. Area: \n");
printf("3. Pib: \n");
printf("4. Pib Per Capita: \n");
printf("5. Numero de Pontos Turisticos: \n");
printf("6. Densidade Populacional: \n");
scanf("%d", &menucomparacaocarta1);

int resultado1 = População1 > População2 ? 1 : 0;
int resultado2 = area1 > area2 ? 1 : 0;
int resultado3 = pib1 > pib2 ? 1 : 0;
int resultado4 = pibpercapita1 > pibpercapita2 ? 1 : 0;
int resultado5 = numerodept1 > numerodept2 ? 1 : 0;
int resultado6 = densidadepopulacional1 > densidadepopulacional2 ? 1 : 0;


////
switch (menucomparacaocarta1)
{
    //POPULACAO - COMPARACAO
    case 1:
 printf("Voce comparara a Populacao com qual atributo da carta 2?\n");
printf("1. Populacao: \n");//
printf("2. Area: \n");
printf("3. Pib: \n");
printf("4. Pib Per Capita: \n");
printf("5. Numero de Pontos Turisticos: \n");
printf("6. Densidade Populacional: \n");
 scanf("%d", &menucomparacaocarta2);

 switch (menucomparacaocarta2)
 {
 case 1:

 if (resultado1 == 1)
 {
    printf("A CARTA 1 VENCEU A DISPUTA");
 }else
 {
    printf("A CARTA 2 VENCEU");
 }
  break;

  case 2:
  
  if (resultado1 > resultado2)
  {
     printf("A CARTA 1 VENCEU A DISPUTA");
  }else if(resultado1 == resultado3)
  {
     printf("EMPATOU");
  }else
  {
    printf("CARTA 2 VENCEU");
  }
    break;
    case 3:
    if (resultado1 > resultado3)
    {
       printf("A CARTA 1 VENCEU A DISPUTA");
    }else if(resultado1 == resultado3)
    {
       printf("EMPATOU");
    }else
    {
      printf("CARTA 2 VENCEU");
    }
    break;

    case 4:
    if (resultado1 > resultado4)
    {
       printf("A CARTA 1 VENCEU A DISPUTA");
    }else if(resultado1 == resultado4)
    {
       printf("EMPATOU");
    }else
    {
      printf("CARTA 2 VENCEU");
    }
    break;
    case 5:
    if (resultado1 > resultado5)
    {
       printf("A CARTA 1 VENCEU A DISPUTA");
    }else if(resultado1 == resultado5)
    {
       printf("EMPATOU");
    }else
    {
      printf("CARTA 2 VENCEU");
    }
    break;
    case 6:
    if (resultado1 > resultado6)
    {
       printf("A CARTA 1 VENCEU A DISPUTA");
    }else if(resultado1 == resultado6)
    {
       printf("EMPATOU");
    }else
    {
      printf("CARTA 2 VENCEU");
    }
    break;
 
 default:
 printf("opcao invalida!");
    break;
 }
   break;
   //FINALIZADO

   //Area
    case 2:
    printf("Voce comparara a AREA com qual atributo da carta 2?\n");
    printf("1. Populacao: \n");//
    printf("2. Area: \n");
    printf("3. Pib: \n");
    printf("4. Pib Per Capita: \n");
    printf("5. Numero de Pontos Turisticos: \n");
    printf("6. Densidade Populacional: \n");
     scanf("%d", &menucomparacaocarta2);
    
     switch (menucomparacaocarta2)
     {
     case 1:
    
     if (resultado2 > resultado1)
     {
        printf("A CARTA 1 VENCEU A DISPUTA");
     }else if(resultado2 == resultado1)
     {
        printf("EMPATOU");
     }else
     {
       printf("CARTA 2 VENCEU");
     }
      break;
    
      case 2:
      
      if (resultado2 == 1)
      {
         printf("A CARTA 1 VENCEU A DISPUTA");
     
      }else
      {
        printf("CARTA 2 VENCEU");
      }
        break;
        case 3:
        if (resultado2 > resultado3)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else if(resultado2 == resultado3)
        {
           printf("EMPATOU");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
    
        case 4:
        if (resultado2 > resultado4)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else if(resultado2 == resultado4)
        {
           printf("EMPATOU");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
        case 5:
        if (resultado2 > resultado5)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else if(resultado2 == resultado5)
        {
           printf("EMPATOU");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
        case 6:
        if (resultado2 > resultado6)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else if(resultado2 == resultado6)
        {
           printf("EMPATOU");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
     
     default:
     printf("opcao invalida!");
        break;
     }
     /// Finalizado
    break;

    //pib
    case 3:
    printf("Voce comparara a PIB com qual atributo da carta 2?\n");
    printf("1. Populacao: \n");//
    printf("2. Area: \n");
    printf("3. Pib: \n");
    printf("4. Pib Per Capita: \n");
    printf("5. Numero de Pontos Turisticos: \n");
    printf("6. Densidade Populacional: \n");
     scanf("%d", &menucomparacaocarta2);
    
     switch (menucomparacaocarta2)
     {
     case 1:
    
     if (resultado3 > resultado1)
     {
        printf("A CARTA 1 VENCEU A DISPUTA");
     }else if(resultado3 == resultado1)
     {
        printf("EMPATOU");
     }else
     {
       printf("CARTA 2 VENCEU");
     }
      break;
    
      case 2:
      
      if (resultado3 > resultado2)
      {
         printf("A CARTA 1 VENCEU A DISPUTA");
     
      }else if(resultado3 == resultado2)
      {
        printf("EMPATOU");
      }else
      {
        printf("A CARTA 2 VENCEU");
      }
      
        break;
        case 3:
        if (resultado3 == 1)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
    
        case 4:
        if (resultado3 > resultado4)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else if(resultado3 == resultado4)
        {
           printf("EMPATOU");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
        case 5:
        if (resultado3 > resultado5)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else if(resultado3 == resultado5)
        {
           printf("EMPATOU");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
        case 6:
        if (resultado3 > resultado6)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else if(resultado3 == resultado6)
        {
           printf("EMPATOU");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
     
     default:
     printf("opcao invalida!");
        break;
     }
     //FINALIZADO
     
    break;

    case 4:
    printf("Voce comparara a PIB PER CAPITA com qual atributo da carta 2?\n");
    printf("1. Populacao: \n");//
    printf("2. Area: \n");
    printf("3. Pib: \n");
    printf("4. Pib Per Capita: \n");
    printf("5. Numero de Pontos Turisticos: \n");
    printf("6. Densidade Populacional: \n");
     scanf("%d", &menucomparacaocarta2);
    
     switch (menucomparacaocarta2)
     {
     case 1:
    
     if (resultado4 > resultado1)
     {
        printf("A CARTA 1 VENCEU A DISPUTA");
     }else if(resultado4 == resultado1)
     {
        printf("EMPATOU");
     }else
     {
       printf("CARTA 2 VENCEU");
     }
      break;
    
      case 2:
      
      if (resultado4 > resultado2)
      {
         printf("A CARTA 1 VENCEU A DISPUTA");
     
      }else if(resultado4 == resultado2)
      {
        printf("EMPATOU");
      }else
      {
        printf("CARTA 2 VENCEU");
      }
      
        break;
        case 3:
        if (resultado4 > resultado3)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else if(resultado4 == resultado3)
        {
           printf("EMPATOU");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
    
        case 4:
        if (resultado4 == 1)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
        case 5:
        if (resultado4 > resultado5)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else if(resultado4 == resultado5)
        {
           printf("EMPATOU");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
        case 6:
        if (resultado4 > resultado6)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else if(resultado4 == resultado6)
        {
           printf("EMPATOU");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
     
     default:
     printf("opcao invalida!");
        break;
     }
    
    break;
    //finalizado

    case 5:
    printf("Voce comparara a PIB PER CAPITA com qual atributo da carta 2?\n");
    printf("1. Populacao: \n");//
    printf("2. Area: \n");
    printf("3. Pib: \n");
    printf("4. Pib Per Capita: \n");
    printf("5. Numero de Pontos Turisticos: \n");
    printf("6. Densidade Populacional: \n");
     scanf("%d", &menucomparacaocarta2);
    
     switch (menucomparacaocarta2)
     {
     case 1:
    
     if (resultado5 > resultado1)
     {
        printf("A CARTA 1 VENCEU A DISPUTA");
     }else if(resultado4 == resultado1)
     {
        printf("EMPATOU");
     }else
     {
       printf("CARTA 2 VENCEU");
     }
      break;
    
      case 2:
      
      if (resultado5 > resultado2)
      {
         printf("A CARTA 1 VENCEU A DISPUTA");
     
      }else if(resultado5 == resultado2)
      {
        printf("EMPATOU");
      }else
      {
        printf("CARTA 2 VENCEU");
      }
      
        break;
        case 3:
        if (resultado5 > resultado3)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else if(resultado5 == resultado3)
        {
           printf("EMPATOU");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
    
        case 4:
        if (resultado5 > resultado4)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else if(resultado5 == resultado4)
        {
          printf("EMPATE");
        }else
        {
            printf("CARTA 2 GANHOU");
        }
        
        break;
        case 5:
        if (resultado5 == 1)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
        case 6:
        if (resultado5 > resultado6)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else if(resultado5 == resultado6)
        {
           printf("EMPATOU");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
     
     default:
     printf("opcao invalida!");
        break;
     }
    
    break;

    case 6:
    printf("Voce comparara o NUMERO DE PONTOS TURISTICOS com qual atributo da carta 2?\n");
    printf("1. Populacao: \n");//
    printf("2. Area: \n");
    printf("3. Pib: \n");
    printf("4. Pib Per Capita: \n");
    printf("5. Numero de Pontos Turisticos: \n");
    printf("6. Densidade Populacional: \n");
     scanf("%d", &menucomparacaocarta2);
    
     switch (menucomparacaocarta2)
     {
     case 1:
    
     if (resultado6 > resultado1)
     {
        printf("A CARTA 1 VENCEU A DISPUTA");
     }else if(resultado6 == resultado1)
     {
        printf("EMPATOU");
     }else
     {
       printf("CARTA 2 VENCEU");
     }
      break;
    
      case 2:
      
      if (resultado6 > resultado2)
      {
         printf("A CARTA 1 VENCEU A DISPUTA");
     
      }else if(resultado6 == resultado2)
      {
        printf("EMPATOU");
      }else
      {
        printf("CARTA 2 VENCEU");
      }
      
        break;
        case 3:
        if (resultado6 > resultado3)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else if(resultado6 == resultado3)
        {
           printf("EMPATOU");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
    
        case 4:
        if (resultado6 > resultado4)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else if(resultado6 == resultado4)
        {
          printf("EMPATE");
        }else
        {
            printf("CARTA 2 GANHOU");
        }
        
        break;
        case 5:
        if (resultado6 > resultado5)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else if(resultado6 == resultado5)
        {
           printf("EMPATOU");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
        break;
        case 6:
        if (resultado6 == 1)
        {
           printf("A CARTA 1 VENCEU A DISPUTA");
        }else
        {
          printf("CARTA 2 VENCEU");
        }
        break;
     
     default:
     printf("opcao invalida!");
        break;
     }
    /* code */
    break;
 
 default:
 printf("Opcao INVALIDA!");
    break;
 }

//////


    ////

        break;

        case 2:
          printf("*****REGRAS*****\n");
          printf("Aqui voce montara 2 cartas, escolhendo atributos de cidades.\n");
          printf("No final voce escolhera para Batalha, qual atributo voce quer comparar\n");
        /* code */
        break;
        case 3:
        printf("Fim.\n");
        break;
    }
///////////////
 printf("\nOBRIGADO POR PARTICIPAR DO SUPER TRUNFO.\n");
    }