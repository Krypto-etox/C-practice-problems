// Write a C program, for the functions float sine(int n, float x), and float cosine(int n, int x), where n is the number of terms of sine series and x is degrees. i have already written the main function to take input these variable just return the output result of the above sine and cosine functions.


#include <stdio.h>

float sine(int n, float x);
float cosine(int n, float x);
int factorial(int n);

int main() {
    int n;
    float x;
    
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
    printf("Enter the angle in degrees: ");
    scanf("%f", &x);
    
    // Convert degrees to radians
    x = x * 3.14159 / 180.0;
    
    printf("Sine: %.4f\n", sine(n, x));
    printf("Cosine: %.4f\n", cosine(n, x));
    
    return 0;
}

float sine(int n, float x) {
    float result = 0.0;
    int i;
    for (i = 0; i < n; ++i) {
        result += (i % 2 == 0 ? 1 : -1) * power(x, 2 * i + 1) / factorial(2 * i + 1);
    }
    return result;
}

float cosine(int n, float x) {
    float result = 0.0;
    int i;
    for (i = 0; i < n; ++i) {
        result += (i % 2 == 0 ? 1 : -1) * power(x, 2 * i) / factorial(2 * i);
    }
    return result;
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

float power(float base, int exponent) {
    float result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}




// Method 2

#include <stdio.h>
#include <math.h>
int decimalToBinary(int d){
    int bin = 0, rem, base = 1;
    while(d > 0){
        rem = d % 2;
        bin += rem * base;
        d /= 2;
        base *= 10;
    }
    printf("%d", bin);
}
int decimalToHex(int d){
    char hex[20];
    int index = 0;
    while(d != 0){
        int rem = d % 16;
        if(rem < 10){
            hex[index++] = rem + '0';
        } else{
            hex[index++] = rem - 10 + 'A';
        }
        d /= 16;
    }
    if(index == 0){
        hex[index++] = '0';
    }
    hex[index] = '\0';
    for(int i = index - 1; i >= 0; i--){
        printf("%c", hex[i]);
    }
}

void main(){
    int d;
    printf("Enter a positive decimal number : ");
    scanf("%d", &d);
    printf("The binary number of decimal %d is : ");
    decimalToBinary(d);
    printf("\n");
    printf("The hex number of decimal %d is : ", d);
    decimalToHex(d);
    printf("\n");
}


// Conversion modified

#include <stdio.h>
#include <math.h>

int decimalToBinary(int d) {
    int bin = 0, rem, base = 1;
    while (d > 0) {
        rem = d % 2;
        bin += rem * base;
        d /= 2;
        base *= 10;
    }
    printf("%d", bin);
}

int decimalToHex(int d) {
    char hex[20];
    int index = 0;
    while (d != 0) {
        int rem = d % 16;
        if (rem < 10) {
            hex[index++] = rem + '0';
        } else {
            hex[index++] = rem - 10 + 'A';
        }
        d /= 16;
    }
    if (index == 0) {
        hex[index++] = '0';
    }
    hex[index] = '\0';
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hex[i]);
    }
}

int main() {
    int d;
    printf("Enter a positive decimal number: ");
    scanf("%d", &d);
    printf("The binary number of decimal %d is: ", d);
    decimalToBinary(d);
    printf("\n");
    printf("The hex number of decimal %d is: ", d);
    decimalToHex(d);
    printf("\n");
    return 0;
}




// Decimal to hex try

#include <stdio.h>

char to_hex(int num) {
  // Convert decimal digit (0-9) to its corresponding hexadecimal character (0-F)
  return (num < 10) ? num + '0' : num - 10 + 'A';
}

void dec_to_hex(int decimal_num, char *hex_string) {
  // Handle negative numbers (convert to positive and prefix with '-')
  int is_negative = 0;
  if (decimal_num < 0) {
    is_negative = 1;
    decimal_num = -decimal_num;
  }

  int i = 0;
  while (decimal_num != 0) {
    int remainder = decimal_num % 16;
    hex_string[i++] = to_hex(remainder);
    decimal_num /= 16;
  }

  // Append null terminator for string
  hex_string[i] = '\0';

  // Reverse the hex string (optional, can be printed directly in the loop)
  if (is_negative) {
    hex_string[i++] = '-';
  }
  for (int j = 0; j < i / 2; j++) {
    char temp = hex_string[j];
    hex_string[j] = hex_string[i - j - 1];
    hex_string[i - j - 1] = temp;
  }
}

int main() {
  int decimal_num;
  char hex_string[100];

  printf("Enter a decimal number: ");
  scanf("%d", &decimal_num);

  dec_to_hex(decimal_num, hex_string);

  printf("The hexadecimal equivalent: %s\n", hex_string);

  return 0;
}




// Try 4
#include <stdio.h>
#include <string.h>

char *decimalToHex(int decimal_num) {
    // Handle negative numbers (convert to positive and prefix with '-')
    int is_negative = 0;
    if (decimal_num < 0) {
        is_negative = 1;
        decimal_num = -decimal_num;
    }

    // Dynamically allocate a string to hold the hex digits
    char *hex_string = malloc(sizeof(char) * (14 + is_negative));  // Max 13 hex digits + '-' + '\0'
    if (hex_string == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    int i = 0;
    while (decimal_num != 0) {
        int remainder = decimal_num % 16;
        hex_string[i++] = to_hex(remainder);
        decimal_num /= 16;
    }

    // Append null terminator
    hex_string[i] = '\0';

    // Reverse the hex string
    if (is_negative) {
        hex_string[i++] = '-';
    }
    for (int j = 0; j < i / 2; j++) {
        char temp = hex_string[j];
        hex_string[j] = hex_string[i - j - 1];
        hex_string[i - j - 1] = temp;
    }

    return hex_string;
}

char to_hex(int num) {
    // Convert decimal digit (0-9) to its corresponding hexadecimal character (0-F)
    return (num < 10) ? num + '0' : num - 10 + 'A';
}

// int main() {
//     int decimal_num;

//     printf("Enter a decimal number: ");
//     scanf("%d", &decimal_num);

//     // char *hex_string = decimalToHex(decimal_num);

//     if (hex_string != NULL) {
//         printf("The hexadecimal equivalent: %s\n", hex_string);
//         free(hex_string);  // Free the allocated memory
//     }

//     return 0;
// }




// Try 5

#include <stdio.h>

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


// Try 6

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
