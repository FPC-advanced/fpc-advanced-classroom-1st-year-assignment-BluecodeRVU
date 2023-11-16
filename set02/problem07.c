#include <stdio.h>

struct triangle {
  float base, altitude, area;
};
typedef struct triangle tri;

tri input_triangle(){
tri t;
 printf("pls enter a value: ");
scanf("%f",&t.base);
scanf("%f",&t.altitude);
return t;
}

void find_area(tri *t)
{
t->area=0.5*t->altitude*t->base;
}

void output(tri t)
{
  printf("area=%f",t.area);
}

int main(){
  tri t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}