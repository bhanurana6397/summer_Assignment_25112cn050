#include<stdio.h>
int main() {
    int n,i,a[50],s=0,num;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("enter the number to be searched: ");
    scanf("%d",&num);
    for(i=0;i<n;i++) {
        if(a[i]==num) {
            s=1;
            break; 
        }
    }
    if(s==1) {
        printf("Element %d found at index %d", num, i);
    }
    else {
        printf("Element %d not found in the array", num);
    }
    return 0;
}