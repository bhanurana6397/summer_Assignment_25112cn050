#include <stdio.h>

int main() {
    int n, i, a[50];
    int largest, secondLargest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    largest = secondLargest = -999;

    for(i = 0; i < n; i++) {
        if(a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }

    printf("The largest element in the array is: %d\n", largest);
    printf("The second largest element in the array is: %d\n", secondLargest);

    return 0;
}