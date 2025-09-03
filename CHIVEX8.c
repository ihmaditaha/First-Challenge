#include <stdio.h>
int main(void) {
float p,i,pm,im,s1,s2,s3;
printf("Entrez le montant du prêt :");
scanf("%f",&p);
printf("Entrez le taux d'intérêt :");
scanf("%f",&i);
printf("Entrez le paiement mensuel :");
scanf("%f",&pm);
im=i/100/12;
s1=p-pm+p*im;
s2=s1-pm+s1*im;
s3=s2-pm+s2*im;
printf("Solde restant après le premier paiement :$%.2f\n",s1);
printf("Solde restant après le deuxieme paiement :$%.2f\n",s2);
printf("Solde restant après le troisieme paiement :$%.2f\n",s3);
return 0;
}
