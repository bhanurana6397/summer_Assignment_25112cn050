#include <stdio.h>

int main()
{
    int a[100], n, i, choice, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\n===== ARRAY OPERATIONS MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Find Sum\n");
        printf("3. Find Maximum Element\n");
        printf("4. Find Minimum Element\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum += a[i];
                }
                printf("Sum = %d\n", sum);
                break;

            case 3:
            {
                int max = a[0];
                for(i = 1; i < n; i++)
                {
                    if(a[i] > max)
                        max = a[i];
                }
                printf("Maximum Element = %d\n", max);
                break;
            }

            case 4:
            {
                int min = a[0];
                for(i = 1; i < n; i++)
                {
                    if(a[i] < min)
                        min = a[i];
                }
                printf("Minimum Element = %d\n", min);
                break;
            }

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}
