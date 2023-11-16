#include <stdio.h>
int input(){
  int x;
  printf("pls enter a num;");
  scanf("%i",&x);
  return x;
  
}
int find_fibo(int n)
{ int a = 0, b = 1, fibo;

 for (int i = 3; i <= n; i++) {
     fibo = a + b; 
     a = b;
     b = fibo;
 }

 return fibo;
}

void output(int fibo){
  printf("%i",fibo);
}
int main(){
  int x,fibo;
  x=input();
  fibo=find_fibo(x);
  output(fibo);
  return 0;

}