#include <stdio.h>
void input(char *name){
    printf("Enter your name: ");
    scanf("%s",name);
}

int has_nice_name(char *c){
    int i;
    int countvov=0;
    int countcon=0;
    
    for(i=0;c[i]!='\0';i++){
        if (c[i]=='a'|| c[i] == 'e' || c[i] == 'i' || c[i]=='o' || c[i]=='u'){
            
            countvov++;
        }
        else{
            
            countcon++;

        }
    
    }
    if(countvov>=2 && countcon>=2){
        return 0;
    }
    else{
        return 1;
    }
}
void output(int res){
    if(res==0){
        printf("its a good name");
    }
    else{
        printf("it is a bad name");
    }
}

int main(){
    char c[50];
    input(c);
    int result = has_nice_name(c);
    output(result);
}