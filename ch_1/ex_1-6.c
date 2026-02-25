/* Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1. */

#include <stdio.h>

void print_char_and_eof_check(int);

int main()
{
  int c;

  while ((c = getchar()) != EOF) {
    print_char_and_eof_check(c);
  }
  print_char_and_eof_check(c);
}

void print_char_and_eof_check(int i)
{
  putchar(i);
  int check;

  check = (i != EOF);
  if (check)
    printf("\nNot EOF: %d\n", check);
  else
    printf("\nEOF: %d\n", check);
}
