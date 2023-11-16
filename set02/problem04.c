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

int sum_composite_numbers(int n, int a[n]){
  int sum=0;
  
  for(int i=0; i<n; i++){
    for(int j=2;j<sqrt(a[i])+1;j++){
      if(a[i]%j==0 && a[i]!=2 && a[i]!=1){
        sum+=a[i];
        break;
      }
    }
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
  
