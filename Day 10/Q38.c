#include<stdio.h>
int main () {
    int n,i,j;
    printf("enter the number\n");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        for (j=1;j<=i;j++){
         printf("  ");    
        }
        for (j=1;j<=2*(n-i)-1;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}