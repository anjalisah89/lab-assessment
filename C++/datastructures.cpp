#include<stdio.h>
int main() 
{
      double first, second, temp;
      printf("Enter first number: ");
      scanf("%d", &first);
      printf("Enter second number: ");
      scanf("%d", &second);

      temp = first;

      first = second;

      second = temp;

      printf("\nAfter swapping, firstNumber = %d \n", first);
      printf("After swapping, secondNumber = %d ", second);
      return 0;
}
