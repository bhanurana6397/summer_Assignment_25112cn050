#include<stdio.h>
int main() {
    int n,i,j,sum,f=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array: ");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter the sum: ");
    scanf("%d",&sum);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]+a[j] == sum) {
                printf("Pair found: %d and %d\n", a[i], a[j]);
                f=1;
            }
        }
    }
    if (f==0) {
        printf("No pair found\n");
    }
    return 0;
}