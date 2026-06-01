#include<stdio.h>
int main () {
    int n,i;
    printf("enter the number to find largest prime factor of the number \n");
    scanf("%d",&n);
    for (i=2;i<n;i++){
        if (n%i==0){
            n=n/i;
            i--;
        }
    }
    printf("the largest prime factor of the number is %d\n",n);
    return 0;   
}