#include<stdio.h>
 
int main()
{
  int x, y, *a, *b, temp;
  printf("Enter the first number: ");
  scanf("%i", &x);
  printf("Enter the second number: ");
  scanf("%i", &y);
  printf("Before Swapping %i = x and  %i = y", x, y);
  a = &x;
  b = &y;
  
  temp = *b;
  *b = *a;
  *a = temp;
  printf("After Swapping %i = x and  %i = y", x, y);
  return 0;
}