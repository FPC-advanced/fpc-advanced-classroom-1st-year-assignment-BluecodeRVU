#include <stdio.h>

struct complex {
  float real,img;
};
typedef struct complex Com;

int get_n(){
  int n;
  printf("pls enter a num: ");
  scanf( "%d", &n);
          return n;
}
Com input_complex(){
  Com c;
  printf("pls enter a real number: ");
  scanf("%f",&c.real);
  printf("pls enter a img number: ");
  scanf("%f",&c.img);
  return c;
}

void input_n_complex(int n, Com c[n]){
  int i;
  for(i=0;i<n;i++){
    c[i]=input_complex();//taking input till the condition of n is met(ie n num of complex nums)
  }
  
}
Com add(Com sum, Com b){
  sum.real+=b.real;
  sum.img+=b.img;
  return sum;//adding up the inputs(saved as b into sum)
}

Com add_n_complex(int n, Com c[n]){
  Com sum;
  int i;
  for(i=0;i<n;i++){
    sum=add(sum,c[i]);//the function add adds the elements in the array c
  }
  return sum;
}

void output(Com result){
  printf("%f+%fi",result.real,result.img);
}
int main(){
  int n=get_n();
  Com c[n];
  input_n_complex(n,c);
  Com sum=add_n_complex(n,c);
  output(sum);
  return 0;
  
}
