#include <stdio.h>
#include <math.h>
void input_camel_details(float *radius, float *height, float *length){
    printf("Enter the radius: ");
    scanf("%f", &radius);
    printf("enter height: ");
    scanf("%f",&height);
    printf("enter length:");
    scanf("%f",&length);
}
float find_weight(float radius, float height, float length){
    float pi=22.0/7.0;
    float weight = pi * (radius*radius*radius) * sqrt(height * length);
    return weight;
}
void output(float weight){
    printf("%f",weight);
}
int main(){
    float radius,height,length;
    input_camel_details(&radius,&height,&length);
    float weight=find_weight(radius,height,length);
    output(weight);
}