#include<stdio.h>
int main () {
    int n1,n2,s=1;
    printf("enter the two number first small then large");
    scanf("%d %d",&n1,&n2);
    while(s!=0){
        s=n2%n1;
        n2=n1;
        n1=s;
    }
    printf("the gcd is %d\n",n2);
    return 0;
}