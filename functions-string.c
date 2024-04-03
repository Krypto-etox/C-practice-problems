#include <stdio.h>

void decimalToBinary(int d);

int main() {
    int decimal;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    printf("Binary equivalent: ");
    decimalToBinary(decimal);
    
    return 0;
}

void decimalToBinary(int d) {
    int binary[32]; // Assuming 32-bit binary representation
    int i = 0;
    
    while (d > 0) {
        binary[i] = d % 2;
        d /= 2;
        i++;
    }
    
    // Printing binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    
    printf("\n");
}


void decimalToHex(int d);

int main() {
    int decimal;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    printf("Hexadecimal equivalent: ");
    decimalToHex(decimal);
    
    return 0;
}

void decimalToHex(int d) {
    int remainder, quotient;
    int i = 1, j, temp;
    char hexadecimal[100];
    
    quotient = d;
    
    while (quotient != 0) {
        temp = quotient % 16;
        
        // To convert integer into character
        if (temp < 10)
            temp += 48;
        else
            temp += 55;
        
        hexadecimal[i++] = temp;
        quotient /= 16;
    }
    
    printf("0x");
    for (j = i - 1; j > 0; j--)
        printf("%c", hexadecimal[j]);
    printf("\n");
}
