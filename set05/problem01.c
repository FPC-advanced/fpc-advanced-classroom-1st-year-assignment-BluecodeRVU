#include <stdio.h>
#include <math.h>
struct point{
  float x;
  float y;
};

typedef struct point pt;

pt input(){
    pt a;
    printf("pls enter a num: ");
    scanf("%f %f",&a.x,&a.y);
    return a;
}
void dist(pt a, pt b, float *res){
    *res=sqrt(((a.x-b.x)*(a.x-b.x))+((a.y-b.y)*(a.y-b.y)));
}

void output(float res){
    printf("%f",res);
}

int main(){
    pt a,b;
    a=input();
    b=input();
    float result;
    dist(a,b,&result);
    output(result);
}