#include <stdio.h>
struct triangle {
  float base, altitude, area;
};
typedef struct triangle tri;

int input_n()
{int n;
printf("pls enter num of triangles: ");
scanf(" %d",&n);
return n;}

tri input_triangle(){
  tri t;
  printf("enter base of triangle: ");
  scanf("%f",&t.base);
  printf("enter height of triangle: ");
  scanf("%f",&t.altitude);
  return t;
}

void input_n_triangles(int n, tri t[n])
{int i;
 for(i=0;i<n;i++)
   {
     t[i]=input_triangle();
   }
}

void find_area(tri *t){
  t->area=0.5*(t->base)*(t->altitude);
}
void find_n_areas(int n, tri t[n]){
  int i;
  for(i=0;i<n;i++){
    find_area(&t[i]); 
  }
}

tri find_smallest_triangle(int n, tri t[n])
{
  int i;
  tri smallest=t[0];
  for(i=1;i<n;i++ ){
    if(t[i].area<smallest.area){
      smallest=t[i];
      continue;
    }
  }
  return smallest;
}
void output(tri smallest){
  printf("smallest triangle has area %f",smallest.area);
}

int main(){
int n;
  tri t[n],smallest;
  n=input_n();
  input_n_triangles(n,t);
  find_n_areas(n,t);
  smallest=find_smallest_triangle(n,t);
  output(smallest);
  
}