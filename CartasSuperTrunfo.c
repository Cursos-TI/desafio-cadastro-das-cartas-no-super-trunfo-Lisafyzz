#include <stdio.h>
int main (){
//dados das cartas
char estado1;
char estado2;
char codigo1[10];
char codigo2[10];
int populacao1;
int populacao2;
char nomedacidade1[20];
char nomedacidade2[20];
float area1;
float area2;
float pib1;
float pib2;
int pontosturisticos1;
int pontosturisticos2;

//entrada de dados da primeira carta

printf("Escolha uma letra de A a H para ser o Estado. \n");
printf("Estado: ");
scanf(" %c", &estado1);

printf("Coloque a letra do estado seguido de 1 número de 01 a 04 para ser o código da carta. \n");
printf("Código: ");
scanf(" %2s", codigo1);

printf("Insira a quantidade de habitantes da cidade\n");
printf("População: ");
scanf(" %d", &populacao1);

printf("Escreva o nome da cidade. \n");
getchar();
printf("Nome da cidade: ");
fgets(nomedacidade1, sizeof(nomedacidade1), stdin);

printf("Insira a área territorial da cidade. \n");
printf("Área em km²: ");
scanf(" %f", &area1);

printf("Insira o PIB da cidade \n");
printf("PIB: ");
scanf("%f", &pib1);

printf("Insira a quantidade de pontos turísticos da cidade. \n"); 
printf("Pontos turísticos: ");
scanf(" %d", &pontosturisticos1);

// dados da segunda carta

printf("Escolha uma letra de A a H para ser o Estado 2. \n");
printf("Estado: ");
scanf(" %c", &estado2);

printf("Coloque a letra do estado seguido de 1 número de 01 a 04 para ser o código da carta. \n");
printf("Código: ");
scanf(" %2s", codigo2);

printf("Insira a quantidade de habitantes da cidade\n");
printf("População: ");
scanf(" %d", &populacao2);

printf("Escreva o nome da cidade. \n");
getchar();
printf("Nome da cidade: ");
fgets(nomedacidade2, sizeof(nomedacidade2), stdin);

printf("Insira a área territorial da cidade. \n");
printf("Área em km²: ");
scanf(" %f", &area2);

printf("Insira o PIB da cidade \n");
printf("PIB: ");
scanf("%f", &pib2);

printf("Insira a quantidade de pontos turísticos da cidade. \n"); 
printf("Pontos turísticos: ");
scanf(" %d", &pontosturisticos2);

//mostrando dados da carta 

printf("\n═════════════════════════════════════════\n");
printf("             CARTA 1                      \n");
printf("═════════════════════════════════════════\n");

printf("Estado: '%c' \n", estado1);
printf("Código: %c%2s\n", estado1, codigo1);
printf("Nome da cidade: %s \n", nomedacidade1);
printf("População: %d \n", populacao1);
printf("Área: %2.f km² \n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Ptontos turísticos: %d\n", pontosturisticos1);

printf("\n═════════════════════════════════════════\n");
printf("             CARTA 2                      \n");
printf("═════════════════════════════════════════\n");

printf("Estado: '%c' \n", estado2);
printf("Código: %c%2s\n", estado2, codigo2);
printf("Nome da cidade: %s \n", nomedacidade2);
printf("População: %d \n", populacao2);
printf("Área: %2.f km² \n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Ptontos turísticos: %d\n", pontosturisticos2);

return 0;

}



