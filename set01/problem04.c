#include <stdio.h>

int input(){
  printf("pls enter size of the array: ");
  int n;
  scanf("%d",&n);
  return n;
}
void arrinp(int n,int a[n]){
  for(int i=0;i<n;i++){
    printf("pls enter num:");
    scanf("%d",&a[i]);
  }
}
void dupli(int n,int a[n]){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      int x=a[i];
      if(x==a[j]){
        a[j]=0;
        
        }
    }  
  }     
}

void out(int n,int a[n]){
  for(int i=0;i<n;i++){
    if(a[i]!=0){
      printf("%d\t",a[i]);
    }
  }
}

int main(void) {
  int n=input();
  int a[n];
  arrinp(n,a);
  dupli(n,a);
  out(n,a);
}