/* Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input, and to delete blank lines entirely. */

#include <stdio.h>

#define MAXIMUM 20

int get_line(char s[], int lim);

int main()
{
  int len;
  char line[MAXIMUM];

  len = 0;

  while ((len = get_line(line, MAXIMUM)) > 0) {
    if (len == 1) continue;

    int i;
    for (i = len - 1; i >=0; --i) {
      if (
	  line[i] != ' ' &&
	  line[i] != '\t' &&
	  line[i] != '\n' &&
	  line[i] != '\0'
      ) {
	break;
      }
      
      if (line[i] == ' ' || line[i] == '\t') continue;
    }
    
    line[i + 1] = '\n';
    line[i + 2] = '\0';
    
    printf("%s", line);
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
