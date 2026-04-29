#include <stdio.h>

#define MAX_SIZE 100

void selection_sort(int n, int arr[n]);

int main(void) {
  int arr[MAX_SIZE] = {0};
  int n = 0, c;

  printf("Enter the numbers: ");

  while (n < MAX_SIZE && scanf("%d", &arr[n]) == 1) {
    n++;
  }

  selection_sort(n, arr);

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

void selection_sort(int n, int arr[n]) {
  if (n == 0) {
    return;
  } else {
    int largest_num_index = 0;

    for (int i = 0; i < n; i++) {
      largest_num_index =
          arr[i] > arr[largest_num_index] ? i : largest_num_index;
    }

    int temp = arr[largest_num_index];
    arr[largest_num_index] = arr[n - 1];
    arr[n - 1] = temp;

    selection_sort(n - 1, arr);
  }

  return;
}