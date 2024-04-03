#include <stdio.h>

int main() {
    int decimal, binary = 0, remainder, base = 1;

    // Input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Convert decimal to binary
    while (decimal > 0) {
        remainder = decimal % 2;
        binary = binary + remainder * base;
        decimal = decimal / 2;
        base = base * 10;
    }

    // Print the binary representation
    printf("Binary representation: %d\n", binary);

    return 0;
}
