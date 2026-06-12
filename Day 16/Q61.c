#include<stdio.h>
int main () {
    int n,i,loc = -1,a[50],key;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements in the array: ");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); 
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    for(i=0;i<n;i++) {
        if(a[i]==key) {
            loc = i;
            break;
        }
    }
    if(loc == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n",loc);
    }
    return 0;
}