#include <stdio.h>
struct frac{
    int num, den,tot,lcm;
} ;
typedef struct frac fr;
fr input(){
  fr f;
  printf("pls enter num and denom:");
  scanf("%d %d",&f.num,&f.den);
  return f;
}

fr calc(){
  fr f1,f2,f3,ft;
  f1=input();
  f2=input();
  f3=input();
  ft.lcm=f1.den*f2.den*f3.den;
  f1.tot=f1.num*f2.den*f3.den;
  f2.tot=f2.num*f1.den*f3.den;
  f3.tot=f3.num*f2.den*f1.den;
  if(f1.tot<f2.tot && f1.tot<f3.tot){
    return f1;
  }
  else if(f2.tot<f1.tot && f2.tot<f3.tot){
    return f2;
  }
  else{
  return f3;
}}
void output(fr ft){
 printf("%d/%d",ft.num,ft.den);
}
int main(){
fr ft;
  ft=calc();
  output(ft);
  return 0;
  
}