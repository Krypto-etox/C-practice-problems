#include <stdio.h>
#include <stdlib.h>

void decimalToHex(int decimal) {
    char hex[20];
    int index = 0;

    while (decimal != 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hex[index++] = remainder + '0';
        } else {
            hex[index++] = remainder - 10 + 'A';
        }
        decimal /= 16;
    }

    if (index == 0) {
        hex[index++] = '0';
    }

    hex[index] = '\0';

    printf("Hexadecimal equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hex[i]);
    }
    printf("\n");
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToHex(decimal);

    return 0;
}
