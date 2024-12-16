#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversedStr[100];
    int length, isPalindrome = 1;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    // Reverse the string
    for (int i = 0; i < length; i++) {
        reversedStr[i] = str[length - i - 1];
    }
    reversedStr[length] = '\0'; // Null-terminate the reversed string

    // Check if the input string is a palindrome
    for (int i = 0; i < length; i++) {
        if (str[i] != reversedStr[i]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Print the reversed string
    printf("Reversed string: %s\n", reversedStr);

    // Check and print whether it's a palindrome
    if (isPalindrome) {
        printf("The input string is a Palindrome.\n");
    } else {
        printf("The input string is NOT a Palindrome.\n");
    }

    return 0;
}