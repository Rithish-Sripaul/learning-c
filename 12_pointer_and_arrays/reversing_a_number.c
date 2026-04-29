#include <stdio.h>

#define SIZE 5

int main(void) {
  int arr[] = {4, 3, 2, 0, 5}, *p;

  for (p = arr; p < arr + SIZE; p++) {
    printf("%d ", *p);
  }

  printf("\n");

  for (p = arr + SIZE - 1; p >= arr; p--) {
    printf("%d ", *p);
  }

  printf("\n");

  return 0;
}