#include<stdio.h>
int sum (int n);
int main () {
 int n;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("the sum of digit of a number is %d\n",sum(n));
    return 0;
}
int sum (int n) {
    if (n==0){
        return 0;
    }
    return n%10 + sum(n/10);
}
