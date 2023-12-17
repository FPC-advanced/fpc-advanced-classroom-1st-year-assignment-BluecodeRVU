#include <stdio.h>

void input(int *a,int *b,int *c) {
  printf("Please enter a value: ");
  scanf("%d",a);
  printf("Please enter a value: ");
  scanf("%d",b);
  printf("Please enter a value: ");
  scanf("%d",c);
}

void compare(int a, int b, int c, int *largest) {
  *largest=a;
  if(b>*largest){
    *largest=b;
  }
  if(c>*largest){
    *largest=c;
  }
}

void output(int largest) {
  printf("%d is the largest.\n",largest);

}

int main() {
  int a,b,c;
    input(&a,&b,&c);
    int largest;
    compare(a, b, c, &largest);
    output(largest);
    return 0;
}
/*void input(int *a,int *b,int *c) {
  printf("Please enter a value: ");
  scanf("%d",a);
  printf("Please enter a value: ");
  scanf("%d",b);
  printf("Please enter a value: ");
  scanf("%d",c);
}

void compare(int a, int b, int c, int *smallest) {
  *smallest=(a<b)?((a<c)?a:c):((b<c)?b:c);//if all are equal c will be exe
}

void output(int largest) {
  printf("%d is the smallest.\n",largest);

}

int main() {
  int a,b,c;
    input(&a,&b,&c);
    int largest;
    compare(a, b, c, &largest);
    output(largest);
    return 0;
}*/