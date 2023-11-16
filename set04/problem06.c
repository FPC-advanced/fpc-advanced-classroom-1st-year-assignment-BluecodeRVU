#include <stdio.h>
#include <string.h>

void input_string(char *a) {
    printf("Please enter a string: ");
    scanf(" %[^\n]", a);
}

int count_words(char *a,char *string) {
  int wcount=0;
  char x[]=" ";
   string = strtok(a,x);
  while(string!=NULL){
    wcount++;
    string=strtok(NULL,x);
  }
    return wcount;
}

void output(int no_words) {
    printf("%d\n", no_words);
}

int main() {
    char a[100],string[100];
    input_string(a);
  int wcount = count_words(a,string);
  output(wcount);

    return 0;
}
