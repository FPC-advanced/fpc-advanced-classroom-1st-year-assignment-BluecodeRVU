#include <stdio.h>

int input() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int arr[n]) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Please enter value: ");
        scanf("%d", &arr[i]);
    }
}

int sum(int n, int arr[n]) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

void output(int n, int sum) {
    printf("The sum of the array of size %d is %d\n", n, sum);
}

int main() {
    int n = input();
    int arr[n];
    input_array(n, arr);
    int sum_result = sum(n, arr);
    output(n, sum_result);
    return 0;
}
