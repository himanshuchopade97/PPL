#include <stdio.h>
#include <math.h>
#include <string.h>

long dec_to_bin(int dec) {
    long bin = 0;
    int remainder, i = 1;

    while (dec != 0) {
        remainder = dec % 2;
        dec /= 2;
        bin += remainder * i;
        i *= 10;
    }

    return bin;
}
long oct_to_bin(long oct) {
    long bin = 0;
    int dec = 0, i = 0;

    while (oct != 0) {
        dec += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }

    bin = dec_to_bin(dec);

    return bin;
}

void bin_conversion(int choice) 
{
    long bin;
    char hex[100];
    long oct;

    switch (choice) {
        case 1: {
            int dec;
            printf("Enter a decimal number: ");
            scanf("%d", &dec);
            bin = dec_to_bin(dec);
            printf("Binary equivalent: %ld\n", bin);
            break;
        }
        case 2: {
            char binarynum[50], hexa[50];
         int i = 0;
 
    printf("Enter the hexadecimal ");
    scanf("%s", hexa);
    printf("\n Equivalent binary value: ");
    while (hexa[i])
    {
        switch (hexa[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
            printf("1010"); break;
        case 'B':
            printf("1011"); break;
        case 'C':
            printf("1100"); break;
        case 'D':
            printf("1101"); break;
        case 'E':
            printf("1110"); break;
        case 'F':
            printf("1111"); break;
        case 'a':
            printf("1010"); break;
        case 'b':
            printf("1011"); break;
        case 'c':
            printf("1100"); break;
        case 'd':
            printf("1101"); break;
        case 'e':
            printf("1110"); break;
        case 'f':
            printf("1111"); break;
        default:
            printf("\n Invalid hexa digit %c ", hexa[i]);
            break;
        }
        i++;
        break;
    }
        }
        case 3: {
            printf("Enter an octal number: ");
            scanf("%ld", &oct);
            bin = oct_to_bin(oct);
            printf("Binary equivalent: %ld\n", bin);
            break;
        }
    }
}

int main() {
    int choice;

    printf("Choose an option:\n");
    printf("1. Convert decimal to binary\n");
    printf("2. Convert hexadecimal to binary\n");
    printf("3. Convert octal to binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    bin_conversion(choice);
}