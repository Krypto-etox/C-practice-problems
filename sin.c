#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    int n, an, i, j;
    float degree, elements, result = 0, radian = 0, fact;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    printf("Enter degrees : ");
    scanf("%f", &degree);

    // Convert degrees to radians
    radian = degree * (PI / 180.0);

    an = 1 + ((n - 1) * 2);

    for (i = 1; i <= an; i = i + 2) {
        // Reset factorial for each term
        fact = 1;

        // Logic for function
        for (j = 1; j <= i; j++) {
            fact *= j;
        }

        elements = (pow(-1, (i - 1) / 2) * pow(radian, i)) / fact;
        result += elements;
    }

    printf("The sine value sin(%f) = %f\n", degree, result);
    printf("The sine value using built-in sin(%f) = %f\n", degree, sin(radian));

    return 0;
}




// Test Case
#include <stdio.h>
#include <math.h>

int main(){
    int op, n;
    float x;
    printf("Enter n terms: ");
    scanf("%d", &n);
    printf("Enter degree: ");
    scanf("%f", &x);
    x = (x * 3.14) / 180;
    printf("Sine value = %f\n", sine(n,x));
    printf("cosine value = %f\n", cosine(n,x));
    printf("Tangent value = %f\n", sine(n,x) / cosine(n,x));
}
float sine(int n, float x){
    return sin(x);
}
float cosine(int n, float x){
    return cos(x);
}