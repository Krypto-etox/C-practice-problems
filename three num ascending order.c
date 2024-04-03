#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Taking input from the user
    printf("Enter three integer: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // printf("Enter the second integer: ");
    // scanf("%d", &num2);

    // printf("Enter the third integer: ");
    // scanf("%d", &num3);

    // Sorting the numbers in ascending order using if-else constructs
    if (num1 <= num2 && num1 <= num3) {
        if (num2 <= num3) {
            printf("The numbers in ascending order are: %d, %d, %d\n", num1, num2, num3);
        } else {
            printf("The numbers in ascending order are: %d, %d, %d\n", num1, num3, num2);
        }
    } else if (num2 <= num1 && num2 <= num3) {
        if (num1 <= num3) {
            printf("The numbers in ascending order are: %d, %d, %d\n", num2, num1, num3);
        } else {
            printf("The numbers in ascending order are: %d, %d, %d\n", num2, num3, num1);
        }
    } else {
        if (num1 <= num2) {
            printf("The numbers in ascending order are: %d, %d, %d\n", num3, num1, num2);
        } else {
            printf("The numbers in ascending order are: %d, %d, %d\n", num3, num2, num1);
        }
    }

    return 0;
}
