#include <stdio.h>

#define MAX_WORDS 30
#define MAX_LEN 20

int read_line(int i, int j, char sentence[][j]);

int main(void) {
  char sentence[MAX_WORDS][MAX_LEN];
  int len;

  printf("Enter a sentence: ");
  len = read_line(MAX_WORDS, MAX_LEN, sentence);

  for (int i = len; i >= 0; i--) {
    printf("%s ", sentence[i]);
  }

  printf("\n");

  return 0;
}

int read_line(int i, int j, char sentence[][j]) {
  char c;
  int words = 0;

  int letters = 0;
  while ((c = getchar()) != '\n' && words < i - 1) {
    if (c == ' ') {
      sentence[words++][letters] = '\0';
      letters = 0;
    } else {
      sentence[words][letters++] = c;
    }
  }
  return words;
}