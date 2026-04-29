#include <stdio.h>

int main(void) {
  int a[5] = {1, 2, 3, 4, 5};

  int b[5] = {1};

  int c[10] = {[2] = 9, [8] = 45};
}