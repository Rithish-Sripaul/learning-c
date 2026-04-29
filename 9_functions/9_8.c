#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ROLLS 12

int roll_dice(void);
bool play_game(void);

int main(void) {
  int points[2] = {0};
  char play_again;
  srand((unsigned)time(NULL));

  do {
    printf("\n");

    bool result = play_game();
    if (result) {
      points[0]++;
    } else {
      points[1]++;
    }
    printf("\n");
    printf("Play again? ");
  } while ((play_again = tolower(getchar())) == 'y');
  printf("Wins: %d\tLosses: %d\n", points[0], points[1]);
  return 0;
}

bool play_game(void) {
  int point = 0, new_roll;

  bool first_roll;

  while (true) {
    new_roll = roll_dice();
    if (first_roll) {
      if (new_roll == 7 || new_roll == 11) {
        printf("You win!\n");
        return true;
      } else if (new_roll == 2 || new_roll == 3 || new_roll == 12) {
        printf("You lose!\n");
        return false;
      } else {
        point = new_roll;
        printf("\nYour point is %d\n", point);
      }
      first_roll = false;
    } else {
      if (new_roll == point) {
        printf("You win!\n");
        return true;
      } else if (new_roll == 7) {
        printf("You lose!\n");
        return false;
      }
    }
  }
}

int roll_dice(void) {
  int dice_1, dice_2;
  char c;

  dice_1 = rand() % 6 + 1;
  dice_2 = rand() % 6 + 1;

  printf("You rolled: %d", dice_1 + dice_2);
  while ((c = getchar()) != '\n') {
    continue;
  }
  return dice_1 + dice_2;
}