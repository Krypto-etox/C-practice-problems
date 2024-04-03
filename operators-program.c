#include <stdio.h>

int main() {
    int a, b;
    char op;
    
    printf("Values: ");
    scanf("%d %d", &a, &b);

    // Consume the newline character left in the input buffer
    getchar();

    printf("Operator: ");
    scanf("%c", &op);

    switch (op) {
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d / %d = %d\n", a, b, (int)(a / b));
            } else {
                printf("Division is not possible! Divide by zero error\n");
            }
            break;
        case '%':
            if (b != 0) {
                printf("%d %% %d = %d\n", a, b, a % b);
            } else {
                printf("Modulo division is not possible! Divide by zero error\n");
            }
            break;
        default:
            printf("Invalid Operator\n");
            break;
    }

    return 0;
}
