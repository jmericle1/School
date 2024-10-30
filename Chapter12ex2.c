/* This program asks for a last name, and if the user has a
   last name that starts with a letter between P and Q, 
   they will be sent to a special room for their tickets. */

#include <stdio.h>

int main() {
    // Set up an array for the last name and then get it from the user
    char name[25];

    printf("What is your last name? ");
    printf("(Please capitalize the first letter!)\n");
    scanf("%s", name); // For a string array, you don't need the &

    // Check if the first letter of the last name is between P and S
    if ((name[0] >= 'P') && (name[0] <= 'S')) {
        printf("You must go to room 2432 for your tickets.\n");
    } else {
        printf("You can get your tickets here.\n");
    }

    return 0;
}
