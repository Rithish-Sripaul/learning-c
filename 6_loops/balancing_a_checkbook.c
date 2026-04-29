#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int balance = 0;

  printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");

  while (true) {
    int command;
    bool exit = false;
    printf("Enter a command: ");
    scanf("%d", &command);

    switch (command) {
    case 0:
      balance = 0;
      break;
    case 1: {
      int amount;
      printf("Enter amount to Credit: ");
      scanf("%d", &amount);
      balance += amount;
      break;
    };
    case 2: {
      int amount;
      printf("Enter amount to debit: ");
      scanf("%d", &amount);
      balance -= amount;
      break;
    };
    case 3: {
      printf("Balance: %d\n", balance);
      break;
    };
    default:
      exit = true;
      break;
    }

    if (exit) {
      break;
    }
  }
  return 0;
}