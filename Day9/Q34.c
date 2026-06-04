#include<stdio.h>
int main () {
    int n,i,j,k;
    printf("enter the number\n");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        k=1;
        for (j=n-i;j>0;j--){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}