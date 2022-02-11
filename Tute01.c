/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float n1, n2;
  float average, sum;
  
  //Getting user inputs...
  printf(" Enter the first mark...  "); //prompt
  scanf("%f", &n1);   //Getting 1st mark

  printf(" Enter the second mark...  ");//prompt
  scanf("%f", &n2);   //Getting 2nd mark

  //Calculations
  sum = n1 + n2;//Calculating the sum of the two numbers

  average = sum / 2.0;//Calculating the average

  //Displaying the output
  printf(" The average of the two marks is..\n %.2f", average);

  return 0;
}

