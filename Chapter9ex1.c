/* This is a sample program that demonstrates math
   operators, and the different types of division. */

#include <stdio.h>

int main() 
{
    // Two sets of equivalent variables, with one set
    // floating-point and the other integer
    float a = 19.0;
    float b = 5.0;
    float floatAnswer;
    int x = 19;
    int y = 5;
    int intAnswer;

    // Using two float variables creates an answer of 3.8
    floatAnswer = a / b;
    printf("%.1f divided by %.1f equals %.1f\n", a, b, floatAnswer);

    // Integer division, this will produce 3.0 as a float
    floatAnswer = (float)x / y; // Cast x to float for correct division
    printf("%d divided by %d equals %.1f\n", x, y, floatAnswer);

    // This will also be 3, as it truncates and doesn't round up
    intAnswer = (int)(a / b); // Cast to int to get the integer result
    printf("%.1f divided by %.1f equals %d\n", a, b, intAnswer);

    intAnswer = x % y; // This calculates the remainder
    printf("%d modulus (i.e. remainder of) %d equals %d\n", x, y, intAnswer);

    return 0;
	}
