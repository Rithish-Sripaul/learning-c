#include <stdio.h>

int main(void) {

  float number_of_words = 0, total_length = 0;
  float average_length;
  char ch;

  printf("Enter a sentence: ");
  while ((ch = getchar()) != '\n') {
    if (ch == ' ') {
      number_of_words++;
    } else {
      total_length++;
    }
  }

  average_length = total_length / number_of_words;
  printf("Averange length: %.1f\n", average_length);
  return 0;
}