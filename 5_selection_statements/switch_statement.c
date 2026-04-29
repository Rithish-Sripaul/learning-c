#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int grade;

  printf("Enter a number: ");
  scanf("%d", &grade);

  switch (grade) {
    case 4: {
      printf("What");
      break;
    };
    case 3: {
      printf("testing");
      break;
    }
    default: {
      printf("Illegal");
      break;
    }
  }
}