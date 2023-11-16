#include <stdio.h>
#include <string.h>

void inp(char str[]) {
    printf("Enter a string: ");
    scanf("%s", str);
}

void rev(char str[]) {
    int i, j;
    char revstr[100];
    int lenstr = strlen(str);

    for (j = 0, i = lenstr - 1; i >= 0; j++, i--) {
        revstr[j] = str[i];  
    }
    

    printf("Reversed string: %s\n", revstr);
}

int main() {
    char str[100];
    inp(str);
    rev(str);
    return 0;
}
