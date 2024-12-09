#include <stdio.h>

int main() {
    // Declare a variable to store the user's number
    double number, cubed;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Calculate the cube of the number
    cubed = number * number * number;

    // Print the result
    printf("The number cubed is: %.2lf\n", cubed);

    return 0;
}
