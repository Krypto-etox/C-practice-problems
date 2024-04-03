//  Method 1.
#include <stdio.h>

void main() {
    int rem, n, i, j, sum = 0, temp, fact;

    printf("Enter a value: ");
    scanf("%d", &n);

    temp = n;

    for (temp = n; n > 0; n = n / 10) {
        rem = n % 10;
        fact = 1;

        for (i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        for (j = rem; j > 0; j--) {
            fact = fact * j;
        }

        sum = sum + fact;
    }

    if (sum == temp) {
        printf("The given number %d is a strong number\n", temp);
    } else {
        printf("The given number %d is not a strong number\n", temp);
    }
}


// Method 2:
#include <stdio.h>

void main() {
    int rem, n, i, sum = 0, temp, fact;

    printf("Enter a value: ");
    scanf("%d", &n);

    temp = n;

    for (; n > 0; n = n / 10) {
        rem = n % 10;
        fact = 1;

        for (i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
    }

    if (sum == temp) {
        printf("The given number %d is a strong number\n", temp);
    } else {
        printf("The given number %d is not a strong number\n", temp);
    }
}


#include <stdio.h>
void main(){
    int rem, n, i, sum = 0, temp, fact = 1;
    printf("Enter a value : ");
    scanf("%d", &n);
    for (temp = n; n > 0; n = n / 10){
        rem = n % 10;
        fact = 1;
        for ( i = 1; i <= rem  ; i++ ){
            fact = fact * i;
        }
        sum = sum + fact;
    }
    if (sum == temp){
        printf("The given number %d is a strong number\n", temp);
    } else{
        printf("The given number %d is not a strong number\n", temp);
    }
}