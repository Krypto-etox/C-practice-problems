#include <stdio.h>

int main() {
    char a[10];
    int i, n;

    printf("Enter size of the array : ");
    scanf("%d", &n);
    // Consume the newline character left in the input buffer from the previous scanf
    getchar();

    printf("Enter array elements : ");
    for(i = 0; i < n; i++) {
        scanf(" %c", a + i);
    }

    printf("The given character array elements : ");
    for (i = 0; i < n; i++) {
        printf("%c ", a[i]);
    }

    printf("\n");

    return 0;
}
