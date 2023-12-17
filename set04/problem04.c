#include <stdio.h>
int input_degree(){
  printf("enter degree of poly: ");
  int x;
  scanf("%d",&x);
  return x;
}
void input_coefficients(int n, float a[n]){
  for(int i=0;i<=n;i++){
    printf("enter values for coeff: ");
    scanf("%f",&a[i]);
  }
}
float input_x(){
  printf("enter x: ");
  int x;
  scanf("%d",&x);
  return x;
}

float evaluate_polynomial(int n, float a[n], float x){
  
}
void output(int n, float a[n], float x, float result);
int main(){
  
  output(x);
}