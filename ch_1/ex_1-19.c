/* Ex 19: Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time. */

#include <stdio.h>
#define MAXIMUM 20

int get_line(char s[], int lim);

int main()
{
  int len;
  char line[MAXIMUM];

  len = 0;

  while ((len = get_line(line, MAXIMUM)) > 0) {
    int i;
    for (i = len - 2; i >=0; --i) {
      putchar(line[i]);
    }
    putchar('\n');
  }
}

int get_line(char s[], int lim)
{
  int i, c;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) 
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';
  return i;
}

