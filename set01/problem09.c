#include <stdio.h>
#include <math.h>
float input()
{   float n;
    printf("pls enter a num:");
    scanf("%f",&n);
    return n;}

float square_root(float n){
    float x = 10;
    while (fabs(x*x-n)>0.01) {
        x=0.5*(x + (n / x));
    }
return x;}

void output(float sqrroot)
{   printf("%f",sqrroot);}

int main()
{ float n,sqrroot;
n=input();
sqrroot=square_root(n);
output(sqrroot);
}