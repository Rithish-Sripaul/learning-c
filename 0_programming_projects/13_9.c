#include <ctype.h>
#include <stdio.h>

#define MAX_SIZE 100

int compute_vowel_count(const char* sentence);

int main(void) {
  int n = 0;

  char sentence[MAX_SIZE], *p = sentence;
  int c;

  printf("Enter a sentence: ");
  while ((c = getchar()) != '\n') {
    *p++ = c;
  }
  *p = '\0';

  printf("Number of vowels: %d\n", compute_vowel_count(sentence));
  return 0;
}

int compute_vowel_count(const char* sentence) {
  int i = 0;

  while (*sentence) {
    switch (*sentence) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        i++;
        break;
    }
    sentence++;
  }

  return i;
}