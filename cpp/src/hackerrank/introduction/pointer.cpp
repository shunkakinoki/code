// Copyright 2019 Shun Kakinoki.
// Reference: https://www.hackerrank.com/challenges/c-tutorial-pointer/forum

#include <stdio.h>

void update(int *a, int *b) {
  int sum = *a + *b;
  int absDifference = *a - *b > 0 ? *a - *b : -(*a - *b);
  *a = sum;
  *b = absDifference;
}
int main() {
  int a, b;
  int *pa = &a, *pb = &b;

  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d\n%d", a, b);

  return 0;
}
