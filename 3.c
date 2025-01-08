//To make basic operational calculator for operations on 2 digits ... (+,-,*,/,%)
#include<stdio.h>
int main ()
{
  int a,b;
  printf("Enter two numbers");

  printf("Enter first number : ");
  scanf("%d",&a);
  printf("Enter second number : ");
  scanf("%d",&b);
  // as discussed earlier 
  // We can take out sum in two ways 

  // By introducing int data type named as sum 
   // or 
  // By doing evaliation directly 
  //we are going to o this directly 

  printf("The sum is %d",a+b);
  printf("The difference is %d",a-b);
  printf("The product is %d",a*b);
  printf("The quotient is %d",a/b);
  printf("The remainder is %d",a%b);

  return 0;
  
}
 
