#include <stdio.h>
int main(){
    int a[10], i, n;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter array of elements : ");
    for (i = 0; i < n; i++){
        scanf("%d", a + i);
        // scanf("%d", &a[i]);   method 2

    }
    printf("The given integer array elements : ");
    for (i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}