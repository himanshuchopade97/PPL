#include <stdio.h>
struct  complex_num
{
    float real;
    float img;
};
float complex_add(float x_real, float x_img, float y_real, float y_img)
{
    float result_real,result_img;
    result_real = x_real + y_real;
    result_img = x_img + y_img;
    if (result_img >= 0)
    {
        printf("\nSum of two complex numbers is %.2f+%.2fi \n\n ",result_real, result_img);
    }
    else
    {
        printf("\nSum of two complex numbers is %.2f %.2fi \n\n ",result_real, result_img);
    }

}
float complex_sub(float x_real, float x_img, float y_real, float y_img)
{
    float result_real,result_img;
    result_real = x_real - y_real;
    result_img = x_img - y_img;
    if (result_img >= 0)
    {
        printf("\nSubtraction of two complex numbers is %.2f+%.2fi \n\n ",result_real, result_img);
    }
    else
    {
        printf("\nSubtraction of two complex numbers is %.2f %.2fi \n\n ",result_real, result_img);
    }
}
float complex_mult(float x_real, float x_img, float y_real, float y_img)
{
    float result_real,result_img;
    result_real = x_real * y_real;
    result_img = x_img * y_img;
    if (result_img >= 0)
    {
        printf("\nMultiplication of two complex numbers is %.2f+%.2fi \n\n ",result_real, result_img);
    }
    else
    {
        printf("\nMultiplication of two complex numbers is %.2f %.2fi \n\n ",result_real, result_img);
    }
}
float complex_div(float x_real, float x_img, float y_real, float y_img)
{
    float result_real,result_img;
    result_real = x_real / y_real;
    result_img = x_img / y_img;
    if (result_img >= 0)
    {
        printf("\nDivision of two complex numbers is %.2f+%.2fi \n\n ",result_real, result_img);
    }
    else
    {
        printf("\nDivision of two complex numbers is %.2f %.2fi \n\n ",result_real, result_img);
    }
}
int main()
{   
    struct complex_num num1,num2;
    int choice;
    while(1)
    {
        printf("Enter your choice\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit    :");
        scanf("%d",&choice);
        if (choice ==5)
        {
            printf("Exiting");
            break;
        }
        if (choice>=1 && choice<=4)
        {
            printf("Enter real and imaginary part for num 1:");
            scanf("%f %f",&num1.real,&num1.img);
            printf("Enter real and imaginary part for num 2:");
            scanf("%f %f",&num2.real,&num2.img);
        }
        if (choice==1)
        {
            complex_add(num1.real,num1.img,num2.real,num2.img);
        }
        else if (choice==2)
        {
            complex_sub(num1.real,num1.img,num2.real,num2.img);
        }
        else if(choice==3)
        {
            complex_mult(num1.real,num1.img,num2.real,num2.img);
        }
        else if(choice==4)
        {
            complex_div(num1.real,num1.img,num2.real,num2.img);
        }
        else
        {
            printf("\n\nInvalid choice. Please enter again.\n\n");
        } 
    }
}