#include<stdio.h>
void fibb(int n);
int main () {
    int n;
    printf("enter a number   ");
    scanf("%d",&n);
    fibb(n);
    return 0;
}
void fibb(int n){
    int a=0,b=1,c;
    if (n==1) {
        printf("%d",a);
    }
    else if (n==2){
        printf("%d %d",a,b);
    }
    else if (n>2){
        printf("%d %d ",a,b);
        for (int i=3;i<=n;i++){
            c=a+b;
            printf("%d ",c);
            a=b;
            b=c;
        }
    }
}