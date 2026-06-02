#include<stdio.h>
#include<math.h>
int main () {
    int n,i=0,a,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    while (n>0){
        a=n%10;
        if(a==0){
            sum=sum+0;
        }
        else {
            sum=sum+pow(2,i);
        }
        i++;
        n=n/10;  
    }
    printf("the decimal number is %d\n",sum);
    return 0;
}