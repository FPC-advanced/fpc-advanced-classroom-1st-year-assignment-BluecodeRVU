#include <stdio.h>
int input_size(){
  printf("pls enter array size: ");
  int x;
  scanf("%d",&x);
  return x;
}
void input_array(int n, int a[n]){
  for(int i=0;i<n;i++){
    printf("pls enter array element:\n");
    scanf("%d",&a[i]);
  }
}
  
int find_largest_index(int n, int a[n]) {
  int largest = a[0], index = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] > largest) {
      largest = a[i];
      index = i;
    }
  }
  return index;
}

void output(int index){
  printf("%d has the largest element",index);
}

  int main() {
      int x;
      x = input_size();
      int a[x];
      input_array(x, a);
      int index = find_largest_index(x, a);
      output(index);
      return 0;
  }

