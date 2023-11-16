#include <stdio.h>
void input(float *base, float *height){
scanf("%f,%f",base,height);
}

void find_area(float base , float height, float *area){
*area = 0.5 * base * height;
}

void output(float area){
printf("the area of the tri= %f",area);
}

int main(){
float base,height,area;
input(&base,&height);
find_area(base,height,&area);
output(area);
}