// Sum of numbers in c program 
#include<stdio.h>
int main()
{
  int a,b;
  // scanf is used to take input from user 
  printf("Enter Two digits of which you want sum : \n");
  printf("\n Enter First digit : ");
  scanf("%d",&a);
  printf("\n Enter Second digit : ");
  scanf("%d",&b);
  // We can take out sum in two ways 

  // By introducing int data type named as sum 
  int sum ;
  sum=a+b;
  printf("The sum of the digits is : %d\n",sum);
  // By doing evaliation directly 
  printf("The sum of the digits is : %d\n",a+b);
  return 0;
  
}
/*
OUTPUT

*/
