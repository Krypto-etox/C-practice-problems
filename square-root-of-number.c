#include <stdio.h>

int main() {
    float num;

    // Input from the user
    printf("Enter a number: ");
    scanf("%f", &num);

    if (num < 0) {
        printf("Square root is undefined for negative numbers.\n");
    } else {
        // Newton-Raphson method to calculate square root
        float x = num;  // Initial guess
        float epsilon = 0.00001;

        while ((x * x - num) > epsilon) {
            x = (x + num / x) / 2.0;
        }

        // Print the result
        printf("Square root of %.2f = %.5f\n", num, x);
    }

    return 0;
}
