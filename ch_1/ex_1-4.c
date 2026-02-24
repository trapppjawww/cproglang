/* Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table. */

#include <stdio.h>

/* print Celsius-Fahrenheit table
   for cels = 0, 20, ..., 300; floating-point version */

int main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;/* lower limit of temperature table */
  upper = 300;/* upper limit */
  step = 20;/* step size */

  celsius = lower;
  printf("  C     F\n");
  while (celsius <= upper) {
    fahr = ((9.0/5) * celsius) + 32;
    printf("%3d%6d\n", celsius, fahr);
    celsius = celsius + step;
  }
}
