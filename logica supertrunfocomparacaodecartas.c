#include <stdio.h>
int main(){
    printf("cadastro cartas super trunfo: \n");
     int codigo1,codigo2;                                                
     float area1,area2,Pib,Pib2,populacao1,populacao2,pontosturisticos;
     float densidadepopulacional1,densidadepopulacional2,pibpercapita1,pibpercapita2;
     char nome1[50],nome2[50];

     printf("digite código do país 1:\n");
     scanf("%d",&codigo1);

     printf("digite o código do país 2:\n");
     scanf("%d",&codigo2);

     printf("digite a área:\n");
     scanf("%f", &area1);

     printf("digite a área da carta 2:\n");
     scanf("%f", &area2);

     printf("digite o pib:\n");
     scanf("%f", &Pib);

     printf("digite o pib da carta 2:\n");
     scanf("%f", &Pib2);

     printf("digite a população:\n");
     scanf("%f", &populacao1);

     printf("digite a população da carta 2:\n");
     scanf("%f", &populacao2);

     printf("digite quantidade de pontos turísticos:\n");
     scanf("%f", &pontosturisticos);

     printf("digite a quantidade de pontos turísticos da carta 2:\n");
     scanf("%f", &pontosturisticos);

     printf("digite o nome:\n");
     scanf("%s", &nome1);

     printf("digite o nome da carta 2:\n");
     scanf("%s", &nome2);

     densidadepopulacional1 =(populacao1 / area1);
     pibpercapita1 =(Pib / populacao1);

     densidadepopulacional2 =(populacao2 / area2);
     pibpercapita2 =(Pib2 / populacao2);

     printf("código do país 1 : %d - código do país 2 : %d",codigo1,codigo2);
     printf("área1:%f - área2:%f", area1,area2);
     printf("pib: %f - pib carta 2: %f - nome1: %s - nome2: %s",Pib,Pib2,nome1,nome2);
     printf("população: %f - população carta 2: %f - pontos turísticos: %f",populacao1,populacao2,pontosturisticos);
     printf("densidade populacional: %f - PIB per Capita: %f", densidadepopulacional1,pibpercapita1);
     printf("densidade populacional2: %f - PIB per Capita2: %f", densidadepopulacional2,pibpercapita2);

     if (area1>=area2)
     {
        printf("carta 1 venceu");

     }
     else (area1<=area2);
     {
        printf("carta 2 venceu");
     }
}
