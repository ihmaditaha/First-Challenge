#include <stdio.h>
int main(void) {
float m, mt;
printf("Entrez un montant :");
scanf("%f",&m);
mt=m*1.05;
printf("Avec taxe ajoute : $%.2f",mt);
return 0;
}
