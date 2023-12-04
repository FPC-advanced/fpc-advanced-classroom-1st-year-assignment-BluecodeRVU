#include <stdio.h>
#include <math.h>

int input_number(){
  printf("pls enter a num: ");
  int n;
  scanf("%d", &n);
  return n;
}

void input_array(int n, int a[n]){
  for(int i=0; i<n; i++){
    scanf("%d",&a[i]);
  }
}

int is_composite(int n){
  if(n!=0 && n!=1 && n!=2){
    for(int i=2; i<=sqrt(n)+1; i++){
        if(n%i==0){
          return n;        
        }
      return 0;
    }
  }
  return 0;
}

int sum_composite_numbers(int n, int a[n]){
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=is_composite(a[i]);
  }
  return sum;
}



void output(int result){
  printf("%d",result);
}


  int main() {
    int n;
    n=input_number();
    int a[n];
    input_array(n,a);
    int sum;
    sum=sum_composite_numbers(n,a);
    output(sum);
  }

