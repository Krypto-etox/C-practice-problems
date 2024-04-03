#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    
    // Input sentence and string to be searched
    printf("Enter the sentence: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter the string to be searched: ");
    fgets(t, sizeof(t), stdin);
    
    // Removing newline characters from input
    s[strcspn(s, "\n")] = '\0';
    t[strcspn(t, "\n")] = '\0';
    
    // Search for the string within the sentence
    char *pos = strstr(s, t);
    
    if (pos != NULL) {
        // Calculate the position/index where t begins
        int index = pos - s;
        printf("String found in the sentence at the position: %d\n", index);
    } else {
        printf("-1\n");
    }
    
    return 0;
}
