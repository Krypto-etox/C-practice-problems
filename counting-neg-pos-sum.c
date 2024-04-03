/*
Write a C program that reads an unspecified number of integers, determine how many positive, negative values have been read. compute the total and average of input values, not counting zeroes. your program ends with the input 0. Display the average as a floating point number.
Sample Input and output:
Enter the values up to zero : 12 -34 13 -24 99 0
Total number of positive values : 3
Total number of negative values : 2
Sum of given numbers : 66
Average of given numbers : 13.200000
*/

#include <stdio.h>

int main() {
    int pc = 0, nc = 0;
    float sum = 0.0, total = 0.0, num;

    printf("Enter the values up to zero: ");

    while (1) {
        scanf("%f", &num);

        if (num == 0) {
            break;
        }

        if (num > 0) {
            pc++;
        } else if (num < 0) {
            nc++;
        }

        sum += num;
        total++;
    }

    float average = (total != 0) ? sum / total : 0;

    printf("Total number of positive values: %d\n", pc);
    printf("Total number of negative values: %d\n", nc);
    printf("Sum of given numbers: %.6f\n", sum);
    printf("Average of given numbers: %.6f\n", average);

    return 0;
}
