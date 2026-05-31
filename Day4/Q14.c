#include<stdio.h>
int main () {
    int n,i,a=0,b=1,s;
    printf("enter the term to find nth term of fibonacci series \n"); //let say n>2
    scanf("%d",&n);
    printf("The series nth term is \n");
    for (i=1;i<n-1;i++){
        s=a+b;
        a=b;
        b=s;
    }
    printf("%d\n",s);
}