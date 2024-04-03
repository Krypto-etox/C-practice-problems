#include <stdio.h>
int main(){
    int a[20], i, n, posum = 0, nesum = 0;
    printf("Array size: ");
    scanf("%d", &n);
    printf("Elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if (a[i] < 0){
            nesum += (-a[i]);
        } else{
            posum += a[i];
        }
    }
    printf("Sum of positive elements = %d\nSum of negative elements = %d\n", posum, nesum);
    return 0;
}