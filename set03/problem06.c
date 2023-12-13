#include <stdio.h>
void input_string(char* a, char* b){
  printf("pls enter a str: ");
  scanf("%s",a);
  printf("pls enter a str: ");
  scanf("%s",b);
}

int sub_str_index(char* s1, char* s2){
  int match,i,j;
  for(i=0;s1[i]!='\0';i++){
    if(s1[i]==s2[0]){
      match=1;
      for(j=1;s2[j]!='\0';j++){
        if(s1[i+j]==s2[j]){
          match=1;
          continue;
        }
        else{
          match=0;
          continue;
        }
        
      }
      if(match==1){
        return i;
      }
    }
  }
    return -1;
}

void output(int index){
  if(index>=0){
    printf("%d",index);
  }
  else{
    printf("substr not found in str");
  }
}

int main(){
  char a[100];
  char b[100];
  input_string(a,b);
  int index=sub_str_index(a,b);
  output(index);
}