#include <stdio.h>

double sqr(double x);

int main() {
  double x, y;

  x = 2.0;
  y = sqr(x);
  printf("y=%f\n", y);
  y = sqr(y);
  printf("y=%f\n", y);
  y = sqr(x * x + 1.0);
  printf("y=%f\n", y);

  return 0;
}

double sqr(double x) {
  double y;
  y = x * x;
  return y;
}