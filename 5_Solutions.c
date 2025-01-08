/*
1. Write a C program to calculate area of a rectangle: 

a. Using hard coded inputs. 
*/

#include<stdio.h>
int main()
{
int length ,breadth ;
printf("Enter Length of rectangle : ");
scanf("%d",&length);
  

}

/*
  b. Using inputs supplied by the user. 
*/
#include <stdio.h>

int main() {
    double length, width;

    // Prompt the user for input
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    // Calculate the area
    double area = length * width;

    // Print the result
    printf("Rectangle Area: %.2f square units\n", area);

    return 0;
}

/*
  2. Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height.
*/
#include <stdio.h>
#include <math.h> // For the value of pi (M_PI)

int main() {
    double radius, height;

    // Prompt the user for the radius
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate and print the area of the circle
    double circleArea = M_PI * pow(radius, 2);
    printf("Area of the circle: %.2f square units\n", circleArea);

    // Prompt the user for the height of the cylinder
    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate and print the volume of the cylinder
    double cylinderVolume = M_PI * pow(radius, 2) * height;
    printf("Volume of the cylinder: %.2f cubic units\n", cylinderVolume);

    return 0;
}

/*
3. Write a program to convert Celsius (Centigrade degrees temperature to 
Fahrenheit).
*/
#include <stdio.h>

int main() {
    double celsius;

    // Prompt the user for the temperature in Celsius
    printf("Enter the temperature in Celsius: ");
    scanf("%lf", &celsius);

    // Convert to Fahrenheit
    double fahrenheit = (9.0 / 5.0) * celsius + 32.0;

    // Print the result
    printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);

    return 0;
}

/*
4. Write a program to calculate simple interest for a set of values representing      
principal, number of years and rate of interest. 
*/
#include <stdio.h>

int main() {
    double principal, rate, time;

    // Prompt the user for input
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the number of years: ");
    scanf("%lf", &time);

    // Calculate the simple interest
    double interest = (principal * rate * time) / 100.0;

    // Print the result
    printf("Simple Interest: %.2f\n", interest);

    return 0;
}
