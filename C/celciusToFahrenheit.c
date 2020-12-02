#include <stdio.h>
/* prnt Fehrenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating-point version */

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;      /* lower limit of temperature table */
  upper = 300;    /* upper limit */ 
  step = 20;      /* step size */ 

  fahr = lower;
  printf("This is a table showing the conversion from Celsius to Fehrenheit\n");
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%6.1f %6.0f\n",celsius ,fahr);
    fahr = fahr + step;
  }
}