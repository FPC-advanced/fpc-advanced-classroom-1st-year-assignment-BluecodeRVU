#include <stdio.h>
#include <math.h>
typedef struct camel {
    float radius, height, length, weight;
} cm;

void input(int *n, cm c[*n], float *truck_weight){
    printf("pls enter n:");
    scanf("%i",n);
    for (int i = 0; i<*n; i++){
        printf("enter camel data: ");
        scanf("%f",&c[i].radius);
        scanf("%f",&c[i].height);
        scanf("%f",&c[i].length);
        
}
printf("pls enter truck weight: ");
        scanf("%f",truck_weight);
}
void find_camel_weight(int n, cm c[n]){
    int i;
    for(i=0;i<n;i++){
        c[i].weight = (22.0/7.0)*(c[i].radius*c[i].radius*c[i].radius)*sqrt(c[i].height*c[i].length);
}
}

float compute_total_weight(int n, cm c[n], float truck_weight){
    int i;
    float total=0.0;
    for(i=0;i<n;i++){
        total+=c[i].weight;
    }
    total+=truck_weight;
    return total;
}

void output(float total_weight){
    printf("%f", total_weight);
}

int main(){
    int n;
    cm c[100];
    float truck_weight;
    input(&n,c,&truck_weight);
    find_camel_weight(n,c);
    float total = compute_total_weight(n,c,truck_weight);
    output(total);

}