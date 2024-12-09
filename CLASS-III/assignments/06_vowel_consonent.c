#include <stdio.h>
#include <ctype.h>
#include <string.h>

void countVowelsAndConsonants(char str[], int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert to lowercase for easier comparison
        if (ch >= 'a' && ch <= 'z') { // Check if it's an alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
    }
}

int main() {
    char str[100];
    int vowels, consonants;

    // Input the string
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    // Count vowels and consonants
    countVowelsAndConsonants(str, &vowels, &consonants);

    // Output the results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}