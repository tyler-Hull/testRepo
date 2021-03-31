// Simple program to swap two numbers
// Example from https://www.programiz.com/c-programming/examples/swapping

#include<stdio.h>
int main() {
      double first, second, temp;
      printf("Please enter first number: ");
      scanf("%lf", &first);
      printf("Please enter second number: ");
      scanf("%lf", &second);
      printf("Thank you so much!");

      // Value of first is assigned to temp
      temp = first;

      // Value of second is assigned to first
      first = second;

      // Value of temp (initial value of first) is assigned to second
      second = temp;

      printf("\nAfter swapping, firstNumber = %.2lf\n", first);
      printf("After swapping, secondNumber = %.2lf", second);
      return 0;
}
