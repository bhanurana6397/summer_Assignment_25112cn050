#include<stdio.h>
int main () {
    int n1,n2,i;
    printf("Enter the number of elements in first array: ");
    scanf("%d",&n1);
    int a[n1];
    printf("Enter the number of elements in second array: ");
    scanf("%d",&n2);
    int b[n2],c[n1+n2];
    printf("Enter the elements of first array: ");
    for(i=0;i<n1;i++) {
        scanf("%d",&a[i]); 
    }
    printf("Enter the elements of second array: ");
    for(i=0;i<n2;i++) {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++) {
        c[i]=a[i];
    }
    for(i=0;i<n2;i++) {
        c[n1+i]=b[i];
    }
    printf("The merged array is: ");
    for(i=0;i<n1+n2;i++) {
        printf("%d ",c[i]);
    }
    return 0;
}