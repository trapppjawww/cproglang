/* Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input, and to delete blank lines entirely. */

#include <stdio.h>

#define MAXIMUM 100

int get_line(char s[], int lim);

int main()
{
  int c, i;
  char line[MAXIMUM];

}

int get_line(char s[], int lim)
{
  int i, c;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) 
    s[i];

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';
  return i;
}
