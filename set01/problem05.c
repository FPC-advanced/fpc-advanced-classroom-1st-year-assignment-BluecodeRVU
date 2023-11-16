#include <stdio.h>

int input() {
    int x;
    printf("Please enter a value: ");
    scanf("%d", &x);
    return x;
}

int compare(int a, int b, int c) {
    int largest;

    if (a > b && a > c) {
        largest = a;
    } else if (b > c && b > a) {
        largest = b;
    } else if (c > a && c > b) {
        largest = c;
    }

    return largest;
}

void output(int a, int b, int c, int largest) {
    printf("Out of %d, %d and %d, %d is the largest.\n", a, b, c, largest);
}

int main() {
    int a = input();
    int b = input();
    int c = input();
    int largest = compare(a, b, c);
    output(a, b, c, largest);
    return 0;
}
