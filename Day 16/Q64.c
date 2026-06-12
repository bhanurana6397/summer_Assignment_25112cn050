#include<stdio.h>
int main () {
    int n,i,j,temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array: ");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); 
    }
    for(i=0;i<n;i++) {
        for(j=1+i;j<n;j++) {
            if(a[i]==a[j]){
               for(int k=j;k<n-1;k++){
                   a[k]=a[k+1];
               }
               n--;
               j--;
            }
            
        }
    }
    printf("Array after removing duplicates: ");
    for(i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    return 0;
}