#include <stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)

{printf("pls enter values for triangle: ");
 scanf("%f %f",x1,y1);
 printf("pls enter values for triangle: ");
  scanf("%f %f",x2,y2);
 printf("pls enter values for triangle: ");
  scanf("%f %f",x3,y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
  float sum = 0.5*(x1 * (y2 - y3)+ x2 * (y3 - y1)
  + x3 * (y1 - y2));
  if(sum != 0)
  {return 0;}
  else
  {return 1;}

}
void output(int result){
  if(result==0){
    printf("the points lie on a tri");}
  else{printf("the points do not lie on a tri");}
}

int main(){
  float x1,y1,x2,y2,x3,y3,result;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  result=is_triangle(x1,y1,x2,y2,x3,y3);
  output(result);
  
}