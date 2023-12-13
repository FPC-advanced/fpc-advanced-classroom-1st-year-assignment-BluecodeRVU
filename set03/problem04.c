#include <stdio.h>
int input(){
  printf("pls enter a number: ");
  int x;
  scanf("%d",&x);
  return x;
}
void find_fibo(int n,int fibo[n]){
  fibo[0]=0;
  fibo[1]=1;
  for(int i=2;i!=n;i++){
    fibo[i]=fibo[i-1]+fibo[i-2];
  }
}
void output(int n, int fibo[n]){
  for(int i=0;i<n;i++){
    printf("%d\t",fibo[i]);
  }
}
int main(){
  int n=input();
  int fibo[n];
  find_fibo(n, fibo);
  output(n,fibo);
}