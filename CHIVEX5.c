#include <stdio.h>
int main(void) {
int x,p;
printf("Entrez une valeur pour x:");
scanf("%d",&x);
p=3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x +7*x - 6;
printf("P = %d",p);
return 0;
}
