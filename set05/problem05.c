#include <stdio.h>
#include <math.h>
//The formula for finding borga(x) is `1 + (x^1)/3! + (x^2)/5! + (x^3)/7! + ...`. Stop when the next term is less 0.000001 using four functions.

int input(){
  printf("pls input a num: ");
  int x;
  scanf("%d",&x);
  return x;
}

int fact(int x){
  int fac=1;
  for(int i=x;i>1;i--){
    fac=fac*i;
  }
  x=fac;
  return x;
}
int powr(int j,int e){
  for(int i=1;i<e;i++){
    j=j*j;
  }
  return j;
}

float borga_X(int x){
  int i,j;
  float term=1;
  float rs=1;
  for(i=1,j=3;term>0.000001;i++,j+=2){
    term=(pow(x,i)/fact(j));
    rs+=term;
  }
  return rs;
}


void output(float result){
  printf("%f",result);
}

int main(){
  int x=input();
  float rs=borga_X(x);
  output(rs);
}