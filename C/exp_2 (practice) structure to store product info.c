#include <stdio.h>
#include <string.h>
struct product_info
{
    int num;
    char name[50];
    float price;
};
int amount_calc(float price,int quantity)
{
    int total_amount=price*quantity;
    return total_amount;
}
int main()
{
    struct product_info product={1011,"Notebook",50};
    printf("Product name: %s\n",product.name);
    printf("Price: %.2f\n",product.price);
    printf("Enter the quantity you want to buy :");
    int quantity;
    scanf("%d",&quantity);
    int amount=amount_calc(product.price,quantity);
    printf("Total amount to pay: %d\n",amount);


}

