#include<stdio.h>
int main () {
    int n,i,x,a[50],b[50];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to rotate to right: ");
    scanf("%d",&x);
    if(x>n) {
        printf("Number is greater than the number of elements in the array\n");
        return 0;
    }
    for(i=0;i<x;i++) {
        b[i]=a[n-x+i];
    }
    for(i=0;i<(n-x);i++) {
        a[n-1-i]=a[n-x-1-i]; 
    }
    for(i=0;i<x;i++) {
        a[i]=b[i];
    }
    printf("The rotated array is: ");
    for(i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    return 0;
}