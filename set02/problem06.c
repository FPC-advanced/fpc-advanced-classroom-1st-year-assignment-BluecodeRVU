#include <stdio.h>
#include <string.h>

void inp(char str[100]) {
    printf("Enter a string: ");
    scanf("%s", str);
}

int rev(char str[100]) {
    int i, j;
    int lenstr = strlen(str);
    for (j = lenstr, i = lenstr - 1; i >= 0; j++, i--) 
    {
        str[j] = str[i];  
    }
    return lenstr;

}

void out(char str[100],int lenstr){
    printf("Reversed string:");
    for(int i=lenstr;i<2*lenstr;i++){
        printf("%c",str[i]);
    }
}

int main() {
    char str[100];
    inp(str);
    int lenstr=rev(str);
    out(str,lenstr);
    return 0;
}
