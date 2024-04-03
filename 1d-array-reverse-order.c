#include <stdio.h>
int main(){
    int arr[10], i, n;
    printf("Enter size of the arra : ");
    scanf("%d", &n);
    printf("Enter array elements : ");
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Array elements in reverse order : ");
    for (i = n - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}