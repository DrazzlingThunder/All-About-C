// About Conditional Statements -:
// They are of two types • if–else statement • switch statement 
// Here we are going to see use of if else statement

//We are going to check that number is positive negative or zero ... 

#include <stdio.h>
int main ()
{
  int a;
  printf("Enter a number : ");
  scanf("%d",&a);
  if(a>0)
  {
    printf("The provided number is positive...");
  }
  if(a<0)
  {
    printf("The provided number is negative...");
  }
  else
  {
    printf("The provided number is zero...");
  }
  return 0; 

}
