#include <stdio.h>

int main() {
    char text[1000];

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] - ('a' - 'A'); 
        }
    }
    printf("Converted to uppercase: %s", text);

    return 0;
}