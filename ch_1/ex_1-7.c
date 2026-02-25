/* Exercise 1-7. Write a program to print the value of EOF. */

#include <stdio.h>

int main()
{
  int c;
  
  printf("Please press CTRL-d to print EOF\n");
  while ((c = getchar()) != EOF)
    continue;
  printf("\nEOF reached. Valuez: %d\n", c);
}
  
