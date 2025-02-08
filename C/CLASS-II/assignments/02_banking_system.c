#include <stdio.h>
#include <stdlib.h>

void flag_checker(int flag);

int main() {

    int denominations[4] = {100,50,20,10};
    int number_of_notes[4] = {0,0,0,0};

    int ammount;
    int flag = 0;

    printf("Enter the ammount :: ");
    scanf("%d", &ammount);

    if(ammount %10 != 0) {
        flag = 1;
        flag_checker(flag);
    }

    int i = 0;
    while(i<4) {
        
        if(denominations[i] > ammount) {

            if(i == 3 && ammount != 0) {
                flag = 1;
                break;
            }

            i++;
            continue;
        }

        number_of_notes[i] = ammount / denominations[i];
        ammount %= denominations[i];
        i++;
        
    }

    flag_checker(flag);

    printf("The ammount can be paid with :: ");

    for(i = 0; i < 4; i++) {
        printf("%d notes of %d | ", number_of_notes[i],denominations[i]);
    }

    printf(".\n");

    return 0;
}

void flag_checker(int flag) {
    if (flag == 1) {
        printf("The given ammount cannot be paid using available denomination\n");
        exit(EXIT_FAILURE);
    }
}   