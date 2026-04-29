#include <stdio.h>

int main(void) {
  int arr[10];

  printf("Enter 10 numbers: ");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < 5; i++) {
    int temp = arr[i];
    arr[i] = arr[10 - i - 1];
    arr[10 - i - 1] = temp;
  }

  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }

  printf("\n");
  
  return 0;
}