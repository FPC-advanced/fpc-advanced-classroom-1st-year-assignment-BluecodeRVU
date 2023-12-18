#include <stdio.h>

int input_degree() {
  printf("Enter degree of poly: ");
  int x;
  scanf("%d", &x);
  return x;
}

void input_coefficients(int n, float a[n]) {
  for (int i = 0; i <= n; i++) {
    printf("Enter value for coeff: ");
    scanf("%f", &a[i]);
  }
}

float input_x() {
  printf("Enter x: ");
  float x;  // Change int to float here
  scanf("%f", &x);
  return x;
}

float evaluate_polynomial(int n, float a[n], float x) {
  float result = 0.0;

  for (int i = n; i >= 0; i--) {
    result = result * x + a[i];
  }

  return result;
}

void output(int n, float a[n], float x, float result) {
  printf("Polynomial coefficients:\n");
  for (int i = n; i >= 0; i--) {
    printf("%.2fx^%d", a[i], i);
    if (i > 0) {
      printf(" + ");
    }
  }

  printf("\n");
  printf("Result of polynomial evaluation at x = %.2f is: %.2f\n", x, result);
}

int main() {
  int degree = input_degree();
  float coefficients[degree + 1];

  input_coefficients(degree, coefficients);

  float x = input_x();
  float result = evaluate_polynomial(degree, coefficients, x);

  output(degree, coefficients, x, result);

  return 0;
}
