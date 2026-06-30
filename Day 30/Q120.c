#include <stdio.h>

#define MAX 100

int bikeId[MAX], quantity[MAX], n = 0;
char bikeName[MAX][50], company[MAX][50];
float price[MAX];
void addBike();
void displayBikes();
void searchBike();
void updatePrice();

int main() {
    int choice;

    do {
        printf("\n===== MOTORBIKE SHOWROOM MANAGEMENT SYSTEM =====\n");
        printf("1. Add Bike\n");
        printf("2. Display Bikes\n");
        printf("3. Search Bike\n");
        printf("4. Update Bike Price\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                addBike();
                break;

            case 2:
                displayBikes();
                break;

            case 3:
                searchBike();
                break;

            case 4:
                updatePrice();
                break;

            case 5:
                printf("\nThank You! Visit Again.\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}
void addBike() {

    printf("\nEnter Bike ID: ");
    scanf("%d", &bikeId[n]);

    printf("Enter Company Name: ");
    scanf(" %[^\n]", company[n]);

    printf("Enter Bike Name: ");
    scanf(" %[^\n]", bikeName[n]);

    printf("Enter Price: ");
    scanf("%f", &price[n]);

    printf("Enter Quantity: ");
    scanf("%d", &quantity[n]);

    n++;

    printf("\nBike Added Successfully!\n");
}
void displayBikes() {
    int i;

    if(n == 0) {
        printf("\nNo Bikes Available!\n");
        return;
    }

    printf("\n================ BIKE LIST ================\n");
    printf("ID\tCompany\t\tBike Name\t\tPrice\t\tQty\n");
    printf("---------------------------------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%-15s%-20s%.2f\t%d\n",
               bikeId[i], company[i], bikeName[i], price[i], quantity[i]);
    }
}
void searchBike() {
    int id, i;

    printf("\nEnter Bike ID: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++) {
        if(bikeId[i] == id) {
            printf("\nBike Found!\n");
            printf("Bike ID   : %d\n", bikeId[i]);
            printf("Company   : %s\n", company[i]);
            printf("Bike Name : %s\n", bikeName[i]);
            printf("Price     : %.2f\n", price[i]);
            printf("Quantity  : %d\n", quantity[i]);
            return;
        }
    }

    printf("\nBike Not Found!\n");
}
void updatePrice() {
    int id, i;

    printf("\nEnter Bike ID: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++) {
        if(bikeId[i] == id) {
            printf("Current Price: %.2f\n", price[i]);

            printf("Enter New Price: ");
            scanf("%f", &price[i]);

            printf("\nPrice Updated Successfully!\n");
            return;
        }
    }

    printf("\nBike Not Found!\n");
}