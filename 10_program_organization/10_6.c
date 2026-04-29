#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 10

bool is_full(int top);
bool is_empty(int top);
void stack_overflow();
void stack_underflow();
void push(int* top, int stack[], int new_element);
int pop(int* top, int stack[]);
int process_operation(int left_operator, int right_operator, char operator);
void display_stack(int top, int stack[top]);

int main(void) {
  int stack[STACK_SIZE];
  int top = 0, left_operator, right_operator;

  char ch;
  printf("Enter an RPN Expression: ");

  while (true) {
    scanf(" %c", &ch);
    if (ch == '=') {
      break;
    }
    if (isdigit(ch)) {
      push(&top, stack, ch - '0');
    } else {
      right_operator = pop(&top, stack);
      left_operator = pop(&top, stack);
      push(&top, stack, process_operation(left_operator, right_operator, ch));
    }
  }

  printf("Value of expression: %d\n", pop(&top, stack));

  return 0;
}

bool is_full(int top) { return top == STACK_SIZE; }

void stack_overflow(void) {
  printf("Stack is full.\n");
  exit(EXIT_FAILURE);
}

bool is_empty(int top) { return top == 0; }

void stack_underflow(void) {
  printf("Stack is empty\n");
  exit(EXIT_FAILURE);
}

void push(int* top, int stack[], int new_element) {
  if (is_full(*top)) {
    stack_overflow();
  }
  stack[(*top)++] = new_element;
}

int pop(int* top, int stack[]) {
  if (is_empty(*top)) {
    stack_underflow();
  }

  return stack[--(*top)];
}

void display_stack(int top, int stack[top]) {
  printf("Stack: ");
  for (int i = 0; i < top; i++) {
    printf("%d, ", stack[i]);
  }
  printf("Top: %d", top);
  printf("\n");
}

int process_operation(int left_operator, int right_operator, char operator) {
  switch (operator) {
    case '+':
      return left_operator + right_operator;
      break;
    case '-':
      return left_operator - right_operator;
      break;
    case '*':
      return left_operator * right_operator;
      break;
    case '/':
      return left_operator / right_operator;
      break;
  }
  return 0;
}