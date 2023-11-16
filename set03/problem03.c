#include <stdio.h>
int input_number(){
  int n;
  printf("pls enter a num:");
  scanf("%i",&n);
  return n;
  
}

int is_prime(int n){
  int i;
  for(i=2;i<n;i++){
    if(n%i==0){
      return 0;
      
    }
    return 1;
  }
}
void output(int result){
  if(result==0){
    printf("the number is not prime");}
  else{printf("the num is prime");}
}

int main(){
  int n;
  n=input_number();
  int result;
  result=is_prime(n);
  output(result);
  return 0;
}