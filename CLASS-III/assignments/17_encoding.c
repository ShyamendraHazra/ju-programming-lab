#include <stdio.h>

int main() {
    char line[100];
    printf("Enter a line: ");
    gets(line);

    for (int i = 0; line[i] != '\0'; i++) {
        if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
            line[i] = line[i] + 1; 
            if (line[i] == 'z' + 1) line[i] = 'a';
            if (line[i] == 'Z' + 1) line[i] = 'A';
        } else if (line[i] >= '0' && line[i] <= '9') {
            line[i] = (line[i] - '0' + 1) % 10 + '0'; 
        }
    }

    printf("Encoded line: %s\n", line);

    return 0;
}