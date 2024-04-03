#include <stdio.h>
void main(){
    int a[10], i, n;
    printf("Enter how many values you want to read : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("Enter the value of a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("The array elements are : ");
    for (i = 0; i < n; i++){
        printf(" %d ", a[i]);
    }
}
