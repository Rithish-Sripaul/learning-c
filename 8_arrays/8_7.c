#include <stdio.h>

#define SIZE 5
int main(void) {
  int numbers[SIZE][SIZE] = {0};

  for (int i = 0; i < SIZE; i++) {
    printf("Enter row %d: ", i + 1);
    for (int j = 0; j < SIZE; j++) {
      scanf("%d", &numbers[i][j]);
    }
  }

  // Row totals
  printf("Row totals: ");
  for (int i = 0; i < SIZE; i++) {
    int row_sum = 0;
    for (int j = 0; j < SIZE; j++) {
      row_sum += numbers[i][j];
    }
    printf("%d ", row_sum);
  }

  // Col Totals
  printf("\n");
  printf("Col totals: ");
  for (int i = 0; i < SIZE; i++) {
    int row_sum = 0;
    for (int j = 0; j < SIZE; j++) {
      row_sum += numbers[j][i];
    }
    printf("%d ", row_sum);
  }

  printf("\n");
  return 0;
}