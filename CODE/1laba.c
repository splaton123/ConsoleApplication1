#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1(void)
{
    int V, T; 
    float v1, v2;
    printf("Vvedite ob`em basseina :");
    scanf("%d", &V);
    printf("Vvedite skorost` vitekania vodi:");
    scanf("%f", &v1);
    printf("Vvedite vremya polnogo opustoshenia basseina:");
    scanf("%d", &T);

    v2 = v1 - V/T;

    printf("Skorost` postuplenia vodi : %f\n", v2);
    return 0;
  
}