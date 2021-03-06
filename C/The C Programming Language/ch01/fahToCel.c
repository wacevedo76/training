/*
  Author: 
  Version: v1.1.0
  Date: Outputs a table of Fahrenheit to Celsius conversions
  Description: 
  Usage: fatToCel
*/

#include <stdio.h>

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;          /* lower limits of temperature table */
  upper = 300;        /* upper limit */
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.00);
    printf("%3.0f  %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}

