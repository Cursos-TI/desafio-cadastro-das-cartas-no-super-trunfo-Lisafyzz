#include <stdio.h>
int main (){
//dados das cartas 1 e 2
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
float densidade1;
float densidade2;
float pibpercapita1;
float pibpercapita2;
float superpoder1;
float superpoder2;

//entrada de dados da primeira carta

printf("Escolha uma letra de A a H para ser o Estado. \n");
printf("Estado: ");
scanf(" %c", &estado1);

printf("Escolha 1 número de 01 a 04 para ser o código da carta. \n");
printf("Código: ");
scanf(" %2s", codigo1);

printf("Insira a quantidade de habitantes da cidade\n");
printf("População: ");
scanf(" %d", &populacao1); // %2s para ler uma string de 2 caracteres. Não tem & pois o vetor '[]' já é um ponteiro.


printf("Escreva o nome da cidade. \n");
getchar(); // Limpa o buffer do teclado
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

printf("Escolha 1 número de 01 a 04 para ser o código da carta. \n");
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

//Calculos de médias

densidade1 = populacao1 / area1;
densidade2 = populacao2 / area2;
pibpercapita1 = (pib1 * 1000000000) / populacao1;
pibpercapita2 = (pib2 * 1000000000) / populacao2;

// calculo do super poder

superpoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + pontosturisticos1 + pibpercapita1 + (1.0 / densidade1);
superpoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + pontosturisticos2 + pibpercapita2 + (1.0 / densidade2); 

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
printf("Pontos turísticos: %d\n", pontosturisticos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf(" PIB per capita: %2.f reais\n" , pibpercapita1);


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
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf(" PIB per capita: %2.f reais\n" , pibpercapita2);

// Comparações

printf("\n═════════════════════════════════════════\n");
printf("         COMPARAÇÃO DAS CARTAS\n");
printf("═════════════════════════════════════════\n");

printf("População: %s venceu (%d)\n", (populacao1 > populacao2 ? "Carta 1" : "Carta 2"), populacao1 > populacao2);
printf("Área: %s venceu (%d)\n", (area1 > area2 ? "Carta 1" : "Carta 2"), area1 > area2);
printf("PIB: %s venceu (%d)\n", (pib1 > pib2 ? "Carta 1" : "Carta 2"), pib1 > pib2);
printf("Pontos Turísticos: %s venceu (%d)\n", (pontosturisticos1 > pontosturisticos2 ? "Carta 1" : "Carta 2"), pontosturisticos1 > pontosturisticos2);
printf("Densidade Populacional: %s venceu (%d)\n", (densidade1 < densidade2 ? "Carta 1" : "Carta 2"), densidade1 < densidade2); // menor vence
printf("PIB per Capita: %s venceu (%d)\n", (pibpercapita1 > pibpercapita2 ? "Carta 1" : "Carta 2"), pibpercapita1 > pibpercapita2);
printf("Super Poder: %s venceu (%d)\n", (superpoder1 > superpoder2 ? "Carta 1" : "Carta 2"), superpoder1 > superpoder2);


return 0;

}



