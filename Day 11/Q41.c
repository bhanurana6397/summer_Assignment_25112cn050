#include<stdio.h>
int sum(int x,int y) {
    return x+y;
}
int main () {
    int a,b;
    printf("enter the two numbers to find the sum\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("sum is %d\n",sum(a,b));
    return 0;
}
