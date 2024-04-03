#include <stdio.h>

int main() {
    int a, b, small, i;
    printf("Enter two integer numbers: ");
    scanf("%d %d", &a, &b);

    // Find the smaller of the two numbers
    if (a >= b) {
        small = b;
    } else {
        small = a;
    }

    // Find the GCD using a loop
    for (i = small; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            printf("GCD of %d and %d: %d\n", a, b, i);
            // Break out of the loop once GCD is found
            break;
        }
    }

    return 0;
}
