#include <stdio.h>

int input_n() {
    int n;
    printf("Please enter a number: ");
    scanf("%i", &n);
    return n;
}

void input(int n, int a[n]) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Input:");
        scanf("%d", &a[i]);
    }
}

float odd_average(int n, int a[n]) {
    float avg;
    float sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            count++;
            sum += a[i];
        }
    }

   
        avg=sum/count; 

    return avg;
}

void output(float avg) {
    printf("%f", avg);
}

int main() {
    int n;
    n = input_n();
    int a[n];
    input(n, a);
    float avg = odd_average(n, a);
    output(avg);
    return 0;
}
