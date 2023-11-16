#include <math.h>
#include <stdio.h>
struct fraction {
    int num, den;
};
typedef struct fraction fr;

fr input_fraction(){
  fr f;
  printf("pls enter num: ");
  scanf("%d",&f.num);
  printf("pls enter denom: ");
  scanf(" %d",&f.den);
  return f;
}
int find_gcd(int a, int b){
  int r;
  while(b!=0){
    r=a%b;
    a=b;
    b=r;
    }
  return a;
  
}
fr add_fractions(fr f1,fr f2){
  fr a,sum;
  a.num = (f1.num * f2.den) + (f2.num * f1.den);
  a.den = f1.den * f2.den;
   int gcd= find_gcd(a.num,a.den);
   sum.num = a.num/gcd ;
   sum.den = a.den/gcd ;
  return sum;
}
void output(fr sum){
  printf("%i/%i",sum.num,sum.den);
}

int main(){
  fr f1,f2,sum;
  f1=input_fraction();
  f2=input_fraction();
  sum=add_fractions(f1,f2);
  output(sum);
}