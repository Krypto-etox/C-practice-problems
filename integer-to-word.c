#include <stdio.h>

int main() {
    int num, digit, reversedNum = 0, count = 0;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Zero\n");
        return 0;
    }

    // Extract and count digits
    while (num != 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
        count++;
    }

    // Print the respective number in words
    while (reversedNum != 0) {
        digit = reversedNum % 10;
        switch (digit) {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
            default:
                printf("Not a valid digit ");
        }

        reversedNum /= 10;
    }

    printf("\n");

    return 0;
}
