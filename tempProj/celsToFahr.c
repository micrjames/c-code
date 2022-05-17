#include <stdio.h>

/* 
 * modify the temperature conversion program to
 * print a heading above the table
 */

/*
 * write a program to print the corresponding
 * celsius to fahrenheit table
 */ 
int main() {
   float fahr, celsius;
   float lower, upper, step;

   lower = 0;
   upper = 300;
   step = 20;

   fahr = lower;
   while(fahr <= upper) {
	  celsius = (5.0/9.0) * (fahr-32);
	  printf("%3.0f\t%6.1f\n", fahr, celsius);
	  fahr = fahr + step;
   }
}
