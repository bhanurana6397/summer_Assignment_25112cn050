#include <stdio.h>

struct Bank
{
    int accountNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank b;
    int choice;
    float amount;

    printf("===== Bank Account System =====\n");

    // Input Account Details
    printf("Enter Account Number: ");
    scanf("%d", &b.accountNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", b.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &b.balance);

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Current Balance = %.2f\n", b.balance);
                break;

            case 2:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                b.balance += amount;
                printf("Amount Deposited Successfully.\n");
                break;

            case 3:
                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);

                if(amount <= b.balance)
                {
                    b.balance -= amount;
                    printf("Withdrawal Successful.\n");
                }
                else
                {
                    printf("Insufficient Balance.\n");
                }
                break;

            case 4:
                printf("Thank You for Banking with Us.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
