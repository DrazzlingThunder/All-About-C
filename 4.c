//int	2 or 4	|| -32,768 to 32,767 (2 bytes) ||	Integer (whole numbers)
//float	4||	±3.4E-38 to ±3.4E+38	||Floating-point numbers (single precision)
//double	8||	±1.7E-308 to ±1.7E+308	||Double-precision floating-point numbers
//char	1	|| -128 to 127 or 0 to 255||	Single character or small integer
//void	0	||N/A	||Used for functions with no return value 

#include <stdio.h>

int main() {
    int a = 10;             // Integer type
    float b = 3.14;         // Floating-point type
    char c = 'A';           // Character type
    double d = 2.7182818;   // Double type
    unsigned int e = 100;   // Unsigned integer
    short int f = -32768;   // Short integer
    long int g = 123456789; // Long integer

    printf("int: %d\n", a);
    printf("float: %.2f\n", b);
    printf("char: %c\n", c);
    printf("double: %.8f\n", d);
    printf("unsigned int: %u\n", e);
    printf("short int: %d\n", f);
    printf("long int: %ld\n", g);

    return 0;
}
/*
Output
int: 10
float: 3.14
char: A
double: 2.71828180
unsigned int: 100
short int: -32768
long int: 123456789
*/
