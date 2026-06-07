#include<stdio.h>
int max(int x,int y) {
    if(x>y)
        return x;
    else
        return y;
}
int main () {
    int a,b;
    printf("enter the two numbers to find the max \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("max is %d\n",max(a,b));
    return 0;
}