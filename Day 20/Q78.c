#include<stdio.h>
int main () {
    int r,i,j;
    printf("Enter the number of rows and column in the matrix\n");
    scanf("%d",&r);
    int a[r][r];
    printf("Enter the elements of the matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose of matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            if(a[i][j]!=a[j][i]){
                printf(" Not symmetric\n");
                return 0;

            }
        }
    }
    printf("Symmetric matrix\n");
    return 0;
}