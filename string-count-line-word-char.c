#include <stdio.h>
#include <ctype.h>

int main() {
    char text[1000];
    int lines = 0, words = 0, characters = 0;
    char ch;

    printf("Enter lines of text (enter END to complete):\n");

    // Input text until "END" is encountered
    while (1) {
        fgets(text, sizeof(text), stdin);
        if (strcmp(text, "END\n") == 0)
            break;

        lines++;

        // Counting characters and words
        for (int i = 0; text[i] != '\0'; i++) {
            characters++;
            if (isspace(text[i]) && !isspace(text[i + 1]))
                words++;
        }
    }

    printf("Character %d, Words %d, Lines %d\n", characters, words + 1, lines);

    return 0;
}


// CodeTantra developed a Robotic tool  in the year 2016    and they released in 2017   END

// Functional program


#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char text[1000];
    int lines = 0, words = 0, characters = 0;
    int in_word = 0; // Flag to indicate if currently inside a word

    printf("Enter lines of text (enter END to complete):\n");

    // Input text until "END" is encountered
    while (1) {
        fgets(text, sizeof(text), stdin);
        if (strcmp(text, "END\n") == 0)
            break;

        lines++;

        // Counting characters and words
        for (int i = 0; text[i] != '\0'; i++) {
            if (!isspace(text[i])) {
                characters++;
                // If not in word and encountered a non-space character, it's the beginning of a word
                if (!in_word) {
                    words++;
                    in_word = 1; // Set the flag to indicate that we are inside a word
                }
            } else {
                // If it's a space character
                characters++; // Count space as a character
                in_word = 0; // Set the flag to indicate that we are outside of a word
            }
        }
    }

    printf("Character %d, Words %d, Lines %d\n", characters - lines, words, lines);

    return 0;
}
