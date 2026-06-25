#include <stdio.h>

int main() {
    int i, j, k, n1, n2;

 
    printf("Enter the number of elements in array 1 and array 2: ");
    if (scanf("%d %d", &n1, &n2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    int a[n1], b[n2], c[n1 + n2];
    printf("Enter the sorted array 1:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the sorted array 2:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }
    i = 0;
    j = 0; 
    k = 0; 

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < n2) {
        c[k] = b[j];
        j++;
        k++;
    }
    printf("Merged sorted array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d\n", c[i]);
    }
    return 0;
}
