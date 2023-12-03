#include <stdio.h>
int inp(){
  printf("pls enter n: ");
  int n;
  scanf("%d",&n);
  return n;
}
void ainp(int n){
  float a[100];
  for(int i=0;i<n;i++){
    printf("pls enter elements: ");
    scanf("%f",&a[i]);
  }
}

float med(int n,float a[100]){
    if(n%2==0)
    { float x1=a[n/2];
    float x2=a[(n/2)+1];
      float x=((x1+x2)/2.0);
      return x;
    }
    else{
      float x=(a[(n+1)/2]);
      return x;
    }
}

int main(){
  int n=inp();
  float a[100];
  ainp(n);
  float m=med(n,a);
  printf("%f",m);
}