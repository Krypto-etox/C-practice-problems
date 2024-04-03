#include <stdio.h>
void main(){
    char a[20], b[20];
    int i = 0, flag = 0;
    printf("Enter the first string : ");
    scanf("%s", a);
    printf("Enter the second string : ");
    scanf("%s", b);
    while(a[i] != '\0'){
        if(a[i] != b[i]){
            flag = 0;
            break;
        }
        i++;
    }
    if(flag){
        printf("Two strings are equal\n");
    } else{
        printf("Two strings are not equal\n");
    }
}



// Method 2
#include <stdio.h>
#include <string.h> // Include this header for strlen()

int main() {
    char a[20], b[20];
    int i = 0, flag = 1; // Initialize flag to 1 assuming strings are equal
    printf("Enter the first string : ");
    scanf("%s", a);
    printf("Enter the second string : ");
    scanf("%s", b);
    
    // Check if strings have the same length
    if (strlen(a) != strlen(b)) {
        flag = 0; // If lengths are different, strings can't be equal
    } else {
        // Compare characters until a difference is found or end of string is reached
        while (a[i] != '\0') {
            if (a[i] != b[i]) {
                flag = 0; // If characters are different, set flag to 0 and break
                break;
            }
            i++;
        }
    }

    if (flag) {
        printf("Two strings are equal\n");
    } else {
        printf("Two strings are not equal\n");
    }
    
    return 0;
}
