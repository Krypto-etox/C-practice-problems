/*
Write a program to find the palindrome numbers between given intervals.
[Hint: Palindrome number means the reverse of a given number is equal to the given number].

At the time of execution, the program should print the message on the console as:
Enter lower limit and upper limit : 
For example, if the user gives the input as:
Enter lower limit and upper limit : 100 150
then the program should print the result as:
The palindrome numbers between 100 and 150
101 111 121 131 141
*/

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num);
int reverse(int num);
void findPalindromes(int start, int end);

int main() {
    int start, end;

    // Input starting and ending points of the interval
    printf("Enter the starting point of the interval: ");
    scanf("%d", &start);
    printf("Enter the ending point of the interval: ");
    scanf("%d", &end);

    printf("Palindrome numbers between %d and %d are: \n", start, end);

    // Call function to find palindrome numbers within the interval
    findPalindromes(start, end);

    return 0;
}

// Function to check if a number is palindrome or not
bool isPalindrome(int num) {
    return num == reverse(num);
}

// Function to reverse a number
int reverse(int num) {
    int reversedNum = 0;
    
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    
    return reversedNum;
}

// Function to find palindrome numbers within the interval
void findPalindromes(int start, int end) {
    int i;

    for (i = start; i <= end; ++i) {
        if (isPalindrome(i))
            printf("%d ", i);
    }

    printf("\n");
}

// ============================================================
// Functions CodeTantra Code Q14

#include <stdio.h>
#include <stdbool.h>
void main(){
    int lower, upper, i;
    printf("Enter lower limit and upper limit : ");
    scanf("%d %d", &lower, &upper);
    printf("The palindrome numbers between %d and %d\n", lower, upper);
    for(i = lower; i <= upper; i++){
        if(i == reverse(i)){
            printf("%d ", i);
        }
    }
}
bool ispal(int num){
    return num == reverse(num);
}
int reverse(int num){
    int reversenum = 0;
    while(num != 0){
        int digit = num % 10;
        reversenum = reversenum * 10 + digit;
        num /= 10;
    }
    return reversenum;
}