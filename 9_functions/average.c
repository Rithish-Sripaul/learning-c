#include <stdio.h>

int sum_arr(int n, int arr[n]);

int main(void) {
  int n = 5;
  int total = sum_arr(n, (int[]){1, 2, 3, 4, 5});

  printf("Total: %d", total);
  return 0;
}

int sum_arr(int n, int arr[n]) {
  int total = 0;
  for (int i = 0; i < n; i++) {
    total += arr[i];
  }
  return total;
}