#include <stdio.h>
#include <math.h>

int input(){
  printf("pls enter a value: ");
  int x;
  scanf("%d",&x);
  return x;
}

int powr(int x,int p){
  int res=1;
  for(int i=0;i<p;i++){
    res*=x;
  }
  return res;
}

int fact(int x){
  for(int i=x-1;i>1;i--){
    x*=i;
  }
  return x;
}

float borga_X(int x){
  float res=1.0;
  float term=1;
  for(int i=1,j=3;term>0.000001;i++,j+=2){
    float p=powr(x,i);
    term=(p/fact(j));
    res+=term;
  }
  return res;
}

int main(){
  int x=input();
  float res=borga_X(x);
  printf("%f",res);
}