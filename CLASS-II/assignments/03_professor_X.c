#include <stdio.h>

int main() {

    int last_room_no;
    int flag = 0;
    int X = 1;
    int leftSum = 0;
    int rightSum = 0;
    int totalSum = 0;
    printf("Enter a total number of rooms :: ");
    scanf("%d", &last_room_no);

    totalSum = ((last_room_no*(last_room_no + 1)) / 2);

    while(X <= last_room_no) {
        leftSum += X - 1;
        rightSum = totalSum - (leftSum+X);
        if(leftSum == rightSum) {
            flag = 1;
            break;
        }
        X++;
    }

    if(flag == 0) {
        printf("with current no. of rooms professor won't get a room!\n");
    } else {
        printf("For total of %d rooms professor will get room no. %d.\n", last_room_no, X);
    }

}