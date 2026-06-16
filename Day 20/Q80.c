#include<stdio.h>
int main () {
    int r,c,i,j, sum;
    printf("Enter the number of rows and column\n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter thr elements of the matrix\n");
    for(i=0;i<r;i++){
        sum=0;
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<c;i++){
        sum=0;
        for(j=0;j<r;j++){
          sum+=a[j][i];
        }
        printf("Column %d sum is : %d\n",i+1,sum);
    }
    return 0;
}