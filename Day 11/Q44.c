#include<stdio.h>
int fact(int x) {
    int c =1 ,i;
    for(i=1;i<=x;i++) {
     c=c*i;
    }
    return c;
}
int main () {
    int a;
    printf("enter the number to find factorial\n");
    scanf("%d",&a);
    printf("factorial is %d\n",fact(a));
    return 0;
}