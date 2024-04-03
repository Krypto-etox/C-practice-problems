#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, result = 0, n = 0;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Count the number of digits in the input number
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    // Calculate the result
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if the input number is an Armstrong number
    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}

// #======================================================
#include <stdio.h>
#include <math.h>

int main() {
    int number, temp, remainder, i, power, digits = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;

    // Count the number of digits
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = number;

    // Calculate the sum of digits raised to the power of digits
    while (temp != 0) {
        remainder = temp % 10;
        power = 1;
        for (i = 0; i < digits; i++) {
            power *= remainder;
        }
        sum += power;
        temp /= 10;
    }

    // Check if the number is an Armstrong number
    if (sum == number) {
        printf("The given number %d is an Armstrong number\n", number);
    } else {
        printf("The given number %d is not an Armstrong number\n", number);
    }

    return 0;
}



// CodeTantra modified code:

#include <stdio.h>

void main() {
    int number, temp, remainder, i, power, digits, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    temp = number;
    digits = 0;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = number;
    while (temp != 0) {
        remainder = temp % 10;
        i = 1;
        power = 1;

        while (i <= digits) {
            power *= remainder;
            i++;
        }
        
        sum += power;
        temp /= 10;
    }
    temp = number;

    if (sum == number) {
        printf("The given number %d is an Armstrong number\n", temp);
    } else {
        printf("The given number %d is not an Armstrong number\n", temp);
    }
}
