#include <stdio.h>
#include <math.h>

int input_number(){
  printf("pls enter a num: ");
  int n;
  scanf("%d", &n);
  return n;
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
      int result=is_composite(n);
    output(result);
  }
  
