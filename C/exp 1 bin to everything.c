#include <stdio.h>
#include <math.h>
#include <string.h>
int bin_to_dec(long bin)
{
    int dec=0,i=0,remainder;
    while (bin!=0)
    {
        remainder=bin%10;
        dec+=remainder*pow(2,i);
        bin /= 10;
        i++;
    }
    return dec;
}
int bin_to_octal(long bin)
{    
    int oct=0,remainder;
    int dec = bin_to_dec(bin);
    int i=1;
    while (dec!=0)
    {
        remainder=dec%8;
        oct+=remainder*i;
        dec/=8;
        i*=10;
    }
    return oct;
}
int bin_to_hex(long bin)
{
    int dec = bin_to_dec(bin);
    char hex[10];
    int i=1,remainder;
    while (dec!=0)
    {
        remainder=dec%16;
        if (remainder<10)
        {
            remainder += 48;
        }
        else
        {
            remainder += 55;
        }
        hex[i++]=remainder;
        dec/=16;
    }
    for (int j=i-1;j>0;j--)
    {
        printf("%c",hex[j]);
    }
}
int main()
{
    long bin;
    int dec,oct;
    int octal;   //for second switch
    char hex[10];
    printf("Enter a binary number :");
    scanf("%d",&bin);
    int choice;
    printf("In which number system do you want to convert :");
    printf("1. Decimal\n2.Octal\n3.Hexadecimal :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            dec = bin_to_dec(bin);
            printf("Binary number %ld is %d in decimal",bin,dec);
            break;
        case 2:
            oct = bin_to_octal(bin);
            printf("Binary number %ld is %d in octal",bin,oct);
            break;
        case 3:
            bin_to_hex(bin);
            break;
    }
}