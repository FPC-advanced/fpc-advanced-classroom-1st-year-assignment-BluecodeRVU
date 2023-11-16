#include <stdio.h>
int input()
{   int x;
    printf("pls enter a num:");
    scanf("%i",&x);
    return x;}

int add(int a, int b)
{   
    int sum;
    sum=a+b;
    return sum;
}

void output(int a, int b, int sum)
{ 
    printf("\nsum of %i and %i is :%i\n",a,b,sum );
}

int main()
{   
    int a,b;
    int sum=0;
    a=input();
    b=input();
    sum=add(a,b);
    output (a,b,sum);
}
