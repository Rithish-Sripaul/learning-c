#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100

bool is_full(int* top);
bool is_empty(int* top);
void stack_overflow();
void stack_underflow();
int pop(int* top, int stack[]);
void push(int* top, int stack[], int new_element);
int peek(int* top, int stack[]);

int main(void) {
  int stack[STACK_SIZE];
  int top = 0;

  push(&top, stack, 1);
  push(&top, stack, 2);
  printf("%d\n", peek(&top, stack));
  pop(&top, stack);
  printf("%d\n", peek(&top, stack));

  return 0;
}

bool is_full(int* top) {
  if (*top == STACK_SIZE) {
    return true;
  }
  return false;
}

bool is_empty(int* top) {
  if (*top == 0) {
    return true;
  }
  return false;
}

void stack_overflow() { printf("STACK IS FULL.\n"); }

void stack_underflow() { printf("STACK IS EMPTY.\n"); }

int pop(int* top, int stack[]) {
  if (is_empty(top)) {
    stack_underflow();
    exit(EXIT_FAILURE);
  }
  return stack[--*top];
}

void push(int* top, int stack[], int new_element) {
  if (is_full(top)) {
    stack_overflow();
    exit(EXIT_FAILURE);
  }
  stack[(*top)++] = new_element;
}

int peek(int* top, int stack[]) {
  printf("Value of top: %d, %d\n", *top, stack[*top]);

  return stack[*top - 1];
}