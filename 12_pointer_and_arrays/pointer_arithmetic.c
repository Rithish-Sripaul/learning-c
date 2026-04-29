#include <stdio.h>

#define SIZE ((int)(sizeof(arr) / sizeof(arr[0])))
int main(void) {
  int N = 5;
  int arr[5] = {10, 20, 30, 40, 50};
  int *p, *q;

  for (p = &arr[0]; p < &arr[SIZE]; p++) {
    printf("%d ", *p);
  }
  printf("\n");

  for (p = &arr[SIZE - 1]; p >= &arr[0]; p--) {
    printf("%d ", *p);
  }
  printf("\n");

  p = &arr[1];
  q = &arr[5];
  int j = p > q ? p - q : q - p;
  printf("%d : %d", j, arr[j]);

  printf("\n");

  // SUM OF ELEMENTS
  int sum = 0;
  p = &arr[0];
  while (p < &arr[N]) {
    sum += *p++;
  }

  printf("Sum: %d\n", sum);
  return 0;
}