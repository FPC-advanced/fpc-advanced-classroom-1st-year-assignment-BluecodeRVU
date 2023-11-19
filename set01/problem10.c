#include <stdio.h>
void input_two_strings(char *string1, char *string2){
    printf("ennter the first str: ");
    scanf("%s",string1);
    printf("enter the second str: ");
    scanf("%s",string2);
}
int stringcompare(char *string1, char *string2){//lol
    int i;
    for(i=0;string1[i]!='\0' && string2[i]!='\0';i+=1){
        if (string1[i]>string2[i]){   
        return 0;
          break;//test
    }
    else if(string1[i]==string2[i]){
      return 1;
      break;
    }
    else
      return 2;
  }
}

void output(int result){
    if(result==0){
        printf("str 1 is larger");
    }
    else if(result==1){
        printf("str1 and 2 r same");
    }
    else{
        printf("str2 is larger");
    }
}

int main(){
char str1[100],str2[100];
  input_two_strings(str1,str2);
  int result=stringcompare(str1,str2);
  output(result);
}