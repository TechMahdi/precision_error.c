#include<stdio.h>
int main ()
{
    double r,pi=3.1415926535897932384626433832795,area,cum;
    scanf("%lf",&r);
    cum = 2*pi*r;
    area = pi*r*r;
    printf("%0.12lf\n",area);
    printf("%0.12lf\n",cum);
    return 0;
}
