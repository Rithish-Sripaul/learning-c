#include <stdio.h>

int main(void) {
  int arr[10], sum = 0;
  *arr = 10;
  int* p;
  for (p = arr; p < arr + 10; p++) {
    sum += *p;
  }

    return 0;
}