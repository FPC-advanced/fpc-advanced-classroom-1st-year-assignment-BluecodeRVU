#include <stdio.h>
void input(char *name){
  printf("pls enter a name: ");
  scanf("%s",name);
}
int has_nice_name(char *c){
  int con=0,vow=0;
  for(int i=0;c[i]!='\0';i++){
  (c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')?vow++:con++;
  }
  int res=(vow>=2 && con>=2)?0:1;
  return res;
}
void output(int res){
  char *str=(res==0)?"has a nice name": "not a good name";
  printf("%s",str);
}
int main(){
  char name[100];
  input(name);
  int res=has_nice_name(name);
  output(res);
}