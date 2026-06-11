#include <stdio.h>
int main () {
    int n,i,x=0,a[50],b[50];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        if(a[i]!=0) {
            b[x]=a[i];
            x++;
        }
    }
    for (i=x;i<n;i++) {
        b[i]=0;
    }
    printf("The array after moving zeros to the end is: ");
    for(i=0;i<n;i++) {
        printf("%d ",b[i]);
    }
    return 0;
}