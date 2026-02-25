/* Exercise 1-5.  Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0. */

#include <stdio.h>

/* print Celsius-Fahrenheit table
   for cels = 300, 280, ..., 0; floating-point version */

int main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;/* lower limit of temperature table */
  upper = 300;/* upper limit */
  step = 20;/* step size */

  celsius = upper;
  printf("  C     F\n");
  while (celsius >= lower) {
    fahr = ((9.0/5) * celsius) + 32;
    printf("%3d%6d\n", celsius, fahr);
    celsius = celsius - step;
  }
}
