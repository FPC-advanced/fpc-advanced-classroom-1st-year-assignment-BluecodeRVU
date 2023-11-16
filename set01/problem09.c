#include <stdio.h>

float input()
{   float x;
    printf("pls enter a num:");
    scanf("%f",&x);
    return x;}

float square_root(float n){
    
    float x=input();
    while (x*x-n>0.01) {
        x=0.5*(x + (n / x));
    }
return x;
}

void output(float sqrroot)
{   printf("%f",sqrroot);}

int main()
{   float n,sqrroot;
    sqrroot=square_root(n);
    output(sqrroot);}