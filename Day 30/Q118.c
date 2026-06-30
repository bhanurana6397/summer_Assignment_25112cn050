#include <stdio.h>
#include <string.h>

int main() {
    int id[100], n = 0, choice, searchId, i;
    char title[100][50], author[100][50];

    do {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &id[n]);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", title[n]);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", author[n]);

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("\nNo books available!\n");
                }
                else {
                    printf("\n===== BOOK LIST =====\n");
                    printf("ID\tTitle\t\t\tAuthor\n");
                    printf("----------------------------------------------\n");

                    for(i = 0; i < n; i++) {
                        printf("%d\t%-20s%-20s\n", id[i], title[i], author[i]);
                    }
                }
                break;

            case 3:
                printf("\nEnter Book ID to Search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(id[i] == searchId) {
                        printf("\nBook Found!\n");
                        printf("Book ID : %d\n", id[i]);
                        printf("Title   : %s\n", title[i]);
                        printf("Author  : %s\n", author[i]);
                        break;
                    }
                }

                if(i == n)
                    printf("Book Not Found!\n");

                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}