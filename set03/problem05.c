#include <stdio.h>
#include <math.h>
int input(){
  printf("pls enter a number: ");
  int x;
  scanf("%d",&x);
  return x;
}
void init_array(int n, int a[]){
  a[0]=2;
  for(int i=1,j=3;j<=n;i++,j+=2){
    a[i]=j;
  }
}

void erotosthenes_sieve(int n, int a[n]){
  for(int i=0;a[i]<n;i++){
    for(int j=3;j<sqrt(a[i])+1;j+=2){
      if(a[i]%j==0 && a[i]!=j){
        a[i]=0;
      }
    }
  }
}
void output(int n, int a[]){
  for(int i=0;a[i]<n;i++){
    if(a[i]!=0){
      printf("%d\t",a[i]);
    }
    
  }
}
int main(){
  int n=input();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  output(n,a);
}