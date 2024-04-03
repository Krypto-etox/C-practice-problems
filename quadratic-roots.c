#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, det, r1, r2;
    printf("Enter coefficients a, b and c : ");
    scanf("%f %f %f", &a, &b, &c);
    det = (b * b) - (4 * a * c);
    if (a == 0 && b == 0 && c == 0){
        printf("Invalid coeffiecients\n");
        printf("Enter valid inputs\n");
        return 0;
    }
    if (a == 0){
        printf("Liner equation\n");
        printf("Root = %f\n", (-c) / b);
        return 0;
    }

    if (det > 0){
        r1 = (-b + sqrt(det)) / (2 * a);
        r2 = (-b + sqrt(det)) / (2 * a);
        printf("The roots are real and distinct\n");
        printf("root1 = %f and root2 = %f\n", r1, r2);
    } else if(det == 0){
        r1 = -b / (2 * a);
        printf("The roots are real and equal\n");
        printf("root1 = root2 = %f\n", r1);
    } else{
        float real = -b / (2 * a);
        float imag = sqrt(-det) / (2 * a);
        printf("The roots are real and imaginary\n");
        printf("root1 = %f+i%f\n", real, imag);
        printf("root2 = %f-i%f\n", real, imag);
        
    }

    return 0;
}
