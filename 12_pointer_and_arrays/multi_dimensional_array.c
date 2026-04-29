#include <stdio.h>

#define NUM_ROWS 4
#define NUM_COLS 4

int main(void) {
  int arr[NUM_ROWS][NUM_COLS], *p;

  for (p = &arr[0][0]; p <= &arr[NUM_ROWS - 1][NUM_COLS - 1]; p++) {
    *p = 0;
  }
}