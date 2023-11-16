#include <stdio.h>
void input(int *a, int *b)
{
    printf("pls enter a num:");
    scanf("%i",a);
    printf("pls enter a num:");
    scanf("%i",b);
}

void add(int a, int b, int *sum){
   *sum=a+b;
}

void output(int a, int b, int sum)
{   printf("\nsum of %i and %i is :%i\n",a ,b ,sum );}

int main()
{   int a,b;
    int sum=0;
    input(&a,&b);
    add(a,b,&sum);
    output (a,b,sum);
}