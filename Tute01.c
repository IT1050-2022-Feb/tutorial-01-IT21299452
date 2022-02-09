/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int marks1,marks2;
   float avg;
   printf("enter the marks for subject 1 :");
   scanf("%d",&marks1);
   printf("enter the marks for subject 2 :");
   scanf("%d",&marks2);
   
   printf("the average of the two marks is : %.2f ",(marks1+marks2)/2.0);
          
  return 0;
}

