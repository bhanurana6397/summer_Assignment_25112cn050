#include<stdio.h>
int main () {
    int n1,n2,a,b,s=1,t;
    printf("enter the no");
    scanf("%d %d",&n1,&n2);
    a=n1, b=n2;
    while(s!=0){
        s=n2%n1;
        n2=n1;
        n1=s;
    }
 t=(a*b)/n2;
 printf("%d",t);
}