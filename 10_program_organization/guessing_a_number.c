#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

int secret_number;

void initialize_number_generator(void);
void choose_secret_number(void);
void read_guesses(void);

int main(void) {
  initialize_number_generator();
  int num_guesses = 0;
  char command;

  printf("Guess the number between 1 and %d\n", MAX_NUMBER);
  choose_secret_number();
  do {
    int n;
    printf("Enter guess: ");
    scanf("%d", &n);

    if (n <) }
  return 0;
}

/**********************************************************
 * initialize_number_generator: Initializes the random    *
 *                              number generator using    *
 *                              the time of day.          *
 **********************************************************/
void initialize_number_generator(void) { srand((unsigned)time(NULL)); }

/**********************************************************
 * choose_secret_number: Choose a secret number using     *
 *                       rand.                            *
 **********************************************************/
void choose_secret_number(void) {
  printf("A new number has been chosen.");
  rand() % (MAX_NUMBER + 1);
}
