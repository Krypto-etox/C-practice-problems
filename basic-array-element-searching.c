/*
Write a C program which will read integers from standard input and store them into an array (with max size 10). Let the program then read another integer value from the standard input to search it's occurrence in the array of elements.
*/

#include <stdio.h>
int main(){
    int arr[10], i, n, value;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter array elements : ");
    for (i = 0; i < n; i++){
        scanf("%d", &arr[10]);
    }
    printf("Enter an integer value : ");
    scanf("%d", &value);
    printf("The indexes of the array elements matching the given value are : ");
    for (i = 0; i < n; i++){
        if (value == arr[i]){
            printf("%d", i);
        }
    }
    return 0;
}