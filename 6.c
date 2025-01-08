/*All about operands 
• + (Addition) 
• - (Subtraction) 
• * (Multiplication) 
• / (Division) 
• % (Modulus) */

// eg-:

#include<stdio.h>
int main()
{
  
int b = 2, c = 3; 
int z; z = b*c; // We have to assign vales like this  
//int z; b*c = z;   ... we cannot do like this (not allowed)
  printf("Value of z is : %d",z); /// prints the value of z . 
  return  0 ;
  
}
 /*
   An Arithmetic operation can be between 
• int and int → int 
• int and float → float 
• float and float → float 
Example: 
o 5/2 becomes 2 as both the operands are int 
o 5.0/2  becomes 2.5 as one of the operands is float 
o 2/5 becomes 0  as both the operands are int
 */
