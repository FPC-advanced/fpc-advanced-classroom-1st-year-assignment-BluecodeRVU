#include <stdio.h>

void input_two_strings(char *string1, char *string2){
    printf("ennter the first str: ");
    scanf("%s",string1);
    printf("enter the second str: ");
    scanf("%s",string2);
}
int stcmp(char *s1, char *s2){
  int i;
  for(i=0;s1[i]==s2[i] && s2[i]!='\0';i++){

  }
  return s1[i]-s2[i];
}

void output(int result){
    if(result<0){
        printf("str 2 is larger ");
    }
    else if(result>0){
        printf("str1 is larger ");
    }
    else{
        printf("str 1 and 2 r the same");
    }
}

int main(){
char str1[100],str2[100];
  input_two_strings(str1,str2);
  int result=stcmp(str1,str2);
  output(result);
}