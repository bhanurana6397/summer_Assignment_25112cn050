#include<stdio.h>
int main () {
    int n,i,x,a[50],b[50];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to rotate to left: ");
    scanf("%d",&x);
    if(x>n) {
        printf("Number is greater than the number of elements in the array\n");
        return 0;
    }
    for(i=0;i<x;i++) {
        b[i]=a[i];
    }
    for(i=0;i<(n-x);i++) {
        a[i]=a[i+x]; 
    }
    for(i=0;i<x;i++) {
        a[i+(n-x)]=b[i];
    }
    printf("The rotated array is: ");
    for(i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    return 0;
}