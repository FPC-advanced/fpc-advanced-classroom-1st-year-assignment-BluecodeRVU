#include <stdio.h>
int input_degree(){
    printf("pls enter the degree of the poly: ");
    int d;
    scanf("%d",&d);
    return d;
}

void input_coefficients(int n, float a[n]){
    for(int i=0;i<=n;i++){
        printf("enter a polynomial: ");
        scanf("%f",&a[i]);
    }

}
float input_x(){
    printf("pls enter the value of x: ");
    float x;
    scanf("%f",&x);
    return x;
}

float evaluate_polynomial(int n, float a[n], float x){
    float result=a[0];
  int i;
    for(i=1;i<=n;i++){
      result=(result*x)+a[i];
    }
    return result;
}
void output(float sum){
    printf("%f",sum);
}
int main(){
    int d;
    d=input_degree();
    float a[d];
    input_coefficients(d,a);
    float x=input_x();
    float sum=evaluate_polynomial(d,a,x);
    output(sum);

}