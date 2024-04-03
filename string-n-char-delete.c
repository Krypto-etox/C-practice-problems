/*
Write a C program to delete n characters from a given position in a string
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int position, n, i, len;

    // Input the string
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    // Input the position from where deletion should start
    printf("Enter the position to start deletion: ");
    scanf("%d", &position);

    // Input the number of characters to delete
    printf("Enter the number of characters to delete: ");
    scanf("%d", &n);

    // Calculate the length of the string
    len = strlen(str);

    // Perform deletion
    for (i = position - 1; i < len - n; i++) {
        str[i] = str[i + n];
    }
    str[i] = '\0';

    // Print the updated string
    printf("String after deletion: %s\n", str);

    return 0;
}


// Modified 2

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int position, n, i, len;

    // Input the string
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    // Input the position from where deletion should start
    printf("Enter the position to start deletion (starting from 0): ");
    scanf("%d", &position);

    // Input the number of characters to delete
    printf("Enter the number of characters to delete: ");
    scanf("%d", &n);

    // Calculate the length of the string
    len = strlen(str);

    // Perform deletion
    for (i = position; i <= len - n; i++) {
        str[i] = str[i + n];
    }
    str[i] = '\0';

    // Print the updated string
    printf("String after deletion: %s\n", str);

    return 0;
}


// Method 3 Test 3

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int pos, n, i, len;

    printf("String: ");
    scanf("%[^\n]", str);
    
    printf("Position: ");
    scanf("%d", &pos);

    printf("No of characters you want to delete: ");
    scanf("%d", &n);
    if(pos <= 0){
        printf("Deletion is not performed\n");
        return 0;
    }
    pos += 1;
    len = strlen(str);
    for(i = pos - 1; i < len - n; i++){
        str[i] = str[i + n];
    }
    
    str[i] = '\0';

    printf("After deletion: %s\n", str);

    return 0;
}


// Method 4 Test 4

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int pos, n, i, len;

    printf("String: ");
    scanf("%[^\n]", str);
    while (getchar() != '\n');

    printf("Position: ");
    scanf("%d", &pos);

    printf("No of characters you want to delete: ");
    scanf("%d", &n);

    if (pos <= 0 && n <= n) {
        printf("Deletion is not performed\n");
        return 0;
    }

    len = strlen(str);
    for (i = pos; i < len - n; i++) {
        str[i] = str[i + n];
    }

    str[i] = '\0';

    printf("After deletion: %s\n", str);

    return 0;
}
