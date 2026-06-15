#include<stdio.h>
int main () {
    int r,i,j,s1=0,s2=0;
    printf("Enter the order of the matrix\n");
    scanf("%d",&r);
    int a[r][r];
    printf("Enter the elements of the matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Main diagonal sum : ");
    for(i=0;i<r;i++){
        s1=s1+a[i][i];
    }
    printf("%d\n",s1);
    printf("Secondary diagonal sum : ");
    for(i=0;i<r;i++){
        s2=s2+a[i][r-1-i];
    }
    printf("%d\n",s2);
    printf("Total sum is : ");
    printf("%d\n",s1+s2);
    return 0;
}