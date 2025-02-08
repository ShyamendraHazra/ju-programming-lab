#include <stdio.h>

int number_array[8];

char* two_digit_pronounciation_tens[] = {"TEN","ELEVEN","TWELEVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTEEN", "NINETEEN"};

char* two_digit_pronounciation_rest[] = {"TWENTY","THIRTY","FOURTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINETY"};

char* one_digit_pronounciation[] = {"ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};

void national_system();
void international_system();

int main() {

    int i;


    printf("Enter a  8 digit number :: ");

    for(i = 0; i<8; i++) {

        scanf("%d",&number_array[i]);   

    }

    for(i = 0; i<8; i++) {

        printf("%d",number_array[i]);   

    }
    char* message[2];
    message[0] = "hey \0";
    message[1] = "boy .\n\0";

    for(int i=0;i<2;i++) {
        printf("%s",message[i]);
    }
    national_system();
    return 0;
}

void national_system() {
    int n = 0;
    char* final_message[15];
    int flag = 0;
    final_message[0] = one_digit_pronounciation[number_array[7]-1];
    final_message[1] = "CRORE";
    
    if(number_array[6] == 1) {
        final_message[2] = two_digit_pronounciation_tens[number_array[5]];
    } else if(number_array[6] == 0) {
        final_message[2] = number_array[5]!=0?one_digit_pronounciation[number_array[5]]:"";
    } else {
        final_message[2] = two_digit_pronounciation_rest[number_array[6]];
        final_message[3] = number_array[5]!=0?one_digit_pronounciation[number_array[5]]:"";
        flag = 1;
    }

    if(flag == 1) {
        final_message[4] = "LAKH";
    } else {
        final_message[3] = "LAKH";
    }

    if(number_array[4] == 1) {
        final_message[flag==1?5:4] = two_digit_pronounciation_tens[number_array[4]];
    } else if(number_array[4] == 0) {
        final_message[flag==1?5:4] = number_array[3]!=0?one_digit_pronounciation[number_array[3]]:"";
    } else {
        final_message[flag==1?5:4] = two_digit_pronounciation_rest[number_array[4]];
        final_message[flag==1?6:5] = number_array[3]!=0?one_digit_pronounciation[number_array[3]]:"";
    }

    final_message[flag==1?7:6] = "THOUSAND";

    final_message[flag==1?8:7] = one_digit_pronounciation[number_array[2]];
    final_message[flag==1?9:8] = "HUNDRED";

    if(number_array[1] == 1) {
        final_message[flag==1?10:9] = two_digit_pronounciation_tens[number_array[1]];
    } else if(number_array[1] == 0) {
        final_message[flag==1?11:10] = number_array[0]!=0?one_digit_pronounciation[number_array[0]]:"";
    } else {
        final_message[flag==1?12:11] = two_digit_pronounciation_rest[number_array[1]];
        final_message[flag==1?13:12] = number_array[0]!=0?one_digit_pronounciation[number_array[0]]:"";
    }

    final_message[flag==1?14:13] = ".\n";

    if(flag != 1) {
        final_message[14] = ".";
    }
    int i;
    for(i = 0;i<4;i++) {
        printf("%s ",final_message[i]);
    }
}