#include<stdio.h>
int main () {
    int n,i,j;
    printf("enter the number\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        char ch='A';
        for (j=1;j<=n-i;j++){
            printf("  ");
        }
        for (j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        ch-=2;
        for (j=i-1;j>0;j--){
            printf("%c ",ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}