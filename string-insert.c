/*
Write a C program to insert a substring into a given main string from a given postion.
at the time of execution, the program should print the message on the console as: 

main string : 

For example, if the user gives the input as:
main string : Ganga Saraswathi

Next, the program should print the message on the console as:
sub string : 

if the user gives the input as:
sub string : and

Next, the program should print the message on the console as: 
postion:

if the user gives  input as:
position : 6

then the program should print the result as:
after insertion the main string  : Ganga andSaraswathi

Note: Do use the printf() funtion with a newline character(\n) at the end.

Expected Output: 

Main string: Ganga Saraswathi
Sub string: and
Position: 6
After insertion the main string: Ganga andSaraswathi
*/
#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], c[200];
    int pos, i, j;

    printf("Enter the main string: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter the substring to insert: ");
    fgets(b, sizeof(b), stdin);

    printf("Enter the position to insert the substring: ");
    scanf("%d", &pos);

    // Calculate length of a
    int aLen = strlen(a);
    int bLen = strlen(b);

    // Shifting characters to make space for the substring
    for (i = aLen; i >= pos; i--) {
        a[i + bLen - 1] = a[i];
    }

    // Inserting the substring at the specified position
    for (i = pos, j = 0; b[j] != '\0'; i++, j++) {
        a[i] = b[j];
    }

    printf("Resultant string after insertion: %s", a);

    return 0;
}




// Method 2 Codetantra
#include <stdio.h>
#include <string.h>

int main() {
    char a[200], b[100], c[200];
    int position, i;

    printf("main string : ");
    fgets(a, sizeof(a), stdin);
    a[strlen(a) - 1] = '\0'; // remove newline character

    printf("sub string : ");
    fgets(b, sizeof(b), stdin);
    b[strlen(b) - 1] = '\0'; // remove newline character

    printf("position : ");
    scanf("%d", &position);
    position += 1;

    strncpy(c, a, position - 1); // copy first part into temp
    c[position - 1] = '\0'; // null terminate temp string

    strcat(c, b); // concatenate substring to temp
    strcat(c, a + position - 1); // concatenate rest of main_string to temp

    strcpy(a, c); // copy temp back to main_string

    printf("After insertion the main string : %s\n", a);

    return 0;
}
