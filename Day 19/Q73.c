#include <stdio.h>
int main () {
    int r1,r2,c1,c2,i,j;
    start:
    printf("Enter the number of rows and column of first matrix\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of rows and column of second matrix\n");
    scanf("%d %d",&r2,&c2);
    if (r1!=r2 || c1!=c2){
        printf("wrong Addition\n");
        goto start;
    }
    int a[r1][c1];
    printf("Enter the elements of matrix ");
    for (i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[r2][c2];
    printf("Enter the elements of matrix ");
    for (i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix sum is:\n");
    for (i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d  ",a[i][j]+b[i][j] ) ;
        }
        printf("\n");
    }
    return 0;
}
