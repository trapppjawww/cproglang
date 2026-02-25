/* Exercise 1-13. Write a program to print a histogram of the lengths of words in its input.  It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging */

#include <stdio.h>

#define OCCURRENCES_LENGTH 25
#define MAX_OCCURRENCES_INDEX 24

int main()
{
  int c, i, j, curr_len;
  int occurrences[OCCURRENCES_LENGTH];
  
  curr_len = 0;

  for (i = 0; i < OCCURRENCES_LENGTH; i++) {
    occurrences[i] = 0;
  }
  
  while ((c = getchar()) != EOF) {
    if (c >= 'A' && c <= 'Z') {
      curr_len++;
    } else if (c >= 'a' && c <= 'z') {
      curr_len++;
    } else if (c == ' ' || c == '\t' || c == '\n') {
      if (curr_len > 0 && curr_len < OCCURRENCES_LENGTH)
	// arrays are zero based and words are always greater than 0
	occurrences[curr_len - 1]++;
      else if (curr_len >= OCCURRENCES_LENGTH)
	occurrences[MAX_OCCURRENCES_INDEX]++;
      
      curr_len = 0;
    } 
  }
  
  for (i = 0; i < OCCURRENCES_LENGTH; i++) {
    if (i < OCCURRENCES_LENGTH - 1) {
      // offset the index for use in printed histogram
      printf("%3d: ", i + 1);
    } else {
      printf("%3d+: ", OCCURRENCES_LENGTH);
    }
    for (j = 0; j < occurrences[i]; j++) {
      printf("*");
    }
    printf("\n");
  }
}

/* TODO: implement the vertical variant */
