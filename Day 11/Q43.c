#include<stdio.h>
int prime(int x) {
    int i;
    for(i=2;i<x;i++) {
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int main () {
    int a;
    printf("enter the number to check if it is prime\n");
    scanf("%d",&a);
    if(prime(a)==1){
        printf("%d is prime\n",a);
    }
    else{
        printf("%d is not prime\n",a);
    }
    return 0;
}