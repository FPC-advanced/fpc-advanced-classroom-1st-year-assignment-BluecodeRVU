#include <stdio.h>
#include <math.h>
struct camel {
	float radius, height, length,weight;
};

typedef struct camel cm;

cm input(){
    cm a;
    printf("pls enter radius: ");
    scanf("%f",&a.radius);
    printf("pls enter value: ");
    scanf("%f",&a.height);
    printf("pls enter value: ");
    scanf("%f",&a.length);
    return a;
}
void weight(cm *c){
    float pi=22.0/7.0;
    c->weight = pi * (c->radius*c->radius*c->radius) * sqrt(c->height * c->length);
}
void output(cm c){
    printf("The weight of the camel is %f\n",c.weight);
}

int main(){
    cm c=input();
    weight(&c);
    output(c);
    
}