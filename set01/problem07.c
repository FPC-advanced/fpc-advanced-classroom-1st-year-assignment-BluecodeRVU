#include <stdio.h>

int input() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}

int sum(int n) {
    int i,sum=0;
    for (i=1;i<=n;i+=1) {
        sum+=i;
    }
    return sum;
}

void output(int n, int sum) {
    printf("Sum up to %d is %d\n", n, sum);
}

int main() {
    int n = input();
    int sum_result = sum(n);
    output(n, sum_result);
    return 0;
}


