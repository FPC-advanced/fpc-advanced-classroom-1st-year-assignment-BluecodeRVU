#include <stdio.h>
#include <math.h>

int input_number(){
  printf("pls enter a num: ");
  int n;
  scanf("%d", &n);
  return n;
}
int sqrrt(int s){
  int x;
  while(x*x - s>0.0000001){
    x= 0.5*(x+(s/x));
  }
  return x;
}

int is_composite(int n){
  if(n!=0 && n!=1){
    for(int i=2; i<=sqrt(n)+1; i++){
      if(n%i==0){
        return 1;        
      }
    }
    return 0;
  }
  return 0;
}

  
void output(int result){
  if(result==1){
    printf("Num is composite: ");
  }
  else{
    printf("num is prime: ");
  }
}


  int main() {
      int n = input_number();
      int x=sqrrt(n);
      int result=is_composite(x);
    output(result);
  }
  
