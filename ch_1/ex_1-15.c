/* Exercise 1-15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion. */

#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

int convert_to_celsius(int fahr);

int main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;/* lower limit of temperature table */
  upper = 300;/* upper limit */
  step = 20;/* step size */

  fahr = lower;
  while (fahr <= upper) {
    celsius = convert_to_celsius(fahr);
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
}

int convert_to_celsius(int fahr)
{
  return 5 * (fahr - 32) / 9;
}
