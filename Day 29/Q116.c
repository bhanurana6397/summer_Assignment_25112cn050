#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item;

    printf("===== Inventory Management System =====\n");

    // Input Item Details
    printf("Enter Item ID: ");
    scanf("%d", &item.id);

    printf("Enter Item Name: ");
    scanf("%s", item.name);

    printf("Enter Quantity: ");
    scanf("%d", &item.quantity);

    printf("Enter Price per Item: ");
    scanf("%f", &item.price);

    // Display Item Details
    printf("\n===== Inventory Details =====\n");
    printf("Item ID        : %d\n", item.id);
    printf("Item Name      : %s\n", item.name);
    printf("Quantity       : %d\n", item.quantity);
    printf("Price per Item : %.2f\n", item.price);
    printf("Total Value    : %.2f\n", item.quantity * item.price);

    return 0;
}
