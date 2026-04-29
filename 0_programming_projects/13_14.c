#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#define MAX_SIZE 100

int read_line(char arr[], int n);
bool are_anagrams(const char* word1, const char* word2);

int main(void) {
  char word1[MAX_SIZE], word2[MAX_SIZE];
  int len1, len2;

  printf("Enter a word: ");
  len1 = read_line(word1, MAX_SIZE);
  printf("Enter a word: ");
  len2 = read_line(word2, MAX_SIZE);

  if (are_anagrams(word1, word2)) {
    printf("The two words are anagrams.\n");
  } else {
    printf("The two words are NOT anagrams.\n");
  }
  return 0;
}

int read_line(char arr[], int n) {
  char c;
  int len = 0;

  while ((c = getchar()) != '\n' && len < n - 1) {
    arr[len++] = c;
  }

  arr[len] = '\0';
  return len;
}

bool are_anagrams(const char* word1, const char* word2) {
  int letters1[26] = {0};
  int letters2[26] = {0};

  while (*word1 && *word2) {
    letters1[tolower(*word1) - 'a']++;
    letters2[tolower(*word2) - 'a']++;
    word1++;
    word2++;
  }

  if (*word1 || *word2) {
    return false;
  }

  for (int i = 0; i < 26; i++) {
    if (letters1[i] != letters2[i]) {
      return false;
    }
  }
  return true;
}