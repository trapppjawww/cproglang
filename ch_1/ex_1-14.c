/* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input. */

#include <stdio.h>

#define OCCURRENCES_LENGTH 26

int main()
{
  int c, i, j;
  int occurrences[OCCURRENCES_LENGTH];
  
  for (i = 0; i < OCCURRENCES_LENGTH; i++) {
    occurrences[i] = 0;
  }
  
  while ((c = getchar()) != EOF) {
    if (c >= 'A' && c <= 'Z') {
      occurrences[c - 'A']++;
    } else if (c >= 'a' && c <= 'z') {
      occurrences[c - 'a']++;
    } 
   }
  
  for (i = 0; i < OCCURRENCES_LENGTH; i++) {
      printf("%c: ", 'a' + i);
    for (j = 0; j < occurrences[i]; j++) {
      printf("*");
    }
    printf("\n");
  }
}

  
