#include <stdio.h>

#define SIZE 10

void display_arr(char* p, char arr[], char* size);
int main(void) {
  char arr[SIZE], c, *p;
  p = arr;

  printf("Enter something: ");
  while ((c = getchar()) != '\n' && p < arr + SIZE) {
    *p = c;
    p++;
  }

  display_arr(arr, arr, p);

  return 0;
}

void display_arr(char* p, char arr[], char* size) {
  for (p = p; p < size; p++) {
    printf("%c ", *p);
  }

  printf("\n");
}