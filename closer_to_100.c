// Shortcut method
#include <stdio.h>
#include <stdlib.h> // for abs function

int main() {
    int num1, num2;

    // Taking input from the user
    printf("Enter two integer: ");
    scanf("%d %d", &num1, &num2);

    // Finding the number closer to one hundred
    int diff1 = abs(100 - num1);
    int diff2 = abs(100 - num2);

    if (diff1 < diff2) {
        printf("The number closer to one hundred is: %d\n", num1);
    } else if (diff2 < diff1) {
        printf("The number closer to one hundred is: %d\n", num2);
    } else {
        printf("Both numbers are equidistant from one hundred.\n");
    }

    return 0;
}

// method 2 IF ELSE CONSTRUCT

#include <stdio.h>

int main() {
    int num1, num2;

    // Taking input from the user
    printf("Enter two integer: ");
    scanf("%d %d", &num1, &num2);

    // Finding the number closer to one hundred without abs() function
    int diff1 = 100 - num1;
    int diff2 = 100 - num2;

    // Using if-else constructs to determine the result
    if (diff1 < 0) {
        diff1 = -diff1;  // Convert negative difference to positive
    }

    if (diff2 < 0) {
        diff2 = -diff2;  // Convert negative difference to positive
    }

    if (diff1 < diff2) {
        printf("The number closer to one hundred is: %d\n", num1);
    } else if (diff2 < diff1) {
        printf("The number closer to one hundred is: %d\n", num2);
    } else {
        printf("Both numbers are equidistant from one hundred.\n");
    }

    return 0;
}


// Method 3 using long if else construct;

#include <stdio.h>
int main(){
    int a, b;
    printf("Enter two integer values : ");
    scanf("%d %d", &a, &b);

    dif1 = 100 - a;
    dif2 = 100 - b;

    if(dif1 >= 0 && dif2 >= 0){
        if(dif1 < dif2){
            printf("%d\n",a);
        }else{
            printf("%d\n",b);
        }
    }else if(dif1 <= 0 && dif2 <= 0){
        if(dif1 < dif2){
            printf("%d\n",b);
        }else{
            printf("%d\n",a);
        }
    }else if(dif1 >= 0 && dif2 <= 0){
        if(dif1 < (-dif2)){
            printf("%d\n",a);
        }else{
            printf("%d\n",b);
        }
    }else{
        if((-dif1) < dif2){
            printf("%d\n",a);
        }else{
            printf("%d\n",b);
        }
    }
    return 0;
}