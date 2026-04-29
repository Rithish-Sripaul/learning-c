#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

bool is_empty(int top);
bool is_full(int top);
void stack_overflow();
void stack_underflow();
char pop(int* top, char stack[]);
void push(int* top, char stack[], char new_char);
void display_stack(int top, char stack[top]);
bool is_match(char open, char close);

int main(void) {
  char stack[STACK_SIZE];
  int top = 0;

  printf("Enter parenthese and/or braces: ");
  char c, popped_c;
  while ((c = getchar()) != '\n') {
    if (c == '(' || c == '{') {
      push(&top, stack, c);
    } else {
      if (!is_match(pop(&top, stack), c)) {
        printf("Not Matching.\n");
        return 0;
      };
    }

    display_stack(top, stack);
  }

  if (top == 0) {
    printf("All matching.\n");
  } else {
    printf("Not matching.\n");
  }
  return 0;
}

bool is_full(int top) { return top == STACK_SIZE; }

bool is_empty(int top) { return top == 0; }

void stack_overflow() {
  printf("Stack is full.\n");
  exit(EXIT_SUCCESS);
}

void stack_underflow() {
  printf("Stack is empty. Not Matching.\n");
  exit(EXIT_SUCCESS);
}

void push(int* top, char stack[], char new_char) {
  if (is_full(*top)) {
    stack_overflow();
  } else {
    stack[++(*top)] = new_char;
  }
}

char pop(int* top, char stack[]) {
  if (is_empty(*top)) {
    stack_underflow();
    return ' ';
  } else {
    return stack[(*top)--];
  }
}

void display_stack(int top, char stack[top]) {
  for (int i = 0; i < top; i++) {
    printf("%c, ", stack[i]);
  }
  printf("\n");
}

bool is_match(char open, char close) {
  if ((open == '{' && close == '}') || (open == '(' && close == ')')) {
    return true;
  }
  return false;
}
