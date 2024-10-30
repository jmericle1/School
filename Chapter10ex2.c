/* This program also increases a counter from 1 to 5,
   printing updates and then counts it back down to 1.
   However, it uses compound operators. */

#include <stdio.h>

int main() {
    int ctr = 0;

    // Increase counter from 1 to 5
    ctr += 1; // increases counter to 1
    printf("Counter is at %d.\n", ctr);

    ctr += 1; // increases counter to 2
    printf("Counter is at %d.\n", ctr);

    printf("Counter is at %d.\n", ctr += 1); // increases counter to 3

    ctr += 1; // increases counter to 4
    printf("Counter is at %d.\n", ctr);

    printf("Counter is at %d.\n", ctr += 1); // increases counter to 5

    // Decrease counter back to 1
    ctr -= 1; // decreases counter to 4
    printf("Counter is at %d.\n", ctr);

    printf("Counter is at %d.\n", ctr -= 1); // decreases counter to 3
    printf("Counter is at %d.\n", ctr -= 1); // decreases counter to 2
    printf("Counter is at %d.\n", ctr -= 1); // decreases counter to 1

    return 0;
}
