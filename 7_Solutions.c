/*
  1. Which of the following is invalid in C?
  */
a. int a=1; int b = a; (This is valid; it assigns the value of a to b.)
b. int v = 3*3; (This is valid; it calculates the product of 3 and 3 and assigns it to v.)
c. char dt = '21 dec 2020'; (This is invalid; single quotes should be used for individual characters, not for a string like “21 dec 2020”.)


  /*
  2. What data type will 3.0/8 - 2 return?
  */
The expression 3.0/8 - 2 involves both floating-point and integer values. The result will be a floating-point number.
  
/*
3. Write a program to check whether a number is divisible by 97 or not.
*/
  #include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 97 == 0) {
        printf("%d is divisible by 97.\n", number);
    } else {
        printf("%d is not divisible by 97.\n", number);
    }

    return 0;
}

/*
4. Explain step by step evaluation of 3*x/y - z+k, where x=2, y=3, z=3, k=1.
*/
Let’s break it down:
Substitute the given values: 3*2/3 - 3 + 1.
Evaluate multiplication first: 6/3 - 3 + 1.
Evaluate division: 2 - 3 + 1.
Perform subtraction: -1 + 1.
The final result is 0.

/*
  5. What will 3.0 + 1 be?
*/
The expression involves a floating-point number (3.0) and an integer (1). The result will be a floating-point number.
  

















