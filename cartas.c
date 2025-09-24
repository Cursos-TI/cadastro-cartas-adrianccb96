#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
char nome[30];
printf("carta:1\n");
scanf("%s", nome);

char nome2[30];
printf("Estado:A\n");
scanf("%s", nome2);

char nome3[30];
printf("Código:A01\n");
scanf("%s", nome3);

char nome4[30];
printf("nome da cidade:São paulo\n");
scanf("%s", nome4);
int população;
printf("população:45,97 milhões\n");
scanf("%d", &população);

float area;
printf("área: 1.521.11 km²\n");
scanf("%f",&area);

float pib;
printf("pib: 3,5 trilhões\n");
scanf("%f", &pib);

int ponto_turístico;
printf("ponto turístico: 250\n");
scanf("%d", &ponto_turístico);

  
// os dados acimas são da cidade de São paulo, agora os de baixo são de santa catarina
   
char nome5[30];
printf("carta:1\n");
scanf("%s", nome5);

char nome6[30];
printf("Estado:B\n");
scanf("%s", nome6);

char nome7[30];
printf("Código:A02\n");
scanf("%s", nome7);

char nome8[30];
printf("nome da cidade:santa catarina\n");
scanf("%s", nome8);
int habitantes;
printf("população:8.187.029\n");
scanf("%d", &habitantes);

float area2;
printf("área:95.730.690 km²\n");
scanf("%f",&area2);

float pib2;
printf("pib:466.3\n");
scanf("%f", &pib2);

int ponto_turístico2;
printf("ponto turístico: 150\n");
scanf("%d", &ponto_turístico2);

return 0;







}