#include<stdio.h>
void main () {
    int n,i;
    printf("enter the number to find the factor of the number \n");
    scanf("%d",&n);
    printf("the factors of the number %d are \n",n);
    for (i=1;i<=n;i++){
        if (n%i==0){
            printf("%d \n",i);
        }
    }
}