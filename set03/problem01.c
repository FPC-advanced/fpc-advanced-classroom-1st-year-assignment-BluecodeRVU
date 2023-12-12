#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{printf("enter values:\n");
scanf("%f %f",x1,y1);
 printf("enter values:\n");
scanf("%f %f",x2,y2);}

float find_distance(float x1, float y1, float x2, float y2)
{float dist= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
return dist;}

void output(float distance)
{
  printf("%f\n",distance);
}

int main()
{
  float x1,x2,y1,y2,distance;
  input(&x1,&y1,&x2,&y2);
  distance=find_distance(x1,y1,x2,y2);
  output(distance);
}