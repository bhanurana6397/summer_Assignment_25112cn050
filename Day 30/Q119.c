#include <stdio.h>

int main() {
    int id[100], n = 0, choice, searchId, i;
    char name[100][50], department[100][50];
    float salary[100];

    do {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &id[n]);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", name[n]);

                printf("Enter Department: ");
                scanf(" %[^\n]", department[n]);

                printf("Enter Salary: ");
                scanf("%f", &salary[n]);

                n++;
                printf("Employee Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("\nNo Employee Records Found!\n");
                } else {
                    printf("\n===== EMPLOYEE RECORDS =====\n");
                    printf("ID\tName\t\t\tDepartment\t\tSalary\n");
                    printf("---------------------------------------------------------------\n");

                    for(i = 0; i < n; i++) {
                        printf("%d\t%-20s%-20s%.2f\n",
                               id[i], name[i], department[i], salary[i]);
                    }
                }
                break;

            case 3:
                printf("\nEnter Employee ID to Search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(id[i] == searchId) {
                        printf("\nEmployee Found!\n");
                        printf("Employee ID : %d\n", id[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Department  : %s\n", department[i]);
                        printf("Salary      : %.2f\n", salary[i]);
                        break;
                    }
                }

                if(i == n)
                    printf("Employee Not Found!\n");

                break;

            case 4:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}