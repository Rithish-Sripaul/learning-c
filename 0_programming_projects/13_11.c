#include <stdio.h>

#define MAX_SIZE 100

int read_line(char arr[], int n);
float average_length(const char* sentence);

int main(void) {
  float number_of_words = 0, total_length = 0;
  char ch;

  printf("Enter a sentence: ");
  char sentence[MAX_SIZE];
  read_line(sentence, MAX_SIZE);

  printf("Averange length: %.1f\n", average_length(sentence));
  return 0;
}

int read_line(char arr[], int n) {
  int len = 0;
  char c;

  while ((c = getchar()) != '\n' && len < n - 1) {
    arr[len++] = c;
  }

  arr[len] = '\0';
  return len;
}

float average_length(const char* sentence) {
  float number_of_wrods = 1, total_length = 0;

  while (*sentence) {
    if (*sentence == ' ') {
      number_of_wrods++;
    } else {
      total_length++;
    }
    sentence++;
  }
  printf("Total Length: %f, number of words: %f\n", total_length,
         number_of_wrods);
  return total_length / number_of_wrods;
}