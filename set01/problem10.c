#include <stdio.h>

void input_two_strings(char *string1, char *string2){
    printf("ennter the first str: ");
    scanf("%s",string1);
    printf("enter the second str: ");
    scanf("%s",string2);
}
int stcmp(char *string1, char *string2){//lol
    int i;
    for(i=0;string1[i]!='\0' || string2[i]!='\0';i++){
        if (string1[i]>string2[i]){   
        return 1;
    }
    else if(string1[i]<string2[i]){
      return 2;
    }
  }
  return 3;
}

void output(int result){
    if(result==1){
        printf("str 1 is larger");
    }
    else if(result==2){
        printf("str2 is larger");
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