#include <ctype.h>
#include <stdio.h>

#define MAX_LENGTH 100
int main(void) {
  char message[MAX_LENGTH] = {0};

  printf("Enter Message: ");
  char c;
  int message_length = 0;
  while ((c = getchar()) != '\n') {
    message[message_length] = c;
    message_length++;
  }

  printf("Converted: ");
  for (int i = 0; i < message_length; i++) {
    switch (toupper(message[i])) {
      case 'A':
        printf("4");
        break;
      case 'B':
        printf("8");
        break;
      case 'E':
        printf("3");
        break;
      case 'I':
        printf("1");
        break;

      case 'O':
        printf("0");
        break;
      case 'S':
        printf("5");
        break;

      default:
        printf("%c", toupper(message[i]));
        break;
    }
  }

  printf("\n");
  return 0;
}