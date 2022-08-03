/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {
  float a,b,tot,average;
  printf("Enter number 1:");
  scanf("%f",&a);

  printf("Enter number 2:");
  scanf("%f",&b);

  tot=a+b;
  average=tot/2;
  printf("Average of the two marks is: %.2f",average);

  
  
  
  return 0;
}

