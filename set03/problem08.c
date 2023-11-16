#include <stdio.h>
#include <math.h>
typedef struct point {
    float x,y;
} pt;


typedef struct polygon {
    int sides;
    pt p[100];
    float perimeter;
} pl;

int input_n(){
  printf("pls enter num of sides: ");
  int n;
  scanf("%d",&n);
  return n;
}
pt input_point(char *promt_msg){
  pt a;
  printf("%s",promt_msg);
  printf("x: ");
  scanf("%f",&a.x);
  printf("y: ");
  scanf("%f",&a.y);
  return a;
}

void input_polygon(pl *p){
  p->sides=input_n();
  for(int i=0;i<p->sides;i++){
    p->p[i]=input_point("pls enter a value for ");
  }
}

float find_distance(pt a, pt b){
  float dist;
  dist=sqrt(pow(b.y-a.y,2)+pow(b.x-a.x,2));
  return dist;
}
void find_perimeter(pl* p){
  p->perimeter=0;
  for(int i=0;i<p->sides-1;i++){
    p->perimeter+=find_distance(p->p[i],p->p[i+1]);
  }
  p->perimeter+=find_distance(p->p[p->sides-1],p->p[0]);
}
void output(pl p){
  printf("%f",p.perimeter);
}

int main(){
  pl p;
  input_polygon(&p);
  find_perimeter(&p);
  output(p);
}
