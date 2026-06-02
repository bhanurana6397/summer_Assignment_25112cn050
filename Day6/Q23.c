#include<stdio.h>
int main () {
    int n,i,s=0,c;
    printf("enter the number\n");
    scanf("%d",&n);
    while (n>0) {
        c=n%2;
        if (c==1){
            s=s+1; 
        }
        n=n/2;
    }
    printf("count of set bits in a number %d \n",s);
    return 0;
}



