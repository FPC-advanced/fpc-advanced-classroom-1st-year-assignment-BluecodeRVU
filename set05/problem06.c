#include <stdio.h>
int input_n(){
  printf("enter the num of elements; ");
  int n;
  scanf("%d",&n);
  return n;
}
void input(int n, int a[n]){
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
}

float odd_average(int n, int a[n]){
  float sum=0;
  float ele=0;
  for(int i=0;i<n;i++){
    (a[i]%2!=0)?(sum+=a[i]),ele++:0; 
  }
  return sum/ele;
}
void output(float avg){
  printf("%f",avg);
}
int main(){
  int n=input_n();
  int a[n];
  input(n,a);
  float avg=odd_average(n, a);
  output(avg);
  
}