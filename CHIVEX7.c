#include <stdio.h>
int main(void) {
int x,v,d,s,u;
printf("Entrez un montant en dollars :");
scanf("%d",&x);
v=x/20;
d=x%20/10;
s=x%10/5;
u=x%5;
printf("Billets de 20$ : %d\n",v);
printf("Billets de 10$ : %d\n",d);
printf("Billets de 5$ : %d\n",s);
printf("Billets de 1$ : %d",u);
return 0;
}
