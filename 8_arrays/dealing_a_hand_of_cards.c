#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void) {
  bool in_hand[NUM_SUITS][NUM_RANKS] = {false};

  const char* rank_code[] = {"Two",   "Three", "Four", "Five", "Six",
                             "Seven", "Eight", "Nine", "Ten",  "Jack",
                             "Queen", "King",  "Ace"};

  const char* suit_code[] = {"Clove", "Diamond", "Heart", "Spade"};
  int num_cards, rank, suit;

  srand((unsigned)time(NULL));

  printf("Enter number of cards in hand: ");
  scanf("%d", &num_cards);

  printf("Your hand: ");

  while (num_cards > 0) {
    rank = rand() % NUM_RANKS;
    suit = rand() % NUM_SUITS;

    if (in_hand[suit][rank] == false) {
      in_hand[suit][rank] = true;
      printf("%s of %s\n", rank_code[rank], suit_code[suit]);
      num_cards--;
    }
  }

  printf("\n");
  return 0;
}