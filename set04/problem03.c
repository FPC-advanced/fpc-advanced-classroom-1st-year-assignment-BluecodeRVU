#include <stdio.h>
void input_n_and_r(int *n, int *r){
  printf("enter n and r: ");
  scanf("%d %d",n,r);
}

int fac(int n){
  int fact=1;
  for(int i=n;i>1;i--){
    fact*=i;
  }
  return fact;
}
int nCr(int n, int r){
  int f=fac(n)/(fac(r)*fac(n-r));
  return f;
}
void output(int result){
  printf("%d",result);
}

int main(){
int n,r;
  input_n_and_r(&n,&r);
  int f=nCr(n,r);
  output(f);
}