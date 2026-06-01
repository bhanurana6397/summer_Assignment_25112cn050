#include<stdio.h>
int main () {
    int n,i,j,r,fact=1,s=0;
    printf("enter the number  ");
    scanf("%d",&n);
    i=n;
    while(n>0) {
        r=n%10;
        fact=1;
        for(j=1;j<=r;j++){
            fact=fact*j;
        }
        s=s+fact;
        n=n/10;

    }
    if (s==i){
        printf("%d is a strong number \n",i);
    }
    else {
        printf("%d is not a strong number \n",i);
    }   
    return 0;
}