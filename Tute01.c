/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int mark1, mark2, sum;
  float avg;  

  printf("Enter mark 1: ");
  scanf("%d", &mark1);
  printf("Enter mark 1: ");
  scanf("%d", &mark1);

  sum = mark1 + mark2;

  avg = sum/2;

  printf("Average of two marks is: %.2f", avg);

  return 0;
}

