#include <stdio.h>

void input_string(char* a, char* b){
  printf("Please enter a string: ");
  scanf("%s", a);
  printf("Please enter another string: ");
  scanf("%s", b);
}

int sub_str_index(char* string, char* substring){
  int ans;
  for(int i=0;string[i]!='\0';i++){
    if(string[i]==substring[0])
    {
      ans=1;
      for(int j=1;substring[j]!='\0';j++)
      {
        if(string[i+j]!=substring[j]){
          ans=0;
          break;
        }
        }
      if(ans=1)
      {
        return i;
      }
      }
    }
  return -1;
  }

void output(int index){
  if(index >= 0){
    printf("%d", index);
  }
  else{
    printf("Substring isnt found");
  }
}

int main()
{
  char a[100], b[100];
  input_string(a, b);
  int index=sub_str_index(a,b);
  output(index);
  return 0;
}
