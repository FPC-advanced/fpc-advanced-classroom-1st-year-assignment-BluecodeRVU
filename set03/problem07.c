#include <stdio.h>
#include <math.h>

struct point {
    float x, y;
};
typedef struct point pt;

struct line {
    pt p1, p2;
    float distance;
};
typedef struct line ln;

pt input_point(){
  pt a;
  printf("pls enter a point: ");
  scanf("%f %f", &a.x, &a.y);
  return a;
}

ln input_line(){
  ln l;
  l.p1 = input_point();
  l.p2=input_point();
  return l;
}
void find_length(ln *l){
  l->distance=sqrt(((l->p1.x-l->p2.x)*(l->p1.x-l->p2.x))+((l->p1.y-l->p2.y)*(l->p1.y-l->p2.y)));
}
void output(ln l){
  printf("%f",l.distance);
}
int main(){
  ln l;
  l=input_line();
  find_length(&l);
  output(l);
  return 0;
}