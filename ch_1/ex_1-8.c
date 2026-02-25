/* Exercise 1-8. Write a program to count blanks, tabs, and newlines */

#include <stdio.h>

/* count lines in input */

int main()
{
  int c, nl, nt, nb;

  nl = 0;
  nt = 0;
  nb = 0;
  
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    if (c == '\t')
      ++nt;
    if (c == ' ' )
      ++nb;
  }
  
  printf("Line count: %d\n", nl);
  printf("Tab count: %d\n", nt);
  printf("Blank count: %d\n", nb);
}
