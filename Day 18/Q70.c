#include<stdio.h>
int main () {
    int n,i,j,temp,x;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }  
    for(i=0;i<n-1;i++) {
        x=i;
        for(j=i+1;j<n;j++) {
            if(arr[x]>arr[j]) {
                x=j;
            }
        }
        if(x!=i) {
            temp=arr[i];
            arr[i]=arr[x];
            arr[x]=temp;
        }
    }
    printf("Sorted elements: ");
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}