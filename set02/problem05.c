#include <stdio.h>

int input(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  return n;
}
int find_gcd(int a, int b){
  int r,gcd;
    while(b!=0){
      r=a%b;
      a=b;
      b=r;
      gcd=a;
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
  
