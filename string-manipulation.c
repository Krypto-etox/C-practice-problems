/*
Write a C program to implement the string manipulation operations by using string library functions.
Enter two strings : Ram Laxman
The length of Ram : 3
The copied string of Ram : Ram
Ram is greater than Laxman
The concatenated string : RamLaxman
*/

#include <stdio.h>
#include <string.h>
int main(){
    char a[100], b[100], c[100];
    int i, j, n;
    printf("Enter tow strings : ");
    scanf("%s", a);
    scanf("%s", b);

    // Function 1 Length of a
    printf("The length of %s : %d\n", a, strlen(a));

    // Function 2 Copying a
    printf("The copied string of %s : %s\n", a, strcpy(c, a));

    // Function 3 Size comparison based on alphabetical order
    if(a[0] > b[0]){
        printf("%s is greater than %s\n", a, b);
    } else if(a[0] < b[0]){
        printf("%s is less than %s\n", a, b);
    } else if(a[0] == b[0] && strlen(a) == strlen(b)){
        printf("Both strings are equal\n");
    }

    // Function 5 Catenation
    printf("The concatenated string : %s\n", strcat(a, b));
    return 0;
}


// Alternate method for Code tantra

#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isdigit function

int main() {
    char a[100], b[100], c[100];
    int i, j, n;

    printf("Enter two strings: ");
    scanf("%[^\n]", a); // Read first string including spaces
    getchar(); // Consume newline character left in input buffer
    scanf("%[^\n]", b); // Read second string including spaces

    // Function 1: Length of a
    printf("The length of %s : %d\n", a, strlen(a));

    // Function 2: Copying a
    printf("The copied string of %s : %s\n", a, strcpy(c, a));

    // Function 3: Size comparison based on alphabetical order or digit comparison
    int allDigitsEqual = 1;
    for (i = 0; a[i] && b[i]; i++) {
        if (!isdigit(a[i]) || !isdigit(b[i])) {
            allDigitsEqual = 0;
            break;
        }
        if (a[i] != b[i]) {
            allDigitsEqual = 0;
            break;
        }
    }

    if (allDigitsEqual) {
        printf("Both strings have equal digits\n");
    } else {
        if (strcmp(a, b) > 0) {
            printf("%s is greater than %s\n", a, b);
        } else if (strcmp(a, b) < 0) {
            printf("%s is less than %s\n", a, b);
        } else {
            printf("Both strings are equal\n");
        }
    }

    // Function 5: Concatenation
    printf("The concatenated string : %s\n", strcat(a, b));

    return 0;
}
