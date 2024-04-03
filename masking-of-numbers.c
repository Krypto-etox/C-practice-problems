#include <stdio.h>

int main() {
    int number;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("Masked Number: 0\n");
        return 0;
    }

    // Find the sign of the number
    // int sign = (number < 0) ? -1 : 1;

    // Convert the number to its absolute value
    // number = abs(number);

    // Find the number of digits in the number
    int temp = number;
    int numDigits = 0;
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }

    // Mask the most significant digit using a loop
    int maskedNumber = 0;
    for (int i = 0; i < numDigits - 1; i++) {
        maskedNumber = maskedNumber * 10 + number % 10;
        number /= 10;
    }

    // Restore the sign of the original number
    // maskedNumber = maskedNumber * sign;

    // Print the masked number
    printf("Masked Number: %d\n", maskedNumber);

    return 0;
}

