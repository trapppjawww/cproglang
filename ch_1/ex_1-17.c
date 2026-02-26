/* Exercise 1-17. Write a program to print all input lines that are longer than 80. */

#include <stdio.h>
#define MINIMUM 20
#define MAXIMUM 100

int get_line(char s[], int lim);

int main()
{
  int len,
  char line[MAXIMUM];
  
  while (len = get_line(line, MAXIMUM) != 0) {
    if ((len == MINIMUM - 1) && (line[len-1] != '\n')) {
      printf("%s", line);
      while ((c = getchar()) != EOF && c!= '\n')
	putchar(c);
      putchar('\n');
    }
  }
  return 0;
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

  s[i] = '\0'
}
