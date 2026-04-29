#include <stdio.h>

#define SIZE ((int)(sizeof(arr) / sizeof(arr[0])))

void min_max(int arr[], int size, int* min, int* max);

int main(void) {
  int arr[] = {5, 3, 2, 0, 10, -10};
  int min, max;

  min_max(arr, SIZE, &min, &max);

  printf("Min: %d, Max: %d\n", min, max);
  return 0;
}

void min_max(int arr[], int size, int* min, int* max) {
  *min = *max = arr[0];

  for (int i = 0; i < size; i++) {
    *min = *min < arr[i] ? *min : arr[i];
    *max = *max > arr[i] ? *max : arr[i];
  }
}