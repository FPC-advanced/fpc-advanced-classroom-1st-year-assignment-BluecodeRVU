#include <stdio.h>
#include <math.h>

int input_array_size(){
  printf("max num: ");
  int n;
  scanf("%d",&n);
  return n;
}

void init_array(int n, int a[n]){
  for(int i=0,j=2;j<=n;i++,j++){
    a[i]=j;
  }
}

void erotosthenes_sieve(int n, int a[n]){
  for(int i=2;i<n;i++){
    for(int j=2;j<=sqrt(a[i])+1;j++){
      if(a[i]%j==0){//a[j](j=0), a[i]%j
        a[i]=0;
      }
    }
  }
}


void output(int n, int a[n]){
  for(int i=0;i<n;i++){
    if(a[i]!=0){
    printf("%i\n",a[i]);
    }
  }
}

int main(){
  int n=input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  output(n,a);
}