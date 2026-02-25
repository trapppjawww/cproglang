/* Exercise 1-9. Write a program to copy its input to its output, replacing each string of one of more blanks by a single blank. */

#include <stdio.h>

#define IN 1
#define OUT 0

/* count lines in input */

int main()
{
  int c, state;
  state = OUT;
  
  while ((c = getchar()) != EOF) {
    if ((c == ' ' || c == '\t') && state == OUT) {
      state = IN;
      putchar(c);
    }
    else if ((c != ' ' && c != '\t') && state == IN) {
      state = OUT;
      putchar(c);
    }
    else if ((c != ' ' && c != '\t') && state == OUT) putchar(c);
  }
}
