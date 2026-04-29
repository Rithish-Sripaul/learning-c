#include <ctype.h>
#include <stdio.h>
#define SIZE 26
int main(void) {
  int first_word[SIZE] = {0};
  int second_word[SIZE] = {0};

  printf("Enter First word: ");
  char c;
  while ((c = getchar()) != '\n') {
    c = tolower(c) - 'a';
    first_word[c]++;
  }

  printf("Enter Second word: ");
  while ((c = getchar()) != '\n') {
    c = tolower(c) - 'a';
    second_word[c]++;
  }

  for (int i = 0; i < SIZE; i++) {
    if (first_word[i] != second_word[i]) {
      printf("The words are not anagrams.\n");
      return 0;
    }
  }

  printf("The wrods are anagrams.\n");
  return 0;
}