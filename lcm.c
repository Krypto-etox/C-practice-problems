#include <stdio.h>

int main() {
    int a, b, lcm = 1, i = 2;

    printf("Enter two integer numbers: ");
    scanf("%d %d", &a, &b);

    while (a != 1 || b != 1) {
        if (a % i == 0 || b % i == 0) {
            lcm *= i;

            if (a % i == 0) {
                a /= i;
            }

            if (b % i == 0) {
                b /= i;
            }
        } else {
            i++;
        }
    }

    printf("LCM of %d and %d: %d\n", a, b, lcm);

    return 0;
}
