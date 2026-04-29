#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 20

int main(void) {
  char smallest_word[MAX_SIZE], largest_word[MAX_SIZE];

  while (true) {
    char new_word[MAX_SIZE], c;
    int len = 0;
    printf("Enter word: ");
    while ((c = getchar()) != '\n') {
      new_word[len++] = c;
    }
    new_word[len] = '\0';

    if (strcmp(new_word, smallest_word) < 0) {
      strcpy(smallest_word, new_word);
    }

    if (strcmp(new_word, largest_word) > 0) {
      strcpy(largest_word, new_word);
    }

    if (len == 4) {
      break;
    }
  }

  printf("\n");
  printf("Smallest word: %s\n", smallest_word);
  printf("Largest word: %s\n", largest_word);
  return 0;
}