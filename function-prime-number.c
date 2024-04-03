#include <stdio.h>
#include <stdbool.h>

bool checkPrime(int num);

int main() {
    int start, end, i;

    // Input starting and ending points of the interval
    printf("Enter the starting point of the interval: ");
    scanf("%d", &start);
    printf("Enter the ending point of the interval: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: \n", start, end);

    // Check prime numbers within the interval
    for (i = start; i <= end; ++i) {
        if (checkPrime(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}

// Function to check if a number is prime or not
bool checkPrime(int num) {
    int i;

    if (num <= 1)
        return false;

    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0)
            return false;
    }

    return true;
}



// Code Tantra Method

#include <stdio.h>
#include <stdbool.h>
void main(){
    int lower, upper, i;
    printf("Enter lower limit and upper limit : ");
    scanf("%d %d", &lower, &upper);
    printf("The prime numbers between %d and %d = ", lower, upper);
    for(i = lower; i <= upper; i++){
        if(prime(i) == 0){
            printf("%d", i);
        }
    }
}
bool prime(int num){
    int i;
    if(num <= 1)
        return false;
    for(i = 2; i <= num / 2; i++){
        if(num % i == 0){
            return true;
        }
    }
    return false;
}