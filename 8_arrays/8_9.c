#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define NUM_ACTIONS 4

bool check_action_validity(char map[SIZE][SIZE], int x, int y) {
  if (x < 0 || x >= SIZE || y < 0 || y >= SIZE || map[x][y] != '.') {
    return false;
  }
  return true;
}

int main(void) {
  char map[SIZE][SIZE];

  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      map[i][j] = '.';
    }
  }

  int curr_x = 0, curr_y = 0;
  char curr_value = 'A';
  map[0][0] = 'A';

  const int actions_code[NUM_ACTIONS] = {0, 1, 2, 3};

  srand((unsigned)time(NULL));

  while (curr_value < 'Z') {
    int curr_action = rand() % NUM_ACTIONS;

    bool stuck = !check_action_validity(map, curr_x - 1, curr_y) &&
                 !check_action_validity(map, curr_x + 1, curr_y) &&
                 !check_action_validity(map, curr_x, curr_y - 1) &&
                 !check_action_validity(map, curr_x, curr_y + 1);

    if (stuck) {
      for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) map[i][j] = '.';
      curr_x = 0;
      curr_y = 0;
      curr_value = 'A';
      map[0][0] = 'A';
      continue;
    }

    if (actions_code[curr_action] == 0) {
      if (check_action_validity(map, curr_x - 1, curr_y)) {
        curr_x--;
        curr_value++;
        map[curr_x][curr_y] = curr_value;
      }
    } else if (actions_code[curr_action] == 1) {
      if (check_action_validity(map, curr_x + 1, curr_y)) {
        curr_x++;
        curr_value++;
        map[curr_x][curr_y] = curr_value;
      }
    } else if (actions_code[curr_action] == 2) {
      if (check_action_validity(map, curr_x, curr_y - 1)) {
        curr_y--;
        curr_value++;
        map[curr_x][curr_y] = curr_value;
      }
    } else if (actions_code[curr_action] == 3) {
      if (check_action_validity(map, curr_x, curr_y + 1)) {
        curr_y++;
        curr_value++;
        map[curr_x][curr_y] = curr_value;
      }
    }
  }

  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      printf("%c ", map[i][j]);
    }
    printf("\n");
  }

  return 0;
}