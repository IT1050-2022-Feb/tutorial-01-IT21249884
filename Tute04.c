/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

//Function declaration
int max( int no1 , int no2 );//Function declaration for maximum number
int min( int no1 , int no2 );//Function declaration for minimum number
int multiply( int no1, int no2 );//Function declaration for multiplication

int main() {
  //Variable declaration
   int no1, no2;
   int maximum, minimum, multipl;

   //Getting user inputs
   printf("Enter a value for no 1 : ");//prompt
   scanf("%d", &no1);//Getting 1st number

   printf("Enter a value for no 2 : ");//prompt
   scanf("%d", &no2);//Getting 2nd number

   //Function calling
   maximum = max( no1 , no2 );
   minimum = min( no1 , no2 );
   multipl = multiply( no1 , no2 );

   //Displaying minimum, maximum and multiplied answer
   printf("%d ", minimum);
   printf("%d ", maximum);
   printf("%d ", multipl);
   return 0;
}
int max( int no1 , int no2 )//Function implementation
{
  int maxi;//Variable declaration

  if( no1 > no2 )
  maxi = no1;
  else 
  maxi = no2;

  return maxi;//Returning maximum value to main function
}

int min( int no1 , int no2 )//Function implementation
{
  int mini;//Variable declaration

  if( no1 < no2 )
  mini = no1;
  else 
  mini = no2;

  return mini;//Returning minimum value to main function
}

int multiply( int no1, int no2 )
{
  int multi;

  multi = no1 * no2;

  return multi;
}