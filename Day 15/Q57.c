#include<stdio.h>
int main () {
    int n,i,a[50],b[50];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        b[i]=a[n-1-i];
    }
    printf("The reversed array is: ");
    for(i=0;i<n;i++) {
        printf("%d ",b[i]); 
    }
    return 0;
}