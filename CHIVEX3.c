#include <stdio.h>
int main(void) {
float v,pi=3.14;
int r;
printf("donner le rayon de sphere:");
scanf("%d",&r);
v=4.0f/3.0f*pi*r*r*r;
printf("Le volume d'une sphere de rayon r=%dm est : %0.3fm^3",r,v);
return 0;
}
