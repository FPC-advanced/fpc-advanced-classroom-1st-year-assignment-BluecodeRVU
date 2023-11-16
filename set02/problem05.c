#include <stdio.h>
#include <math.h>

int input(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  return n;
}
int find_gcd(int a, int b){
  int r,gcd;
  if(a>b){
    while(b!=0){
      r=a%b;
      a=b;
      b=r;
    }
    gcd=a;
    }
  else{
    while(a!=0){
      r=b%a;
      b=a;
      a=r;
    }
    gcd=b;
  }
  return gcd;
}

void output(int gcd) {
  printf("%d",gcd);
}

  


  int main() {
    int a,b,gcd;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(gcd);
    return 0;
  }
  
