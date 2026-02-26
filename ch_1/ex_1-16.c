/* Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print the length of arbitrarily long input lines, and as muchy as possible of the text. */

#include <stdio.h>
#define MAXLINE 20 /* made smaller for testing purposes */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
  int len, max, prevmax, getmore;
  char line[MAXLINE]; /* current input line */
  char longest[MAXLINE]; /* longest line saved here */
  char temp[MAXLINE]; /* used to hold input beyond the max */

  max = prevmax = getmore = 0;
  while ((len = get_line(line, MAXLINE)) > 0) {

    if (line[len - 1] != '\n') {

      if (getmore == 0)
	copy(temp, line);
      prevmax += len;

      if (max < prevmax)
	max = prevmax;
      getmore = 1;
      
    } else {

      if (getmore == 1) {

	if (max < prevmax + len) {
	  max = prevmax + len;
	  copy(longest, temp);
	  longest[MAXLINE - 2] = '\n';
	}

	getmore = 0;
	
      } else if (max < len) {
	
	max = len;
	copy(longest, line);
	
      }
      
      prevmax = 0;
      
    }
  }
  
  if (max > 0) /* there was a line */ {
    printf("%s", longest);
    printf("len = %d\n", max);
  }
  
  return 0;
}

/* getline: read a line into s, return length */
int get_line(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  
  if (c == '\n') {
    s[i] = c;
    ++i;
  } else if (c == EOF && i > 0) {
    s[i] = '\n';
    ++i;
  }
  
  s[i] = '\0';
  return i; 
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from [])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
