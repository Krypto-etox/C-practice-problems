/*Write a program to check whether a given number can be expressed as sum of two prime numbers or not.

At the time of execution, the program should print the message on the console as:
Enter a positive integer : 
For example, if the user gives the input as:
Enter a positive integer : 34
then the program should print the result as:
34 = 3 + 31
34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
Similarly, if the given input number is 23 then the output should be
23 cannot be expressed as the sum of two prime numbers
*/

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num);

int main() {
    int number, i;
    bool flag = false;

    // Input number from user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number can be expressed as the sum of two prime numbers
    for (i = 2; i <= number / 2; ++i) {
        if (isPrime(i)) {
            if (isPrime(number - i)) {
                // If both i and number-i are prime, the number can be expressed as their sum
                printf("%d can be expressed as the sum of %d and %d\n", number, i, number - i);
                flag = true;
            }
        }
    }

    if (!flag)
        printf("%d cannot be expressed as the sum of two prime numbers.\n", number);

    return 0;
}

// Function to check if a number is prime or not
bool isPrime(int num) {
    int i;

    if (num <= 1)
        return false;

    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0)
            return false;
    }

    return true;
}




// Modified

#include <stdio.h>
#include <stdbool.h>

bool checkPrime(int num);

int main() {
    int number, i;
    bool flag = false;

    // Input number from user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number can be expressed as the sum of two prime numbers
    printf("Result:\n");
    for (i = 2; i <= number / 2; ++i) {
        if (checkPrime(i) && checkPrime(number - i)) {
            printf("%d = %d + %d\n", number, i, number - i);
            flag = true;
        }
    }

    if (!flag)
        printf("%d cannot be expressed as the sum of two prime numbers.\n", number);

    return 0;
}

// Function to check if a number is prime or not
bool checkPrime(int num) {
    int i;

    if (num <= 1)
        return false;

    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0)
            return false;
    }

    return true;
}
