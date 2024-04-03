#include <stdio.h>

int main() {
    int n, i, carry = 1;

    printf("Enter the number of bits: ");
    scanf("%d", &n);

    int binary[n];

    printf("Enter the binary number (space separated): ");
    for (i = 0; i < n; i++) {
        scanf("%d", &binary[i]);
    }

    // Perform 1's complement (flip bits)
    for (i = 0; i < n; i++) {
        binary[i] = (binary[i] == 0) ? 1 : 0;
    }

    // Add 1 to the 1's complement to get 2's complement
    for (i = n - 1; i >= 0; i--) {
        if (binary[i] + carry == 2) {
            binary[i] = 0;
        } else {
            binary[i] = binary[i] + carry;
            carry = 0;
            break;
        }
    }

    // Display the 2's complement
    printf("2's complement: ");
    for (i = 0; i < n; i++) {
        printf("%d ", binary[i]);
    }

    return 0;
}
