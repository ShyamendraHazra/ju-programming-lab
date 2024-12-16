#include <stdio.h>


int Strlen(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}


void Strcpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
}


void Strcat(char str1[], char str2[]) {
    int i = Strlen(str1);
    int j = 0;
    while (str2[j] != '\0') {
        str1[i++] = str2[j++];
    }
    str1[i] = '\0';
}


void Strrev(char str[]) {
    int len = Strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}


int Strcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

int main() {
    char str1[100], str2[100], result[100];
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Strlen\n");
        printf("2. Strcpy\n");
        printf("3. Strcat\n");
        printf("4. Strrev\n");
        printf("5. Strcmp\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                gets(str1);
                printf("Length of the string: %d\n", Strlen(str1));
                break;

            case 2:
                printf("Enter a string to copy: ");
                gets(str1);
                Strcpy(result, str1);
                printf("Copied string: %s\n", result);
                break;

            case 3:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                Strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;

            case 4:
                printf("Enter a string to reverse: ");
                gets(str1);
                Strrev(str1);
                printf("Reversed string: %s\n", str1);
                break;

            case 5:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                int cmp = Strcmp(str1, str2);
                if (cmp == 0)
                    printf("Strings are equal.\n");
                else if (cmp > 0)
                    printf("First string is greater.\n");
                else
                    printf("Second string is greater.\n");
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}